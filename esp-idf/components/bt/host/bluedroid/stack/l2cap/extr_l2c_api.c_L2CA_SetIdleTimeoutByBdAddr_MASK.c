
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int p_first_ccb; } ;
struct TYPE_7__ {scalar_t__ link_state; TYPE_1__ ccb_queue; void* idle_timeout; scalar_t__ in_use; } ;
typedef TYPE_2__ tL2C_LCB ;
typedef int tBT_TRANSPORT ;
typedef void* UINT16 ;
struct TYPE_8__ {TYPE_2__* lcb_pool; } ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__ VAR_6 ;
 TYPE_2__* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

BOOLEAN FUNC_3(BD_ADDR VAR_7, UINT16 VAR_8, tBT_TRANSPORT VAR_9)
{
    tL2C_LCB *VAR_10;

    if (FUNC_2 (VAR_1, VAR_7, VAR_0)) {
        VAR_10 = FUNC_0( VAR_7, VAR_9);
        if ((VAR_10) && (VAR_10->in_use) && (VAR_10->link_state == VAR_3)) {
            VAR_10->idle_timeout = VAR_8;

            if (!VAR_10->ccb_queue.p_first_ccb) {
                FUNC_1 (VAR_10);
            }
        } else {
            return VAR_2;
        }
    } else {
        int VAR_11;
        tL2C_LCB *VAR_12 = &VAR_6.lcb_pool[0];

        for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++, VAR_12++) {
            if ((VAR_12->in_use) && (VAR_12->link_state == VAR_3)) {
                VAR_12->idle_timeout = VAR_8;

                if (!VAR_12->ccb_queue.p_first_ccb) {
                    FUNC_1 (VAR_12);
                }
            }
        }
    }

    return VAR_5;
}
