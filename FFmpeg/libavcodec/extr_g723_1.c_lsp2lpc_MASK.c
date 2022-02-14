
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_3(int16_t *VAR_2)
{
    int VAR_3[VAR_0 / 2 + 1];
    int VAR_4[VAR_0 / 2 + 1];
    int VAR_5, VAR_6;


    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        int VAR_7 = (VAR_2[VAR_6] >> 7) & 0x1FF;
        int VAR_8 = VAR_2[VAR_6] & 0x7f;
        int VAR_9 = VAR_1[VAR_7] * (1 << 16);
        int VAR_10 = (VAR_1[VAR_7 + 1] - VAR_1[VAR_7]) *
                          (((VAR_8 << 8) + 0x80) << 1);

        VAR_2[VAR_6] = -(FUNC_2(1 << 15, VAR_9 + VAR_10) >> 16);
    }






    VAR_3[0] = 1 << 28;
    VAR_3[1] = (VAR_2[0] + VAR_2[2]) * (1 << 14);
    VAR_3[2] = VAR_2[0] * VAR_2[2] + (2 << 28);

    VAR_4[0] = 1 << 28;
    VAR_4[1] = (VAR_2[1] + VAR_2[3]) * (1 << 14);
    VAR_4[2] = VAR_2[1] * VAR_2[3] + (2 << 28);





    for (VAR_5 = 2; VAR_5 < VAR_0 / 2; VAR_5++) {
        VAR_3[VAR_5 + 1] = FUNC_1(VAR_3[VAR_5 - 1] + (int64_t)FUNC_0(VAR_3[VAR_5], VAR_2[2 * VAR_5]));
        VAR_4[VAR_5 + 1] = FUNC_1(VAR_4[VAR_5 - 1] + (int64_t)FUNC_0(VAR_4[VAR_5], VAR_2[2 * VAR_5 + 1]));

        for (VAR_6 = VAR_5; VAR_6 >= 2; VAR_6--) {
            VAR_3[VAR_6] = FUNC_0(VAR_3[VAR_6 - 1], VAR_2[2 * VAR_5]) +
                    (VAR_3[VAR_6] >> 1) + (VAR_3[VAR_6 - 2] >> 1);
            VAR_4[VAR_6] = FUNC_0(VAR_4[VAR_6 - 1], VAR_2[2 * VAR_5 + 1]) +
                    (VAR_4[VAR_6] >> 1) + (VAR_4[VAR_6 - 2] >> 1);
        }

        VAR_3[0] >>= 1;
        VAR_4[0] >>= 1;
        VAR_3[1] = ((VAR_2[2 * VAR_5] * 65536 >> VAR_5) + VAR_3[1]) >> 1;
        VAR_4[1] = ((VAR_2[2 * VAR_5 + 1] * 65536 >> VAR_5) + VAR_4[1]) >> 1;
    }


    for (VAR_5 = 0; VAR_5 < VAR_0 / 2; VAR_5++) {
        int64_t VAR_11 = VAR_3[VAR_5 + 1] + VAR_3[VAR_5];
        int64_t VAR_12 = VAR_4[VAR_5 + 1] - VAR_4[VAR_5];

        VAR_2[VAR_5] = FUNC_1(((VAR_11 + VAR_12) * 8) + (1 << 15)) >> 16;
        VAR_2[VAR_0 - VAR_5 - 1] = FUNC_1(((VAR_11 - VAR_12) * 8) +
                                                (1 << 15)) >> 16;
    }
}
