
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; } ;
typedef int TAOS_RES ;
typedef TYPE_1__ STable ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int *,int ,TYPE_1__*) ;
 int VAR_0 ;

void FUNC_3(void *VAR_1, TAOS_RES *VAR_2, int VAR_3)
{
  STable *VAR_4 = (STable *)VAR_1;

  if (VAR_3 == 0 && VAR_2) {

    FUNC_2(VAR_2, VAR_0, VAR_4);



  }
  else {
    FUNC_1("%s select failed, code:%d\n", VAR_4->name, VAR_3);
    FUNC_0(1);
  }
}
