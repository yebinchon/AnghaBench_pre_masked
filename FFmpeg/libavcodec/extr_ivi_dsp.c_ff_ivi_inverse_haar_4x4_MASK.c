
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ptrdiff_t ;
typedef int out ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int const,int const,int const,int const,int,int,int,int,int,int,int,int,int) ;
 int FUNC_1 (int*,int ,int) ;

void FUNC_2(const int32_t *VAR_0, int16_t *VAR_1, ptrdiff_t VAR_2,
                             const uint8_t *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7;
    const int32_t *VAR_8;
    int32_t *VAR_9;
    int VAR_10[16];
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;



    VAR_8 = VAR_0;
    VAR_9 = VAR_10;
    for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        if (VAR_3[VAR_4]) {

            VAR_5 = !(VAR_4 & 2);
            VAR_6 = VAR_8[0] * (1 << VAR_5);
            VAR_7 = VAR_8[4] * (1 << VAR_5);
            FUNC_0( VAR_6, VAR_7, VAR_8[8], VAR_8[12],
                      VAR_9[0], VAR_9[4], VAR_9[8], VAR_9[12],
                      VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
        } else
            VAR_9[0] = VAR_9[4] = VAR_9[8] = VAR_9[12] = 0;

        VAR_8++;
        VAR_9++;
    }




    VAR_8 = VAR_10;
    for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        if (!VAR_8[0] && !VAR_8[1] && !VAR_8[2] && !VAR_8[3]) {
            FUNC_1(VAR_1, 0, 4 * sizeof(VAR_1[0]));
        } else {
            FUNC_0(VAR_8[0], VAR_8[1], VAR_8[2], VAR_8[3],
                      VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3],
                      VAR_11, VAR_12, VAR_13, VAR_14, VAR_15);
        }
        VAR_8 += 4;
        VAR_1 += VAR_2;
    }

}
