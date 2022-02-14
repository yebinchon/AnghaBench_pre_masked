
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_BLE_SCAN_COND_OP ;
typedef int tBTM_BLE_PF_FILT_INDEX ;
struct TYPE_6__ {int type; int bda; } ;
struct TYPE_5__ {TYPE_2__ target_addr; } ;
typedef TYPE_1__ tBTM_BLE_PF_COND_PARAM ;
typedef TYPE_2__ tBLE_BD_ADDR ;
typedef int UINT8 ;
struct TYPE_7__ {int cur_filter_target; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int VAR_7 ;
 int FUNC_3 (int *,int ) ;
 TYPE_4__ VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int ,int) ;

tBTM_STATUS FUNC_5(tBTM_BLE_SCAN_COND_OP VAR_10,
                                       tBTM_BLE_PF_FILT_INDEX VAR_11,
                                       tBTM_BLE_PF_COND_PARAM *VAR_12)
{
    UINT8 VAR_13[VAR_1 + VAR_0],
                * VAR_14 = VAR_13;
    tBTM_STATUS VAR_15 = VAR_5;
    tBLE_BD_ADDR *VAR_16 = (VAR_12 == ((void*)0)) ? ((void*)0) : &VAR_12->target_addr;

    FUNC_4(VAR_13, 0, VAR_1 + VAR_0);

    FUNC_3(VAR_14, VAR_2);
    FUNC_3(VAR_14, VAR_10);


    FUNC_3(VAR_14, VAR_11);

    if (VAR_3 == VAR_10 ||
            VAR_4 == VAR_10) {
        if (((void*)0) == VAR_16) {
            return VAR_15;
        }

        FUNC_0(VAR_14, VAR_16->bda);
        FUNC_3(VAR_14, VAR_16->type);
    }

    if ((VAR_15 = FUNC_2 (VAR_7,
                                         (UINT8)(VAR_0 + VAR_1),
                                         VAR_13,
                                         VAR_9)) != VAR_6) {
        FUNC_4(&VAR_8.cur_filter_target, 0, sizeof(tBLE_BD_ADDR));
    } else {
        FUNC_1("Broadcaster Address Filter Update failed");
    }
    return VAR_15;
}
