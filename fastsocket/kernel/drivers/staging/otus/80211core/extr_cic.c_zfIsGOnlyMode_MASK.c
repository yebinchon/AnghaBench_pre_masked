
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;


 int* VAR_0 ;

u8_t FUNC_0(zdev_t* VAR_1, u16_t VAR_2, u8_t* VAR_3)
{
    u8_t VAR_4 = VAR_3[1];
    u8_t VAR_5, VAR_6;

    if (VAR_2 < 3000) {
        for (VAR_5 = 2; VAR_5 < VAR_4+2; VAR_5++) {
            for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
                if ( ((VAR_3[VAR_5] & 0x7f) == VAR_0[VAR_6])
                     && (VAR_3[VAR_5] & 0x80) ) {
                    return 1;
                }
            }
        }
    }

    return 0;
}
