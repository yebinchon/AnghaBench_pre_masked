
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__*) ;

UINT8 *FUNC_1(UINT8 *VAR_4, UINT8 VAR_5, UINT8 *VAR_6)
{
    UINT8 *VAR_7 = VAR_4;
    UINT16 VAR_8;
    UINT8 VAR_9, VAR_10;
    UINT8 *VAR_11 = ((void*)0);
    UINT8 VAR_12 = 0;

    if (VAR_4) {
        FUNC_0(VAR_8, VAR_7);
        if (VAR_8 >= VAR_3) {
            if (VAR_1 == VAR_5) {
                VAR_11 = VAR_7;
                VAR_12 = VAR_2;
            } else {
                VAR_7 += VAR_0;
                VAR_8 -= VAR_3;

                while (VAR_8 > 0) {
                    VAR_9 = *VAR_7++;
                    VAR_10 = *VAR_7++;
                    if (VAR_5 == VAR_10) {
                        VAR_11 = VAR_7;
                        VAR_12 = VAR_9 - 1;
                        break;
                    }

                    if (VAR_8 > VAR_9) {
                        VAR_8 -= VAR_9;
                        VAR_8--;
                        VAR_9--;
                        VAR_7 += VAR_9;
                    } else {
                        VAR_8 = 0;
                    }
                }
            }
        }
    }

    if (VAR_6) {
        *VAR_6 = VAR_12;
    }

    return VAR_11;
}
