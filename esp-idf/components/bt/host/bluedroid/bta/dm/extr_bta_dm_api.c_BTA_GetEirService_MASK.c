
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tBTA_SERVICE_MASK ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*,int,scalar_t__*,scalar_t__*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__* VAR_7 ;

void FUNC_1( UINT8 *VAR_8, tBTA_SERVICE_MASK *VAR_9 )
{
    UINT8 VAR_10, VAR_11;
    UINT8 VAR_12, VAR_13 = 32;
    UINT8 VAR_14[32 * VAR_3];
    UINT16 *VAR_15 = (UINT16 *)VAR_14;
    tBTA_SERVICE_MASK VAR_16;

    FUNC_0( VAR_8, VAR_3, &VAR_12, VAR_14, VAR_13);
    for ( VAR_10 = 0; VAR_10 < VAR_12; VAR_10++ ) {
        VAR_16 = 1;
        for ( VAR_11 = 0; VAR_11 < VAR_2; VAR_11++ ) {
            if ( *(VAR_15 + VAR_10) == VAR_7[VAR_11] ) {
                *VAR_9 |= VAR_16;
                break;
            }
            VAR_16 <<= 1;
        }


        if (*(VAR_15 + VAR_10) == VAR_6) {
            *VAR_9 |= VAR_1;
        }

        if (*(VAR_15 + VAR_10) == VAR_5) {
            *VAR_9 |= VAR_0;
        }

        if (*(VAR_15 + VAR_10) == VAR_4) {
            *VAR_9 |= VAR_0;
        }
    }
}
