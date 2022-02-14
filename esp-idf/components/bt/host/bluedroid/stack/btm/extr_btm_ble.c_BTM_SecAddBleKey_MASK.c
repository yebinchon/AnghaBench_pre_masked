
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBTM_SEC_DEV_REC ;
typedef int tBTM_LE_KEY_VALUE ;
typedef scalar_t__ tBTM_LE_KEY_TYPE ;
typedef int BOOLEAN ;
typedef int* BD_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int,int,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int*) ;
 int FUNC_4 (int*,scalar_t__,int *,int ) ;

BOOLEAN FUNC_5 (BD_ADDR VAR_8, tBTM_LE_KEY_VALUE *VAR_9, tBTM_LE_KEY_TYPE VAR_10)
{
    tBTM_SEC_DEV_REC *VAR_11;
    FUNC_0 ("BTM_SecAddBleKey");
    VAR_11 = FUNC_3 (VAR_8);
    if (!VAR_11 || !VAR_9 ||
            (VAR_10 != VAR_4 && VAR_10 != VAR_5 &&
             VAR_10 != VAR_3 && VAR_10 != VAR_1 &&
             VAR_10 != VAR_0 && VAR_10 != VAR_2)) {
        FUNC_1 ("BTM_SecAddBleKey()  Wrong Type, or No Device record                         for bdaddr: %08x%04x, Type: %d",

                           (VAR_8[0] << 24) + (VAR_8[1] << 16) + (VAR_8[2] << 8) + VAR_8[3],
                           (VAR_8[4] << 8) + VAR_8[5], VAR_10);
        return (VAR_6);
    }

    FUNC_0 ("BTM_SecAddLeKey()  BDA: %08x%04x, Type: 0x%02x",
                     (VAR_8[0] << 24) + (VAR_8[1] << 16) + (VAR_8[2] << 8) + VAR_8[3],
                     (VAR_8[4] << 8) + VAR_8[5], VAR_10);

    FUNC_4 (VAR_8, VAR_10, VAR_9, VAR_6);


    if (VAR_10 == VAR_5 || VAR_10 == VAR_2) {
        FUNC_2 (VAR_11);
    }



    return (VAR_7);
}
