
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int tBT_TRANSPORT ;
struct TYPE_16__ {int sec_flags; } ;
typedef TYPE_4__ tBTM_SEC_DEV_REC ;
struct TYPE_13__ {scalar_t__ transport; int handle; int p_bda; } ;
struct TYPE_17__ {TYPE_1__ discn; int event; } ;
typedef TYPE_5__ tBTM_BL_EVENT_DATA ;
struct TYPE_18__ {scalar_t__ transport; int link_role; int hci_handle; void* link_up_issued; void* in_use; } ;
typedef TYPE_6__ tACL_CONN ;
struct TYPE_14__ {int connectable_mode; } ;
struct TYPE_15__ {TYPE_2__ inq_var; } ;
struct TYPE_12__ {TYPE_3__ ble_ctr_cb; int (* p_bl_changed_cb ) (TYPE_5__*) ;} ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_6__* FUNC_4 (int ,int ) ;
 TYPE_10__ VAR_13 ;
 TYPE_4__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_6__*,int ,int) ;
 int FUNC_7 (TYPE_5__*) ;

void FUNC_8 (BD_ADDR VAR_14, tBT_TRANSPORT VAR_15)
{
    tACL_CONN *VAR_16;
    tBTM_BL_EVENT_DATA VAR_17;



    FUNC_0 ("btm_acl_removed\n");
    VAR_16 = FUNC_4(VAR_14, VAR_15);
    if (VAR_16 != (tACL_CONN *)((void*)0)) {
        VAR_16->in_use = VAR_11;


        FUNC_2(VAR_12, VAR_14);


        if (VAR_16->link_up_issued) {
            VAR_16->link_up_issued = VAR_11;


            if (VAR_13.p_bl_changed_cb) {
                VAR_17.event = VAR_1;
                VAR_17.discn.p_bda = VAR_14;

                VAR_17.discn.handle = VAR_16->hci_handle;
                VAR_17.discn.transport = VAR_16->transport;

                (*VAR_13.p_bl_changed_cb)(&VAR_17);
            }

            FUNC_3 (VAR_0);
        }
        FUNC_6(VAR_16, 0, sizeof(tACL_CONN));
    }
}
