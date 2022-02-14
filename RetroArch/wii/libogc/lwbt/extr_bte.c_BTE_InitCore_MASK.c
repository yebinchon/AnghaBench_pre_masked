
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int s32 ;
typedef int btecallback ;
struct TYPE_3__ {scalar_t__ hci_cmddone; int * usrdata; int cb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

s32 FUNC_5(btecallback VAR_3)
{
 u32 VAR_4;

 FUNC_0(VAR_4);
 VAR_2.cb = VAR_3;
 VAR_2.usrdata = ((void*)0);
 VAR_2.hci_cmddone = 0;
 FUNC_2(&VAR_2);
 FUNC_3(VAR_1);
 FUNC_4();
 FUNC_1(VAR_4);

 return VAR_0;
}
