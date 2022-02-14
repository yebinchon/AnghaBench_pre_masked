
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tftphdr {char* th_data; } ;
struct testcase {int ofile; int testno; } ;
struct TYPE_2__ {struct tftphdr hdr; } ;
struct bf {int counter; TYPE_1__ buf; } ;
typedef int ssize_t ;
typedef int outfile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bf* VAR_5 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (char*,int,char*,int ) ;
 size_t VAR_6 ;
 void* FUNC_3 (char*,int,int) ;
 char VAR_7 ;
 int FUNC_4 (int,...) ;

__attribute__((used)) static ssize_t FUNC_5(struct testcase *VAR_8, int VAR_9)
{
  char *VAR_10;
  int VAR_11;
  int VAR_12;
  char *VAR_13;
  int VAR_14;
  struct bf *VAR_15;
  struct tftphdr *VAR_16;

  VAR_15 = &VAR_5[VAR_6];
  if(VAR_15->counter < -1)
    return 0;

  if(!VAR_8->ofile) {
    char VAR_17[256];
    FUNC_2(VAR_17, sizeof(VAR_17), "log/upload.%ld", VAR_8->testno);



    VAR_8->ofile = FUNC_3(VAR_17, VAR_2|VAR_3, 0777);

    if(VAR_8->ofile == -1) {
      FUNC_0("Couldn't create and/or open file %s for upload!", VAR_17);
      return -1;
    }
  }

  VAR_11 = VAR_15->counter;
  VAR_15->counter = VAR_0;
  VAR_16 = &VAR_15->buf.hdr;
  VAR_6 = !VAR_6;
  VAR_10 = VAR_16->th_data;

  if(VAR_11 <= 0)
    return -1;

  if(VAR_9 == 0)
    return FUNC_4(VAR_8->ofile, VAR_10, VAR_11);

  VAR_13 = VAR_10;
  VAR_12 = VAR_11;
  while(VAR_12--) {
    VAR_14 = *VAR_13++;
    if(VAR_7 == '\r') {
      if(VAR_14 == '\n')
        FUNC_1(VAR_8->ofile, -1, VAR_4);
      else
        if(VAR_14 == '\0')
          goto skipit;

    }


    if(1 != FUNC_4(VAR_8->ofile, &VAR_14, 1))
      break;
    skipit:
    VAR_7 = VAR_14;
  }
  return VAR_11;
}
