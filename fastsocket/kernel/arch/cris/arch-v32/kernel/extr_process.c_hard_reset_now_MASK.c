
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key; int cnt; int cmd; int member_0; } ;
typedef TYPE_1__ reg_timer_rw_wd_ctrl ;


 int FUNC_0 (int ,int ,int ,TYPE_1__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 int VAR_3 ;

void
FUNC_5(void)
{
 FUNC_3("*** HARD RESET ***\n");
 FUNC_2();




{
 reg_timer_rw_wd_ctrl VAR_4 = {0};

 FUNC_4();

 VAR_4.key = 16;
 VAR_4.cnt = 1;
 VAR_4.cmd = VAR_1;

        FUNC_1();
 FUNC_0(VAR_3, VAR_0, VAR_2, VAR_4);
}


 while (1)
  ;
}
