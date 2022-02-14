
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tBT_DEVICE_TYPE ;
typedef int tBLE_ADDR_TYPE ;
typedef int tACL_CONN ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 int FUNC_0 (int ,scalar_t__*,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (int ,int ) ;

BOOLEAN FUNC_2 (BD_ADDR VAR_5)
{
    tACL_CONN *VAR_6;
    tBT_DEVICE_TYPE VAR_7;
    tBLE_ADDR_TYPE VAR_8;
    BOOLEAN VAR_9 = VAR_3;

    if ((VAR_6 = FUNC_1(VAR_5, VAR_1)) != ((void*)0)) {
        return VAR_9;
    } else if ((VAR_6 = FUNC_1(VAR_5, VAR_2)) != ((void*)0)) {
        VAR_9 = VAR_4;
    } else {
        FUNC_0(VAR_5, &VAR_7, &VAR_8);
        VAR_9 = (VAR_7 == VAR_0);
    }
    return VAR_9;
}
