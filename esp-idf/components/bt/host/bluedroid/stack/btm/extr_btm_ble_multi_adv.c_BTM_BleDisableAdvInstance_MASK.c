
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_5__ {scalar_t__ adv_inst_max; } ;
typedef TYPE_1__ tBTM_BLE_VSC_CB ;
typedef int UINT8 ;
struct TYPE_7__ {int in_use; int raddr_timer_ent; } ;
struct TYPE_6__ {TYPE_3__* p_adv_inst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int VAR_5 ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 TYPE_2__ VAR_6 ;
 int FUNC_6 (int *) ;

tBTM_STATUS FUNC_7 (UINT8 VAR_7)
{
    tBTM_STATUS VAR_8 = VAR_4;
    tBTM_BLE_VSC_CB VAR_9;

    FUNC_3("BTM_BleDisableAdvInstance with inst_id:%d", VAR_7);

    FUNC_0(&VAR_9);

    if (0 == VAR_9.adv_inst_max) {
        FUNC_2("Controller does not support Multi ADV");
        return VAR_3;
    }

    if (VAR_7 < FUNC_1() &&
            VAR_7 != VAR_0) {
        if ((VAR_8 = FUNC_4(VAR_5, VAR_7, VAR_1))
                == VAR_2) {
            FUNC_5(&VAR_6.p_adv_inst[VAR_7 - 1]);
            FUNC_6(&VAR_6.p_adv_inst[VAR_7 - 1].raddr_timer_ent);
            VAR_6.p_adv_inst[VAR_7 - 1].in_use = VAR_5;
        }
    }
    return VAR_8;
}
