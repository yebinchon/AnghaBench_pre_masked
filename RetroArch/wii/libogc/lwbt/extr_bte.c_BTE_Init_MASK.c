
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct timespec {int tv_sec; scalar_t__ tv_nsec; } ;
struct bt_state {int dummy; } ;
struct TYPE_3__ {int timer_svc; int hci_cmdq; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct timespec*,struct timespec*,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 () ;
 TYPE_1__ VAR_3 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (TYPE_1__*,int ,int) ;
 int FUNC_14 () ;
 int FUNC_15 () ;

void FUNC_16()
{
 u32 VAR_4;
 struct timespec VAR_5;

 FUNC_0("BTE_Init()\n");

 FUNC_13(&VAR_3,0,sizeof(struct bt_state));

 FUNC_8();
 FUNC_11();
 FUNC_14();

 FUNC_1(&VAR_3.hci_cmdq);
 FUNC_2(&VAR_3.timer_svc);

 FUNC_4(VAR_4);
 FUNC_6();
 FUNC_9();
 FUNC_12();
 FUNC_15();

 FUNC_10(VAR_1);
 FUNC_7(VAR_0);
 FUNC_5(VAR_4);

 VAR_5.tv_sec = 1;
 VAR_5.tv_nsec = 0;
 FUNC_3(VAR_3.timer_svc,&VAR_5,&VAR_5,VAR_2, ((void*)0));
}
