
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {TYPE_4__* p_first_ccb; } ;
struct TYPE_17__ {scalar_t__ disc_reason; scalar_t__ transport; TYPE_4__* p_pending_ccb; TYPE_4__** p_fixed_ccbs; int remote_bd_addr; int link_xmit_data_q; TYPE_1__ ccb_queue; int link_role; int link_state; } ;
typedef TYPE_3__ tL2C_LCB ;
struct TYPE_18__ {struct TYPE_18__* p_next_ccb; } ;
typedef TYPE_4__ tL2C_CCB ;
typedef scalar_t__ tBT_TRANSPORT ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_16__ {int (* pL2CA_FixedConn_Cb ) (scalar_t__,int ,void*,scalar_t__,scalar_t__) ;} ;
struct TYPE_14__ {scalar_t__ acl_disc_reason; } ;
struct TYPE_13__ {TYPE_2__* fixed_reg; void* is_ble_connecting; } ;
typedef int BT_HDR ;
typedef void* BOOLEAN ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,void*) ;
 TYPE_12__ VAR_10 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ,scalar_t__*) ;
 TYPE_10__ VAR_11 ;
 scalar_t__ FUNC_6 (TYPE_3__*,scalar_t__) ;
 TYPE_3__* FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__,int ,void*,scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__,int ,void*,scalar_t__,scalar_t__) ;

BOOLEAN FUNC_17 (UINT16 VAR_12, UINT8 VAR_13)
{
    tL2C_LCB *VAR_14;

    tL2C_CCB *VAR_15;

    BOOLEAN VAR_16 = VAR_9;
    BOOLEAN VAR_17 = VAR_9;
    tBT_TRANSPORT VAR_18 = VAR_0;


    VAR_14 = FUNC_7 (VAR_12);

    if (!VAR_14) {

        FUNC_0();

        VAR_16 = VAR_2;
    } else {


        if (VAR_10.acl_disc_reason != VAR_3) {
            VAR_10.acl_disc_reason = VAR_13;
        }

        VAR_14->disc_reason = VAR_10.acl_disc_reason;


        VAR_14->link_state = VAR_8;



        if (VAR_14->transport == VAR_1) {
            FUNC_3(VAR_14->link_role, VAR_2);
        }




        for (VAR_15 = VAR_14->ccb_queue.p_first_ccb; VAR_15; ) {
            tL2C_CCB *VAR_19 = VAR_15->p_next_ccb;







            if (VAR_15 != VAR_14->p_pending_ccb) {
                FUNC_5 (VAR_15, VAR_6, &VAR_13);
            }
            VAR_15 = VAR_19;
        }



        if (VAR_14->transport == VAR_0)

        {

            FUNC_4 (VAR_14->remote_bd_addr);
        }






        if (VAR_14->ccb_queue.p_first_ccb != ((void*)0) || VAR_14->p_pending_ccb) {
            FUNC_1("l2c_link_hci_disc_comp: Restarting pending ACL request");
            VAR_18 = VAR_14->transport;


            if (VAR_14->transport == VAR_1) {
                VAR_11.is_ble_connecting = VAR_2;
                FUNC_2 (VAR_14->remote_bd_addr, VAR_14->transport);

                BT_HDR *VAR_20;
                while (!FUNC_12(VAR_14->link_xmit_data_q)) {
                    VAR_20 = FUNC_11(VAR_14->link_xmit_data_q);
                    FUNC_13(VAR_14->link_xmit_data_q, VAR_20);
                    FUNC_14(VAR_20);
                }
            } else

            {
            }
            if (FUNC_6(VAR_14, VAR_18)) {
                VAR_17 = VAR_2;
            }
        }

        VAR_14->p_pending_ccb = ((void*)0);


        if (VAR_17) {
            FUNC_10 (VAR_14);
        }
    }


    if (VAR_17 && ((VAR_14 = FUNC_8(VAR_7)) != ((void*)0))) {

        FUNC_6(VAR_14, VAR_0);
    }

    return VAR_16;
}
