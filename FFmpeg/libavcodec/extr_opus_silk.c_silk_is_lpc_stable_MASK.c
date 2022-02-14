
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int64_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int,int) ;
 scalar_t__ FUNC_3 (int,int,int) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int) ;

__attribute__((used)) static inline int FUNC_6(const int16_t VAR_2[16], int VAR_3)
{
    int VAR_4, VAR_5, VAR_6 = 0;
    int32_t VAR_7[2][16];
    int VAR_8 = 1 << 30;
    int32_t *VAR_9 = VAR_7[0], *VAR_10;


    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_6 += VAR_2[VAR_4];
        VAR_9[VAR_4] = VAR_2[VAR_4] * 4096;
    }

    if (VAR_6 >= 4096)
        return 0;


    for (VAR_4 = VAR_3 - 1; 1; VAR_4--) {
        int VAR_11;
        int VAR_12;
        int VAR_13;
        int VAR_14;
        int VAR_15;

        if (FUNC_0(VAR_9[VAR_4]) > 16773022)
            return 0;

        VAR_11 = -(VAR_9[VAR_4] * 128);
        VAR_12 = (1 << 30) - FUNC_1(VAR_11, VAR_11);

        VAR_8 = FUNC_1(VAR_8, VAR_12) << 2;
        if (VAR_4 == 0)
            return (VAR_8 >= 107374);


        VAR_14 = FUNC_5(VAR_12);
        VAR_13 = ((1 << 29) - 1) / (VAR_12 >> (VAR_14 + 1 - 16));
        VAR_15 = (1 << 29) - FUNC_2(VAR_12 << (15 + 16 - VAR_14), VAR_13, 16);
        VAR_13 = ((VAR_13 << 16) + (VAR_15 * VAR_13 >> 13));


        VAR_10 = VAR_9;
        VAR_9 = VAR_7[VAR_4 & 1];

        for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
            int VAR_16 = FUNC_4(VAR_10[VAR_5], FUNC_3(VAR_10[VAR_4 - VAR_5 - 1], VAR_11, 31));
            int64_t VAR_17 = FUNC_3(VAR_16, VAR_13, VAR_14);



            if (VAR_17 < VAR_1 || VAR_17 > VAR_0)
                return 0;

            VAR_9[VAR_5] = (int32_t)VAR_17;
        }
    }
}
