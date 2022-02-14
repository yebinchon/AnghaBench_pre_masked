
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_BLE_REF_VALUE ;
typedef int tBTM_BLE_PF_PARAM_CBACK ;
struct TYPE_4__ {int filt_logic_type; int rssi_high_thres; int dely_mode; int found_timeout_cnt; int rssi_low_thres; int num_of_tracking_entries; int lost_timeout; int found_timeout; int logic_type; int feat_seln; } ;
typedef TYPE_1__ tBTM_BLE_PF_FILT_PARAMS ;
typedef int tBTM_BLE_PF_FILT_INDEX ;
typedef int tBTM_BLE_PF_COUNT ;
typedef int tBLE_BD_ADDR ;
typedef int UINT8 ;
struct TYPE_5__ {scalar_t__ version_supported; } ;


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
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int ,int,int*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int,int,int ,int ,int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int *) ;
 scalar_t__ FUNC_9 () ;
 int VAR_14 ;
 TYPE_2__ VAR_15 ;
 int FUNC_10 (int*,int ,int) ;

tBTM_STATUS FUNC_11(int VAR_16, tBTM_BLE_PF_FILT_INDEX VAR_17,
                                       tBTM_BLE_PF_FILT_PARAMS *VAR_18,
                                       tBLE_BD_ADDR *VAR_19, tBTM_BLE_PF_PARAM_CBACK *VAR_20,
                                       tBTM_BLE_REF_VALUE VAR_21)
{
    tBTM_STATUS VAR_22 = VAR_12;
    tBTM_BLE_PF_COUNT *VAR_23 = ((void*)0);
    UINT8 VAR_24 = VAR_1 + VAR_0 +
                VAR_2;
    UINT8 VAR_25[VAR_24], *VAR_26;

    if (VAR_10 != FUNC_9()) {
        return VAR_22;
    }

    VAR_26 = VAR_25;
    FUNC_10(VAR_25, 0, VAR_24);
    FUNC_2 (" BTM_BleAdvFilterParamSetup");

    if (VAR_6 == VAR_16) {
        VAR_23 = FUNC_8(VAR_19);
        if (((void*)0) == VAR_23) {
            FUNC_1("BD Address not found!");
            return VAR_22;
        }

        FUNC_0("BTM_BleAdvFilterParamSetup : Feat mask:%d", VAR_18->feat_seln);

        FUNC_5(VAR_26, VAR_4);
        FUNC_5(VAR_26, VAR_6);


        FUNC_5(VAR_26, VAR_17);


        FUNC_4(VAR_26, VAR_18->feat_seln);

        FUNC_4(VAR_26, VAR_18->logic_type);

        FUNC_5(VAR_26, VAR_18->filt_logic_type);

        FUNC_5(VAR_26, VAR_18->rssi_high_thres);

        FUNC_5(VAR_26, VAR_18->dely_mode);

        if (0x01 == VAR_18->dely_mode) {

            FUNC_4(VAR_26, VAR_18->found_timeout);

            FUNC_5(VAR_26, VAR_18->found_timeout_cnt);

            FUNC_5(VAR_26, VAR_18->rssi_low_thres);

            FUNC_4(VAR_26, VAR_18->lost_timeout);

            if (VAR_15.version_supported > VAR_11) {
                FUNC_4(VAR_26, VAR_18->num_of_tracking_entries);
            }
        }

        if (VAR_15.version_supported == VAR_11) {
            VAR_24 = VAR_1 + VAR_0;
        } else {
            VAR_24 = VAR_1 + VAR_0 +
                  VAR_2;
        }

        if ((VAR_22 = FUNC_3 (VAR_13,
                                             (UINT8)VAR_24,
                                             VAR_25,
                                             VAR_14))
                == VAR_9) {
            return VAR_22;
        }
        FUNC_6(VAR_16, VAR_4, VAR_3,
                                 VAR_21, ((void*)0), VAR_20);
    } else if (VAR_8 == VAR_16) {

        FUNC_5(VAR_26, VAR_4);
        FUNC_5(VAR_26, VAR_8);

        FUNC_5(VAR_26, VAR_17);

        if ((VAR_22 = FUNC_3 (VAR_13,
                                             (UINT8)(VAR_1),
                                             VAR_25,
                                             VAR_14))
                == VAR_9) {
            return VAR_22;
        }
        FUNC_6(VAR_16, VAR_4, VAR_3,
                                 VAR_21, ((void*)0), VAR_20);
    } else if (VAR_7 == VAR_16) {

        FUNC_7(((void*)0), VAR_5);


        FUNC_5(VAR_26, VAR_4);
        FUNC_5(VAR_26, VAR_7);

        if ((VAR_22 = FUNC_3 (VAR_13,
                                             (UINT8)(VAR_1 - 1),
                                             VAR_25,
                                             VAR_14))
                == VAR_9) {
            return VAR_22;
        }
        FUNC_6(VAR_16, VAR_4, VAR_3,
                                 VAR_21, ((void*)0), VAR_20);
    }

    return VAR_22;
}
