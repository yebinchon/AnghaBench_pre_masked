
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tftphdr {scalar_t__ th_opcode; unsigned short th_block; } ;
struct testcase {int writedelay; } ;
struct formats {int f_convert; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {int * storage; struct tftphdr hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_1 (unsigned short volatile) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 void* FUNC_5 (unsigned short) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct tftphdr* FUNC_6 () ;
 int FUNC_7 (struct testcase*,int ) ;
 int FUNC_8 (struct testcase*,struct tftphdr**,int ) ;
 int VAR_9 ;
 int FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int ,int *,int) ;
 int FUNC_11 (int ,struct tftphdr* volatile,int) ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct testcase *VAR_13, struct formats *VAR_14)
{
  int VAR_15;
  ssize_t VAR_16;

  volatile unsigned short VAR_17;
  struct tftphdr * volatile VAR_18 = FUNC_6();
  struct tftphdr * const VAR_19 = &VAR_2.hdr;

  VAR_17 = 1;



  do {
    VAR_15 = FUNC_8(VAR_13, (struct tftphdr **)&VAR_18, VAR_14->f_convert);
    if(VAR_15 < 0) {
      FUNC_4(VAR_3 + 100);
      return;
    }
    VAR_18->th_opcode = FUNC_1((unsigned short)VAR_6);
    VAR_18->th_block = FUNC_1(VAR_17);
    VAR_10 = 0;



    if(VAR_13->writedelay) {
      FUNC_2("Pausing %d seconds before %d bytes", VAR_13->writedelay,
             VAR_15);
      FUNC_13(1000*VAR_13->writedelay);
    }

    send_data:
    if(FUNC_11(VAR_8, VAR_18, VAR_15 + 4) != VAR_15 + 4) {
      FUNC_2("write");
      return;
    }
    FUNC_7(VAR_13, VAR_14->f_convert);
    for(;;) {



      VAR_16 = FUNC_10(VAR_8, &VAR_2.storage[0], sizeof(VAR_2.storage));



      if(VAR_4)
        return;
      if(VAR_16 < 0) {
        FUNC_2("read: fail");
        return;
      }
      VAR_19->th_opcode = FUNC_5((unsigned short)VAR_19->th_opcode);
      VAR_19->th_block = FUNC_5(VAR_19->th_block);

      if(VAR_19->th_opcode == VAR_7) {
        FUNC_2("got ERROR");
        return;
      }

      if(VAR_19->th_opcode == VAR_5) {
        if(VAR_19->th_block == VAR_17) {
          break;
        }

        (void) FUNC_12(VAR_8);
        if(VAR_19->th_block == (VAR_17-1)) {
          goto send_data;
        }
      }

    }
    VAR_17++;
  } while(VAR_15 == VAR_0);
}
