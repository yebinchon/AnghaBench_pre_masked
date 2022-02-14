
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int input; } ;
typedef TYPE_1__ GlobalInfo ;


 long VAR_0 ;
 long FUNC_0 (int ,char*,char*,int*) ;
 int FUNC_1 (char*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(GlobalInfo* VAR_1, int VAR_2)
{
  char VAR_3[1024];
  long int VAR_4 = 0;
  int VAR_5 = 0;

  do {
    VAR_3[0]='\0';
    VAR_4 = FUNC_0(VAR_1->input, "%1023s%n", VAR_3, &VAR_5);
    VAR_3[VAR_5]='\0';
    if(VAR_5 && VAR_3[0]) {
      FUNC_1(VAR_3, VAR_1);
    }
    else
      break;
  } while(VAR_4 != VAR_0);
}
