
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int hci_status; } ;
typedef TYPE_2__ tBTM_ROLE_SWITCH_CMPL ;
typedef int UINT8 ;
struct TYPE_10__ {int remote_bd_addr; } ;
struct TYPE_8__ {int (* p_switch_role_cb ) (TYPE_2__*) ;TYPE_4__ switch_role_ref_data; } ;
struct TYPE_11__ {TYPE_1__ devcb; } ;
typedef scalar_t__ BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_7__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*,int) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int FUNC_4 (TYPE_2__*) ;

void FUNC_5 (UINT8 VAR_2, BD_ADDR VAR_3)
{
    tBTM_ROLE_SWITCH_CMPL VAR_4;
    FUNC_0 ("btm_acl_report_role_change\n");
    if (VAR_1.devcb.p_switch_role_cb
            && (VAR_3 && (0 == FUNC_1(VAR_1.devcb.switch_role_ref_data.remote_bd_addr, VAR_3, VAR_0)))) {
        FUNC_2 (&VAR_4, &VAR_1.devcb.switch_role_ref_data, sizeof(tBTM_ROLE_SWITCH_CMPL));
        VAR_4.hci_status = VAR_2;
        (*VAR_1.devcb.p_switch_role_cb)(&VAR_4);
        FUNC_3 (&VAR_1.devcb.switch_role_ref_data, 0, sizeof(tBTM_ROLE_SWITCH_CMPL));
        VAR_1.devcb.p_switch_role_cb = ((void*)0);
    }
}
