
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_9__ {scalar_t__ adv_inst_max; } ;
typedef TYPE_2__ tBTM_BLE_VSC_CB ;
typedef int tBTM_BLE_AD_MASK ;
struct TYPE_10__ {int flag; } ;
typedef TYPE_3__ tBTM_BLE_ADV_DATA ;
typedef scalar_t__ UINT8 ;
struct TYPE_8__ {int discoverable_mode; int connectable_mode; } ;
struct TYPE_11__ {TYPE_1__ btm_inq_vars; } ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__*,int ) ;
 int VAR_9 ;
 int FUNC_4 (scalar_t__*,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__**,TYPE_3__*) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int VAR_10 ;
 int FUNC_7 (int *,int ,int ) ;
 TYPE_4__ VAR_11 ;
 int FUNC_8 (scalar_t__*,int ,int) ;

tBTM_STATUS FUNC_9 (UINT8 VAR_12, BOOLEAN VAR_13,
                                   tBTM_BLE_AD_MASK VAR_14,
                                   tBTM_BLE_ADV_DATA *VAR_15)
{
    UINT8 VAR_16[VAR_4], *VAR_17 = VAR_16;
    UINT8 VAR_18 = (VAR_13) ?
                           VAR_5 : VAR_3;
    UINT8 *VAR_19;
    tBTM_STATUS VAR_20;
    UINT8 *VAR_21 = (UINT8 *)(VAR_16 + VAR_4 - 1);
    tBTM_BLE_VSC_CB VAR_22;

    FUNC_0(&VAR_22);
    if (0 == VAR_22.adv_inst_max) {
        FUNC_1("Controller does not support Multi ADV");
        return VAR_7;
    }

    FUNC_7(&VAR_15->flag, VAR_11.btm_inq_vars.connectable_mode,
                                 VAR_11.btm_inq_vars.discoverable_mode);

    FUNC_2("BTM_BleCfgAdvInstData called with inst_id:%d", VAR_12);
    if (VAR_12 > VAR_2 || VAR_12 == VAR_1) {
        return VAR_8;
    }

    FUNC_8(VAR_16, 0, VAR_4);

    FUNC_4(VAR_17, VAR_18);
    VAR_19 = VAR_17 ++;
    FUNC_5(&VAR_14, &VAR_17, VAR_15);
    *VAR_19 = (UINT8)(VAR_17 - VAR_16 - 2);
    FUNC_4(VAR_21, VAR_12);

    if ((VAR_20 = FUNC_3 (VAR_9,
                                         (UINT8)VAR_4,
                                         VAR_16,
                                         VAR_10))
            == VAR_6) {
        FUNC_6(VAR_18, VAR_12, VAR_0);
    }
    return VAR_20;
}
