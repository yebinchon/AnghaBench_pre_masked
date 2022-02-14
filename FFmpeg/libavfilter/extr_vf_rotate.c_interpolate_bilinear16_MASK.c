
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int ,int) ;

__attribute__((used)) static uint8_t *FUNC_4(uint8_t *VAR_0,
                                       const uint8_t *VAR_1, int VAR_2, int VAR_3,
                                       int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8 = FUNC_3(VAR_4>>16, 0, VAR_6);
    int VAR_9 = FUNC_3(VAR_5>>16, 0, VAR_7);
    int VAR_10 = VAR_4&0xFFFF;
    int VAR_11 = VAR_5&0xFFFF;
    int VAR_12;
    int VAR_13 = FUNC_2(VAR_8+1, VAR_6);
    int VAR_14 = FUNC_2(VAR_9+1, VAR_7);

    for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12+=2) {
        int VAR_15 = FUNC_0(&VAR_1[VAR_3 * VAR_8 + VAR_12 + VAR_2 * VAR_9 ]);
        int VAR_16 = FUNC_0(&VAR_1[VAR_3 * VAR_13 + VAR_12 + VAR_2 * VAR_9 ]);
        int VAR_17 = FUNC_0(&VAR_1[VAR_3 * VAR_8 + VAR_12 + VAR_2 * VAR_14]);
        int VAR_18 = FUNC_0(&VAR_1[VAR_3 * VAR_13 + VAR_12 + VAR_2 * VAR_14]);
        int VAR_19 = (((1<<16) - VAR_10)*VAR_15 + VAR_10*VAR_16);
        int VAR_20 = (((1<<16) - VAR_10)*VAR_17 + VAR_10*VAR_18);

        FUNC_1(&VAR_0[VAR_12], ((int64_t)((1<<16) - VAR_11)*VAR_19 + (int64_t)VAR_11*VAR_20) >> 32);
    }

    return VAR_0;
}
