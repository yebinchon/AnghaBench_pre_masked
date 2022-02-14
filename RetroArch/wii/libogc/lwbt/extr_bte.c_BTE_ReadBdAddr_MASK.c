
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct bd_addr {int dummy; } ;
typedef int s32 ;
typedef int btecallback ;
struct TYPE_3__ {scalar_t__ hci_cmddone; struct bd_addr* usrdata; int cb; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

s32 FUNC_5(struct bd_addr *VAR_3, btecallback VAR_4)
{
    u32 VAR_5;

    FUNC_0(VAR_5);
    VAR_2.cb = VAR_4;
    VAR_2.usrdata = VAR_3;
    VAR_2.hci_cmddone = 0;
    FUNC_2(&VAR_2);
    FUNC_3(VAR_1);
    FUNC_4();
    FUNC_1(VAR_5);

    return VAR_0;
}
