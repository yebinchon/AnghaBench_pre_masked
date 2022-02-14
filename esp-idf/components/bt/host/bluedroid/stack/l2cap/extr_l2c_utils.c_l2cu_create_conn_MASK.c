
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ open_addr_type; scalar_t__ link_role; int link_state; int timer_entry; int remote_bd_addr; scalar_t__ in_use; scalar_t__ transport; scalar_t__ ble_addr_type; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef scalar_t__ tBT_TRANSPORT ;
typedef int tBT_DEVICE_TYPE ;
typedef scalar_t__ tBLE_ADDR_TYPE ;
struct TYPE_9__ {int (* supports_ble ) () ;} ;
struct TYPE_8__ {TYPE_1__* lcb_pool; } ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int *,scalar_t__*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_9 ;
 int FUNC_4 (char*,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,int ) ;
 TYPE_6__* FUNC_7 () ;
 TYPE_5__ VAR_14 ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int FUNC_10 () ;

BOOLEAN FUNC_11 (tL2C_LCB *VAR_15, tBT_TRANSPORT VAR_16)
{
    int VAR_17;
    tL2C_LCB *VAR_18 = &VAR_14.lcb_pool[0];

    BOOLEAN VAR_19;



    tBT_DEVICE_TYPE VAR_20;
    tBLE_ADDR_TYPE VAR_21 = VAR_15->open_addr_type;
    if(VAR_21 == VAR_2) {
        FUNC_0(VAR_15->remote_bd_addr, &VAR_20, &VAR_21);
    }

    if (VAR_16 == VAR_5) {
        if (!FUNC_7()->supports_ble()) {
            return VAR_6;
        }
        if(VAR_21 > VAR_1) {
            VAR_21 = VAR_0;
        }
        VAR_15->ble_addr_type = VAR_21;
        VAR_15->transport = VAR_5;

        return (FUNC_8(VAR_15));
    }




    for (VAR_17 = 0, VAR_18 = &VAR_14.lcb_pool[0]; VAR_17 < VAR_12; VAR_17++, VAR_18++) {
        if (VAR_18 == VAR_15) {
            continue;
        }

        if ((VAR_18->in_use) && (VAR_18->link_role == VAR_8)) {







            VAR_19 = FUNC_5(VAR_18->remote_bd_addr);

            FUNC_4 ("l2cu_create_conn - btm_is_sco_active_by_bdaddr() is_sco_active = %s", (VAR_19 == VAR_13) ? "TRUE" : "FALSE");


            if (VAR_19 == VAR_13) {
                continue;
            }


            if (FUNC_3(FUNC_1())) {


                VAR_15->link_state = VAR_11;
                VAR_15->link_role = VAR_7;

                if (FUNC_2 (VAR_18->remote_bd_addr, VAR_7, ((void*)0)) == VAR_3) {
                    FUNC_6 (&VAR_15->timer_entry, VAR_4, VAR_9);
                    return (VAR_13);
                }
            }
        }
    }

    VAR_15->link_state = VAR_10;

    return (FUNC_9 (VAR_15));
}
