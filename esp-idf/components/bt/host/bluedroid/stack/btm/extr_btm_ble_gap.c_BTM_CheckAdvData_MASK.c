
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;

UINT8 *FUNC_2( UINT8 *VAR_1, UINT8 VAR_2, UINT8 *VAR_3)
{
    UINT8 *VAR_4 = VAR_1;
    UINT8 VAR_5;
    UINT8 VAR_6;
    FUNC_0("BTM_CheckAdvData type=0x%02X", VAR_2);

    FUNC_1(VAR_5, VAR_4);

    while ( VAR_5 && (VAR_4 - VAR_1 <= VAR_0)) {
        FUNC_1(VAR_6, VAR_4);

        if ( VAR_6 == VAR_2 ) {

            *VAR_3 = VAR_5 - 1;
            return VAR_4;
        }
        VAR_4 += VAR_5 - 1;
        FUNC_1(VAR_5, VAR_4);
    }

    *VAR_3 = 0;
    return ((void*)0);
}
