
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int16_t FUNC_2(int16_t* VAR_2, int16_t* VAR_3, int VAR_4,
                               int VAR_5, int16_t VAR_6)
{
    int VAR_7, VAR_8;
    int VAR_9;
    int VAR_10, VAR_11;
    int VAR_12, VAR_13;

    if (VAR_4 > 0) {
        VAR_10 = (VAR_4 * VAR_1 + 0x4000) >> 15;
        VAR_12 = 0x4000;
        VAR_13 = 15;
    } else {
        VAR_10 = (VAR_4 * VAR_0 + 0x4000) >> 15;
        VAR_12 = 0x800;
        VAR_13 = 12;
    }
    VAR_11 = (VAR_12 << 15) / FUNC_1(32768 - FUNC_0(VAR_10));
    VAR_10 >>= 1;


    VAR_7 = VAR_3[VAR_5 - 1];

    for (VAR_9 = VAR_5 - 1; VAR_9 >= 1; VAR_9--) {
        VAR_8 = (VAR_10 * VAR_3[VAR_9-1]) * 2 + 0x4000;
        VAR_8 = VAR_3[VAR_9] + (VAR_8 >> 15);

        VAR_8 = (VAR_8 * VAR_11 * 2 + VAR_12) >> VAR_13;
        VAR_2[VAR_9] = VAR_8;
    }
    VAR_8 = (VAR_10 * VAR_6) * 2 + 0x4000;
    VAR_8 = VAR_3[0] + (VAR_8 >> 15);
    VAR_8 = (VAR_8 * VAR_11 * 2 + VAR_12) >> VAR_13;
    VAR_2[0] = VAR_8;

    return VAR_7;
}
