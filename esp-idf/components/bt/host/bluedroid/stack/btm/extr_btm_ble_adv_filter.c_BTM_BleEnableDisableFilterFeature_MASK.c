
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_BLE_REF_VALUE ;
typedef int tBTM_BLE_PF_STATUS_CBACK ;
typedef int UINT8 ;
struct TYPE_2__ {int * p_filt_stat_cback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int ,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_3 () ;
 int VAR_8 ;
 int FUNC_4 (int *,int ,int) ;

tBTM_STATUS FUNC_5(UINT8 VAR_9,
        tBTM_BLE_PF_STATUS_CBACK *VAR_10,
        tBTM_BLE_REF_VALUE VAR_11)
{
    UINT8 VAR_12[20], *VAR_13;
    tBTM_STATUS VAR_14 = VAR_5;

    if (VAR_4 != FUNC_3()) {
        return VAR_14;
    }

    VAR_13 = VAR_12;
    FUNC_4(VAR_12, 0, 20);


    VAR_13 = VAR_12;
    FUNC_1(VAR_13, VAR_1);

    FUNC_1(VAR_13, VAR_9);

    if ((VAR_14 = FUNC_0 (VAR_6,
                                         VAR_2, VAR_12,
                                         VAR_8)) == VAR_3) {
        VAR_7.p_filt_stat_cback = VAR_10;
        FUNC_2(VAR_9, VAR_1, VAR_0,
                                 VAR_11, ((void*)0), ((void*)0));
    }
    return VAR_14;
}
