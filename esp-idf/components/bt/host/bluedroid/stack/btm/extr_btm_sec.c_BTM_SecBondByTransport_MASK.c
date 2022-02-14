
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tBT_TRANSPORT ;
typedef int tBT_DEVICE_TYPE ;
typedef int tBTM_STATUS ;
typedef int tBLE_ADDR_TYPE ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,scalar_t__,int ,int *,int *) ;

tBTM_STATUS FUNC_2 (BD_ADDR VAR_5, tBT_TRANSPORT VAR_6,
                                    UINT8 VAR_7, UINT8 *VAR_8, UINT32 VAR_9[])
{

    tBT_DEVICE_TYPE VAR_10;
    tBLE_ADDR_TYPE VAR_11;

    FUNC_0(VAR_5, &VAR_10, &VAR_11);

    if ((VAR_6 == VAR_4 && (VAR_10 & VAR_1) == 0) ||
            (VAR_6 == VAR_3 && (VAR_10 & VAR_2) == 0)) {
        return VAR_0;
    }


    return FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
