
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_ROLE_SWITCH_CMPL ;
typedef int tBTA_DM_MSG ;
struct TYPE_3__ {int rs_res; } ;
struct TYPE_4__ {scalar_t__ rs_event; TYPE_1__ search_msg; } ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3 (tBTM_ROLE_SWITCH_CMPL *VAR_3)
{
    FUNC_1(VAR_3);
    FUNC_0("bta_dm_rs_cback:%d", VAR_2.rs_event);
    if (VAR_2.rs_event == VAR_0) {
        VAR_2.search_msg.rs_res = VAR_1;
        VAR_2.rs_event = 0;
        FUNC_2((tBTA_DM_MSG *)&VAR_2.search_msg);
    }
}
