
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int s32 ;
typedef int btecallback ;
struct TYPE_3__ {scalar_t__ hci_cmddone; int * usrdata; int cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *,int) ;

s32 FUNC_5(btecallback VAR_5)
{
 u32 VAR_6;
 u8 VAR_7 = 0;

 FUNC_0(VAR_6);
 VAR_4.cb = VAR_5;
 VAR_4.usrdata = ((void*)0);
 VAR_4.hci_cmddone = 0;
 FUNC_2(&VAR_4);
 FUNC_3(VAR_3);
 FUNC_4(VAR_2,VAR_1,&VAR_7,1);
 FUNC_1(VAR_6);

 return VAR_0;
}
