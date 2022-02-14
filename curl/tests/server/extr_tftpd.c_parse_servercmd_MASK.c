
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct testcase {char* testno; int writedelay; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char**,size_t*,char*,char*,int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*,int*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (int) ;
 char* FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(struct testcase *VAR_1)
{
  FILE *VAR_2;
  char *VAR_3;
  int VAR_4;

  VAR_3 = FUNC_8(VAR_1->testno);

  VAR_2 = FUNC_1(VAR_3, "rb");
  if(!VAR_2) {
    VAR_4 = VAR_0;
    FUNC_4("fopen() failed with error: %d %s", VAR_4, FUNC_7(VAR_4));
    FUNC_4("  [1] Error opening file: %s", VAR_3);
    FUNC_4("  Couldn't open test file %ld", VAR_1->testno);
    return 1;
  }
  else {
    char *VAR_5 = ((void*)0);
    char *VAR_6 = ((void*)0);
    size_t VAR_7 = 0;
    int VAR_8 = 0;


    VAR_4 = FUNC_3(&VAR_5, &VAR_7, "reply", "servercmd", VAR_2);
    FUNC_0(VAR_2);
    if(VAR_4) {
      FUNC_4("getpart() failed with error: %d", VAR_4);
      return 1;
    }

    VAR_6 = VAR_5;
    while(VAR_6 && VAR_7) {
      char *VAR_9;
      if(1 == FUNC_5(VAR_6, "writedelay: %d", &VAR_8)) {
        FUNC_4("instructed to delay %d secs between packets", VAR_8);
        VAR_1->writedelay = VAR_8;
      }
      else {
        FUNC_4("Unknown <servercmd> instruction found: %s", VAR_6);
      }

      VAR_9 = FUNC_6(VAR_6, '\r');
      if(!VAR_9)
        VAR_9 = FUNC_6(VAR_6, '\n');

      if(VAR_9) {

        while((*VAR_9 == '\r') || (*VAR_9 == '\n'))
          VAR_9++;

        if(!*VAR_9)

          break;
        VAR_6 = VAR_9;
      }
      else
        break;
    }
    FUNC_2(VAR_5);
  }

  return 0;
}
