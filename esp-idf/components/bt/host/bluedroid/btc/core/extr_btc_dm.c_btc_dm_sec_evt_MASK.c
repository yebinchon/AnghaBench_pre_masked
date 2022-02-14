
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_DM_SEC_EVT ;
typedef int tBTA_DM_SEC ;
struct TYPE_3__ {int act; int pid; int sig; } ;
typedef TYPE_1__ btc_msg_t ;
typedef int btc_dm_sec_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,int,int ) ;

void FUNC_1(tBTA_DM_SEC_EVT VAR_3, tBTA_DM_SEC *VAR_4)
{
    btc_msg_t VAR_5;

    VAR_5.sig = VAR_1;
    VAR_5.pid = VAR_0;
    VAR_5.act = VAR_3;

    FUNC_0(&VAR_5, (btc_dm_sec_args_t *)VAR_4, sizeof(btc_dm_sec_args_t), VAR_2);
}
