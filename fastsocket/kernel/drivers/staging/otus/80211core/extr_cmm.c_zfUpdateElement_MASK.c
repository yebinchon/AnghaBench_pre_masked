
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef scalar_t__ u16_t ;


 int FUNC_0 (scalar_t__*,scalar_t__*,scalar_t__) ;

u16_t FUNC_1(zdev_t* VAR_0, u8_t* VAR_1, u16_t VAR_2, u8_t* VAR_3)
{
    u16_t VAR_4 = 0;
    u16_t VAR_5;

    while (VAR_4 < VAR_2) {
        VAR_5 = *(VAR_1+VAR_4+1);

        if (*(VAR_1+VAR_4) == VAR_3[0]) {
            if (VAR_3[1] <= VAR_5) {
                FUNC_0(VAR_1+VAR_4, VAR_3, VAR_3[1]+2);
                FUNC_0(VAR_1+VAR_4+VAR_3[1]+2, VAR_1+VAR_4+VAR_5+2, VAR_2-VAR_4-VAR_5-2);

                return VAR_2-(VAR_5-VAR_3[1]);
            } else {
                FUNC_0(VAR_1+VAR_4+VAR_3[1]+2, VAR_1+VAR_4+VAR_5+2, VAR_2-VAR_4-VAR_5-2);
                FUNC_0(VAR_1+VAR_4, VAR_3, VAR_3[1]+2);

                return VAR_2+(VAR_3[1]-VAR_5);
            }
        }

        VAR_4 += (VAR_5+2);
    }

    return VAR_2;
}
