
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ptrdiff_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int const,int const,int const,int const,int,int,int,int,int,int,int,int,int) ;

void FUNC_1(const int32_t *VAR_0, int16_t *VAR_1, ptrdiff_t VAR_2, const uint8_t *VAR_3)
{
    int VAR_4;
    const int32_t *VAR_5;
    int32_t *VAR_6;
    int VAR_7[16];
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;


    VAR_5 = VAR_0;
    VAR_6 = VAR_7;
    for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        if (VAR_3[VAR_4]) {
            FUNC_0(VAR_5[0], VAR_5[4], VAR_5[8], VAR_5[12],
                           VAR_6[0], VAR_6[4], VAR_6[8], VAR_6[12],
                           VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
        } else
            VAR_6[0] = VAR_6[4] = VAR_6[8] = VAR_6[12] = 0;

        VAR_5++;
        VAR_6++;
    }



    VAR_5 = VAR_7;
    for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        if (!VAR_5[0] && !VAR_5[1] && !VAR_5[2] && !VAR_5[3]) {
            VAR_1[0] = VAR_1[1] = VAR_1[2] = VAR_1[3] = 0;
        } else {
            FUNC_0(VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3],
                           VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3],
                           VAR_8, VAR_9, VAR_10, VAR_11, VAR_12);
        }
        VAR_5 += 4;
        VAR_1 += VAR_2;
    }

}
