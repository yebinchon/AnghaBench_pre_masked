
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ptrdiff_t ;
typedef int out ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int const,int const,int const,int const,int const,int const,int const,int const,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_1 (int*,int ,int) ;

void FUNC_2(const int32_t *VAR_0, int16_t *VAR_1, ptrdiff_t VAR_2, const uint8_t *VAR_3)
{
    int VAR_4;
    const int32_t *VAR_5;
    int32_t *VAR_6;
    int VAR_7[64];
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;


    VAR_5 = VAR_0;
    VAR_6 = VAR_7;
    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        if (VAR_3[VAR_4]) {
            FUNC_0(VAR_5[0], VAR_5[8], VAR_5[16], VAR_5[24], VAR_5[32], VAR_5[40], VAR_5[48], VAR_5[56],
                           VAR_6[0], VAR_6[8], VAR_6[16], VAR_6[24], VAR_6[32], VAR_6[40], VAR_6[48], VAR_6[56],
                           VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
        } else
            VAR_6[0] = VAR_6[8] = VAR_6[16] = VAR_6[24] = VAR_6[32] = VAR_6[40] = VAR_6[48] = VAR_6[56] = 0;

        VAR_5++;
        VAR_6++;
    }



    VAR_5 = VAR_7;
    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        if (!VAR_5[0] && !VAR_5[1] && !VAR_5[2] && !VAR_5[3] && !VAR_5[4] && !VAR_5[5] && !VAR_5[6] && !VAR_5[7]) {
            FUNC_1(VAR_1, 0, 8*sizeof(VAR_1[0]));
        } else {
            FUNC_0(VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3], VAR_5[4], VAR_5[5], VAR_5[6], VAR_5[7],
                           VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3], VAR_1[4], VAR_1[5], VAR_1[6], VAR_1[7],
                           VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
        }
        VAR_5 += 8;
        VAR_1 += VAR_2;
    }

}
