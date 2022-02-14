
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef size_t ptrdiff_t ;
typedef int int32_t ;
typedef scalar_t__ int16_t ;


 int FUNC_0 (int const,int const,int const,int const,int const,int const,int const,int const,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int,int,int,int,int,int,int,int) ;

void FUNC_1(const int32_t *VAR_0, int16_t *VAR_1, ptrdiff_t VAR_2,
                      const uint8_t *VAR_3)
{
    int VAR_4;
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;



    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        if (VAR_3[VAR_4]) {
            FUNC_0(VAR_0[ 0], VAR_0[ 8], VAR_0[16], VAR_0[24],
                      VAR_0[32], VAR_0[40], VAR_0[48], VAR_0[56],
                      VAR_1[0 * VAR_2], VAR_1[1 * VAR_2],
                      VAR_1[2 * VAR_2], VAR_1[3 * VAR_2],
                      VAR_1[4 * VAR_2], VAR_1[5 * VAR_2],
                      VAR_1[6 * VAR_2], VAR_1[7 * VAR_2],
                      VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
        } else
            VAR_1[0 * VAR_2] = VAR_1[1 * VAR_2] =
            VAR_1[2 * VAR_2] = VAR_1[3 * VAR_2] =
            VAR_1[4 * VAR_2] = VAR_1[5 * VAR_2] =
            VAR_1[6 * VAR_2] = VAR_1[7 * VAR_2] = 0;

        VAR_0++;
        VAR_1++;
    }

}
