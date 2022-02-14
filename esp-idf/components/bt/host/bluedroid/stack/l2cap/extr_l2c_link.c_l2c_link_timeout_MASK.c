
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* p_first_ccb; } ;
struct TYPE_12__ {scalar_t__ link_state; int timer_entry; int handle; scalar_t__ is_bonding; TYPE_1__ ccb_queue; int (* p_echo_rsp_cb ) (int ) ;int * p_pending_ccb; } ;
typedef TYPE_2__ tL2C_LCB ;
struct TYPE_13__ {struct TYPE_13__* p_next_ccb; } ;
typedef TYPE_3__ tL2C_CCB ;
typedef int (* tL2CA_ECHO_RSP_CB ) (int ) ;
typedef scalar_t__ tBTM_STATUS ;
typedef int UINT16 ;
struct TYPE_14__ {scalar_t__ is_ble_connecting; int ble_connecting_bda; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,scalar_t__,TYPE_3__*,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (TYPE_3__*,int ,int *) ;
 int FUNC_7 (TYPE_2__*,int *,int *) ;
 TYPE_6__ VAR_16 ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ) ;

void FUNC_11 (tL2C_LCB *VAR_17)
{

    tL2C_CCB *VAR_18;


    UINT16 VAR_19;
    tBTM_STATUS VAR_20;

    FUNC_0 ("L2CAP - l2c_link_timeout() link state %d first CCB %p is_bonding:%d",
                       VAR_17->link_state, VAR_17->ccb_queue.p_first_ccb, VAR_17->is_bonding);


    if ((VAR_17->link_state == VAR_12) ||
            (VAR_17->link_state == VAR_11) ||
            (VAR_17->link_state == VAR_13) ||
            (VAR_17->link_state == VAR_14)) {
        VAR_17->p_pending_ccb = ((void*)0);



        for (VAR_18 = VAR_17->ccb_queue.p_first_ccb; VAR_18; ) {
            tL2C_CCB *VAR_21 = VAR_18->p_next_ccb;

            FUNC_6 (VAR_18, VAR_9, ((void*)0));

            VAR_18 = VAR_21;
        }


        if (VAR_17->link_state == VAR_11 &&
                VAR_16.is_ble_connecting == VAR_15) {
            FUNC_2(VAR_16.ble_connecting_bda);
        }


        FUNC_9 (VAR_17);
    }


    if (VAR_17->link_state == VAR_10) {

        if (VAR_17->p_echo_rsp_cb) {
            tL2CA_ECHO_RSP_CB *VAR_22 = &VAR_17->p_echo_rsp_cb;


            VAR_17->p_echo_rsp_cb = ((void*)0);

            (*VAR_22) (VAR_8);

            FUNC_1 ("L2CAP - ping timeout");



            for (VAR_18 = VAR_17->ccb_queue.p_first_ccb; VAR_18; ) {
                tL2C_CCB *VAR_23 = VAR_18->p_next_ccb;

                FUNC_6 (VAR_18, VAR_9, ((void*)0));

                VAR_18 = VAR_23;
            }

        }



        if (!VAR_17->ccb_queue.p_first_ccb) {
            VAR_20 = FUNC_3 (VAR_17->handle, VAR_6);

            if (VAR_20 == VAR_2) {

                VAR_19 = 0xFFFF;
            } else if (VAR_20 == VAR_1) {
                VAR_17->link_state = VAR_14;
                VAR_19 = VAR_7;
            } else if (VAR_20 == VAR_3) {
                FUNC_8(VAR_17);

                VAR_17->link_state = VAR_14;
                VAR_19 = 0xFFFF;
            } else if (VAR_20 == VAR_0) {

                VAR_19 = 0xFFFF;
            } else if ((VAR_17->is_bonding)
                       && (FUNC_4 (VAR_17->handle, VAR_6))) {
                FUNC_8(VAR_17);
                VAR_17->link_state = VAR_14;
                VAR_19 = VAR_7;
            } else {

                VAR_19 = VAR_5;
            }

            if (VAR_19 != 0xFFFF) {
                FUNC_5 (&VAR_17->timer_entry, VAR_4, VAR_19);
            }
        } else {

            FUNC_7 (VAR_17, ((void*)0), ((void*)0));
        }

    }
}
