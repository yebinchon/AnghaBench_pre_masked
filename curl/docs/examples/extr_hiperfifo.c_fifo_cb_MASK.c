
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stopped; scalar_t__ still_running; int evbase; int input; } ;
typedef TYPE_1__ GlobalInfo ;


 long VAR_0 ;
 int FUNC_0 (int ) ;
 long FUNC_1 (int ,char*,char*,int*) ;
 int FUNC_2 (char*,void*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(int VAR_1, short VAR_2, void *VAR_3)
{
  char VAR_4[1024];
  long int VAR_5 = 0;
  int VAR_6 = 0;
  GlobalInfo *VAR_7 = (GlobalInfo *)VAR_3;
  (void)VAR_1;
  (void)VAR_2;

  do {
    VAR_4[0]='\0';
    VAR_5 = FUNC_1(VAR_7->input, "%1023s%n", VAR_4, &VAR_6);
    VAR_4[VAR_6]='\0';
    if(VAR_6 && VAR_4[0]) {
      if(!FUNC_3(VAR_4, "stop")) {
        VAR_7->stopped = 1;
        if(VAR_7->still_running == 0)
          FUNC_0(VAR_7->evbase);
      }
      else
        FUNC_2(VAR_4, VAR_3);
    }
    else
      break;
  } while(VAR_5 != VAR_0);
}
