
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


struct TYPE_16__ {TYPE_4__* p_first_ccb; } ;
struct TYPE_17__ {scalar_t__ link_state; TYPE_1__ ccb_queue; scalar_t__ disc_reason; int handle; int timer_entry; scalar_t__ p_echo_rsp_cb; scalar_t__ is_bonding; int link_role; } ;
typedef TYPE_2__ tL2C_LCB ;
struct TYPE_18__ {scalar_t__ status; int bd_addr; } ;
typedef TYPE_3__ tL2C_CONN_INFO ;
struct TYPE_19__ {struct TYPE_19__* p_next_ccb; } ;
typedef TYPE_4__ tL2C_CCB ;
struct TYPE_20__ {int * sec_bd_name; int * dev_class; } ;
typedef TYPE_5__ tBTM_SEC_DEV_REC ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_15__ {int btm_def_link_super_tout; } ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (int ,int *,int *,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 TYPE_14__ VAR_19 ;
 TYPE_5__* FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,int ,TYPE_3__*) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*,int *,int ) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int ) ;

BOOLEAN FUNC_19 (UINT8 VAR_20, UINT16 VAR_21, BD_ADDR VAR_22)
{
    tL2C_CONN_INFO VAR_23;
    tL2C_LCB *VAR_24;

    tL2C_CCB *VAR_25;

    tBTM_SEC_DEV_REC *VAR_26 = ((void*)0);

    FUNC_4 (VAR_1);


    VAR_23.status = VAR_20;
    FUNC_18 (VAR_23.bd_addr, VAR_22, VAR_0);


    VAR_24 = FUNC_12 (VAR_23.bd_addr, VAR_3);


    if (!VAR_24) {
        FUNC_2 ("L2CAP got conn_comp for unknown BD_ADDR\n");
        return (VAR_4);
    }

    if (VAR_24->link_state != VAR_15) {
        FUNC_1 ("L2CAP got conn_comp in bad state: %d  status: 0x%d\n", VAR_24->link_state, VAR_20);

        if (VAR_20 != VAR_8) {
            FUNC_9 (VAR_24->handle, VAR_20);
        }

        return (VAR_4);
    }


    VAR_24->handle = VAR_21;

    if (VAR_23.status == VAR_8) {

        VAR_24->link_state = VAR_14;



        FUNC_16 (VAR_24, VAR_10);


        if ((VAR_26 = FUNC_5 (VAR_22)) != ((void*)0)) {
            FUNC_3 (VAR_23.bd_addr, VAR_26->dev_class,
                             VAR_26->sec_bd_name, VAR_21,
                             VAR_24->link_role, VAR_3);
        } else {
            FUNC_3 (VAR_23.bd_addr, ((void*)0), ((void*)0), VAR_21, VAR_24->link_role, VAR_3);
        }

        FUNC_0 (VAR_23.bd_addr, VAR_19.btm_def_link_super_tout);


        if (VAR_24->is_bonding) {
            if (FUNC_17(VAR_21)) {
                return (VAR_18);
            }
        }


        FUNC_10(VAR_4);

        FUNC_7 (&VAR_24->timer_entry);


        for (VAR_25 = VAR_24->ccb_queue.p_first_ccb; VAR_25; VAR_25 = VAR_25->p_next_ccb) {
            FUNC_8 (VAR_25, VAR_12, &VAR_23);
        }

        if (VAR_24->p_echo_rsp_cb) {
            FUNC_15 (VAR_24, ((void*)0), 0);
            FUNC_6 (&VAR_24->timer_entry, VAR_2, VAR_9);
        } else if (!VAR_24->ccb_queue.p_first_ccb) {
            FUNC_6 (&VAR_24->timer_entry, VAR_2, VAR_11);
        }
    }


    else if ((VAR_23.status == VAR_6) && FUNC_13()) {
        VAR_24->link_state = VAR_16;
        VAR_24->handle = VAR_7;
    } else {

        VAR_24->link_state = VAR_17;



        for (VAR_25 = VAR_24->ccb_queue.p_first_ccb; VAR_25; ) {
            tL2C_CCB *VAR_27 = VAR_25->p_next_ccb;

            FUNC_8 (VAR_25, VAR_13, &VAR_23);

            VAR_25 = VAR_27;
        }

        VAR_24->disc_reason = VAR_20;

        if (VAR_24->ccb_queue.p_first_ccb == ((void*)0)) {
            FUNC_14 (VAR_24);
        } else {
            if (VAR_23.status == VAR_5) {

                VAR_24->link_state = VAR_15;
            } else {
                FUNC_11(VAR_24, VAR_3);
            }
        }
    }
    return (VAR_18);
}
