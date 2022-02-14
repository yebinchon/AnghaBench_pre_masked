
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ hci_inited; scalar_t__ hci_cmddone; int * usrdata; int * cb; int timer_svc; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

void FUNC_9()
{
 u32 VAR_2;

 if(VAR_1.hci_inited==0) return;

 FUNC_0("BTE_Shutdown()\n");

 FUNC_2(VAR_2);
 FUNC_1(VAR_1.timer_svc);
 VAR_1.cb = ((void*)0);
 VAR_1.usrdata = ((void*)0);
 VAR_1.hci_cmddone = 0;
 FUNC_5(&VAR_1);
 FUNC_6(VAR_0);
 FUNC_7();
 FUNC_4(&VAR_1);
 FUNC_3(VAR_2);

 FUNC_8();
}
