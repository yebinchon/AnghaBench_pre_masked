
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ link_state; void* link_role; int timer_entry; scalar_t__ in_use; } ;
typedef TYPE_1__ tL2C_LCB ;
struct TYPE_7__ {TYPE_1__* lcb_pool; } ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 TYPE_5__ VAR_14 ;
 TYPE_1__* FUNC_5 (int ,scalar_t__,int ) ;
 TYPE_1__* FUNC_6 (int ,int ) ;
 void* FUNC_7 (TYPE_1__*) ;

BOOLEAN FUNC_8 (BD_ADDR VAR_15)
{
    tL2C_LCB *VAR_16;
    tL2C_LCB *VAR_17;
    int VAR_18;
    BOOLEAN VAR_19;


    VAR_16 = FUNC_6 (VAR_15, VAR_1);


    if (!VAR_16) {
        VAR_16 = FUNC_5 (VAR_15, VAR_2, VAR_1);
        if (!VAR_16) {
            FUNC_3 (VAR_15, VAR_5);
            FUNC_0 ("L2CAP failed to allocate LCB");
            return VAR_2;
        }

        VAR_19 = VAR_13;


        for (VAR_18 = 0, VAR_17 = &VAR_14.lcb_pool[0]; VAR_18 < VAR_12; VAR_18++, VAR_17++) {
            if (VAR_17 == VAR_16) {
                continue;
            }

            if (VAR_17->in_use) {
                VAR_19 = VAR_2;
                VAR_16->link_role = VAR_6;
                break;
            }
        }

        if (VAR_19) {
            if (!FUNC_1 (VAR_15)) {
                VAR_16->link_role = VAR_7;
            } else {
                VAR_16->link_role = FUNC_7(VAR_16);
            }
        }




        FUNC_2 (VAR_15, VAR_16->link_role);

        VAR_16->link_state = VAR_9;


        FUNC_4 (&VAR_16->timer_entry, VAR_0, VAR_8);
        return (VAR_13);
    }


    if ((VAR_16->link_state == VAR_9) || (VAR_16->link_state == VAR_10)) {


        if (!FUNC_1 (VAR_15)) {
            VAR_16->link_role = VAR_7;
        } else {
            VAR_16->link_role = FUNC_7(VAR_16);
        }


        FUNC_2 (VAR_15, VAR_16->link_role);

        VAR_16->link_state = VAR_9;
        return (VAR_13);
    } else if (VAR_16->link_state == VAR_11) {


        FUNC_3 (VAR_15, VAR_4);
    } else {
        FUNC_0("L2CAP got conn_req while connected (state:%d). Reject it\n",
                          VAR_16->link_state);


        FUNC_3 (VAR_15, VAR_3);
    }
    return (VAR_2);
}
