
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sec_flags; int rs_disc_pending; } ;
typedef TYPE_1__ tBTM_SEC_DEV_REC ;
struct TYPE_7__ {scalar_t__ switch_role_state; int remote_addr; int link_role; int encrypt_state; int hci_handle; } ;
typedef TYPE_2__ tACL_CONN ;
typedef int UINT8 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;

void FUNC_5 (tACL_CONN *VAR_9, tBTM_SEC_DEV_REC *VAR_10,
                       UINT8 VAR_11)
{
    BOOLEAN VAR_12 = VAR_8;
    FUNC_1 ("btm_cont_rswitch\n");


    if (VAR_9->switch_role_state == VAR_4) {


        if (VAR_10 != ((void*)0) && ((VAR_10->sec_flags & VAR_5) != 0)
                && !FUNC_0(VAR_9)) {
            if (FUNC_3 (VAR_9->hci_handle, VAR_7)) {
                VAR_9->encrypt_state = VAR_0;
                if (VAR_9->switch_role_state == VAR_4) {
                    VAR_9->switch_role_state = VAR_1;
                }
            } else {

                if (VAR_9->switch_role_state == VAR_4) {
                    VAR_12 = VAR_7;
                }
            }
        } else

        {
            if (VAR_9->switch_role_state == VAR_4) {
                VAR_9->switch_role_state = VAR_3;

                if (VAR_10) {
                    VAR_10->rs_disc_pending = VAR_6;
                }

                VAR_12 = FUNC_4 (VAR_9->remote_addr, (UINT8)!VAR_9->link_role);
            }
        }

        if (!VAR_12) {
            VAR_9->switch_role_state = VAR_2;
            FUNC_2(VAR_11, VAR_9->remote_addr);
        }
    }
}
