
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int prioceil; int onlyownerrelease; int nest_behavior; int mode; } ;
typedef TYPE_1__ lwp_mutex_attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_3()
{
 FUNC_1();
 if(!VAR_4) {
  lwp_mutex_attr VAR_6;

  VAR_4 = 1;

  VAR_6.mode = VAR_0;
  VAR_6.nest_behavior = VAR_1;
  VAR_6.onlyownerrelease = VAR_3;
  VAR_6.prioceil = 1;
  FUNC_0(&VAR_5,&VAR_6,VAR_2);
 }
 FUNC_2();
}
