
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetBitContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int*,int const*,int) ;

__attribute__((used)) static void FUNC_3(GetBitContext *VAR_0, int VAR_1, int VAR_2,
                                  int VAR_3, int VAR_4, int VAR_5,
                                  const uint8_t *VAR_6,
                                  int *VAR_7, uint8_t *VAR_8,
                                  uint8_t *VAR_9, int VAR_10)
{
    int VAR_11, VAR_12, VAR_13, VAR_14=0;
    uint8_t VAR_15[22];

    VAR_13 = VAR_5 - VAR_4;

    if (!VAR_1)
        FUNC_2(VAR_9, VAR_6, VAR_10);

    FUNC_0(VAR_10 >= VAR_4 + VAR_13);

    VAR_9 += VAR_4 + 1;


    if (!VAR_2 || FUNC_1(VAR_0)) {
        for (VAR_11 = 0; VAR_11 < VAR_13 - 1; VAR_11++) {
            VAR_9[VAR_11] = FUNC_1(VAR_0);
        }
    }




    if (VAR_7 || VAR_8 ) {
        VAR_14 = VAR_13;
        VAR_15[0] = VAR_3 ? 6 : 12;
        for (VAR_12 = 0, VAR_11 = 1; VAR_11 < VAR_13; VAR_11++) {
            int VAR_16 = (VAR_3 && VAR_11 < 4) ? 6 : 12;
            if (VAR_9[VAR_11 - 1]) {
                VAR_14--;
                VAR_15[VAR_12] += VAR_16;
            } else {
                VAR_15[++VAR_12] = VAR_16;
            }
        }
    }


    if (VAR_7)
        *VAR_7 = VAR_14;
    if (VAR_8)
        FUNC_2(VAR_8, VAR_15, VAR_14);
}
