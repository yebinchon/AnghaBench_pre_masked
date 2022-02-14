
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tftphdr {scalar_t__ th_opcode; unsigned short th_block; } ;
struct testcase {int dummy; } ;
struct formats {int f_convert; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int * storage; struct tftphdr hdr; } ;
struct TYPE_3__ {struct tftphdr* storage; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_1 (unsigned short volatile) ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 void* FUNC_5 (unsigned short) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (int ,struct tftphdr* volatile,int) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct tftphdr* FUNC_10 () ;
 int FUNC_11 (struct testcase*,int ) ;
 scalar_t__ FUNC_12 (struct testcase*,struct tftphdr* volatile*,int,int ) ;

__attribute__((used)) static void FUNC_13(struct testcase *VAR_17, struct formats *VAR_18)
{
  ssize_t VAR_19, VAR_20;

  volatile unsigned short VAR_21;
  struct tftphdr * volatile VAR_22;
  struct tftphdr *VAR_23;

  VAR_21 = 0;
  VAR_22 = FUNC_10();



  VAR_23 = &VAR_4.hdr;
  do {
    VAR_14 = 0;
    VAR_23->th_opcode = FUNC_1((unsigned short)VAR_9);
    VAR_23->th_block = FUNC_1(VAR_21);
    VAR_21++;



send_ack:
    if(FUNC_8(VAR_12, &VAR_4.storage[0], 4) != 4) {
      FUNC_2("write: fail\n");
      goto abort;
    }
    FUNC_11(VAR_17, VAR_18->f_convert);
    for(;;) {



      VAR_19 = FUNC_7(VAR_12, VAR_22, VAR_1);



      if(VAR_7)
        goto abort;
      if(VAR_19 < 0) {
        FUNC_2("read: fail\n");
        goto abort;
      }
      VAR_22->th_opcode = FUNC_5((unsigned short)VAR_22->th_opcode);
      VAR_22->th_block = FUNC_5(VAR_22->th_block);
      if(VAR_22->th_opcode == VAR_11)
        goto abort;
      if(VAR_22->th_opcode == VAR_10) {
        if(VAR_22->th_block == VAR_21) {
          break;
        }

        (void) FUNC_9(VAR_12);
        if(VAR_22->th_block == (VAR_21-1))
          goto send_ack;
      }
    }

    VAR_20 = FUNC_12(VAR_17, &VAR_22, (int)(VAR_19 - 4), VAR_18->f_convert);
    if(VAR_20 != (VAR_19-4)) {
      if(VAR_20 < 0)
        FUNC_4(VAR_6 + 100);
      else
        FUNC_4(VAR_0);
      goto abort;
    }
  } while(VAR_20 == VAR_2);
  FUNC_11(VAR_17, VAR_18->f_convert);

  VAR_23->th_opcode = FUNC_1((unsigned short)VAR_9);

  VAR_23->th_block = FUNC_1(VAR_21);
  (void) FUNC_8(VAR_12, &VAR_4.storage[0], 4);





  VAR_19 = FUNC_7(VAR_12, &VAR_5.storage[0], sizeof(VAR_5.storage));



  if(VAR_7)
    goto abort;
  if(VAR_19 >= 4 &&
     VAR_22->th_opcode == VAR_10 &&
     VAR_21 == VAR_22->th_block) {
    (void) FUNC_8(VAR_12, &VAR_4.storage[0], 4);
  }
abort:
  return;
}
