
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

void FUNC_2(const int32_t *VAR_0, int16_t *VAR_1, ptrdiff_t VAR_2,
                             const uint8_t *VAR_3)
{
    int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    const int32_t *VAR_10;
    int32_t *VAR_11;
    int VAR_12[64];
    int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;



    VAR_10 = VAR_0;
    VAR_11 = VAR_12;
    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        if (VAR_3[VAR_4]) {

            VAR_5 = !(VAR_4 & 4);
            VAR_6 = VAR_10[ 0] * (1 << VAR_5);
            VAR_7 = VAR_10[ 8] * (1 << VAR_5);
            VAR_8 = VAR_10[16] * (1 << VAR_5);
            VAR_9 = VAR_10[24] * (1 << VAR_5);
            FUNC_0( VAR_6, VAR_7, VAR_8, VAR_9,
                      VAR_10[32], VAR_10[40], VAR_10[48], VAR_10[56],
                      VAR_11[ 0], VAR_11[ 8], VAR_11[16], VAR_11[24],
                      VAR_11[32], VAR_11[40], VAR_11[48], VAR_11[56],
                      VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21);
        } else
            VAR_11[ 0] = VAR_11[ 8] = VAR_11[16] = VAR_11[24] =
            VAR_11[32] = VAR_11[40] = VAR_11[48] = VAR_11[56] = 0;

        VAR_10++;
        VAR_11++;
    }




    VAR_10 = VAR_12;
    for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
        if ( !VAR_10[0] && !VAR_10[1] && !VAR_10[2] && !VAR_10[3]
            && !VAR_10[4] && !VAR_10[5] && !VAR_10[6] && !VAR_10[7]) {
            FUNC_1(VAR_1, 0, 8 * sizeof(VAR_1[0]));
        } else {
            FUNC_0(VAR_10[0], VAR_10[1], VAR_10[2], VAR_10[3],
                      VAR_10[4], VAR_10[5], VAR_10[6], VAR_10[7],
                      VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3],
                      VAR_1[4], VAR_1[5], VAR_1[6], VAR_1[7],
                      VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21);
        }
        VAR_10 += 8;
        VAR_1 += VAR_2;
    }

}
