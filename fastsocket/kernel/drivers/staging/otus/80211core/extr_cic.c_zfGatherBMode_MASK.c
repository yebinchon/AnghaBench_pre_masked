
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int u8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int*,int) ;
 int* VAR_2 ;

void FUNC_1(zdev_t* VAR_3, u8_t* VAR_4, u8_t* VAR_5)
{
    u8_t VAR_6[VAR_0 + 2];
    u8_t VAR_7, VAR_8, VAR_9 = 0;
    u8_t VAR_10;

    VAR_6[0] = VAR_1;
    VAR_6[1] = 0;

    VAR_10 = VAR_4[1];
    for (VAR_7 = 2; VAR_7 < VAR_10+2; VAR_7++) {
        for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
            if ( (VAR_4[VAR_7] & 0x7f) == VAR_2[VAR_8] ) {
                VAR_6[2+VAR_9] = VAR_4[VAR_7];

                VAR_6[1]++;
                VAR_9++;
            }
        }
    }

    VAR_10 = VAR_5[1];
    for (VAR_7 = 2; VAR_7 < VAR_10+2; VAR_7++) {
        for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
            if ( (VAR_5[VAR_7] & 0x7f) == VAR_2[VAR_8] ) {
                VAR_6[2+VAR_9] = VAR_5[VAR_7];

                VAR_6[1]++;
                VAR_9++;
            }
        }
    }

    VAR_5[0] = VAR_5[1] = 0;
    FUNC_0(VAR_4, VAR_6, VAR_6[1]+2);
}
