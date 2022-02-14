
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int const) ;

__attribute__((used)) static int FUNC_3(int32_t *VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, int VAR_11, int VAR_12)
{
    static const int VAR_13 = 0xf << 7;
    int VAR_14;
    int32_t *VAR_15 = VAR_4 + VAR_6 * VAR_5;

    for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
        VAR_4[VAR_14 * VAR_6] <<= 15;
        if (VAR_10 == VAR_2) {
            int VAR_16 = (VAR_4[VAR_14 * VAR_6] >> 16) & 1;
            int32_t VAR_17 = VAR_4[VAR_14 * VAR_6];
            VAR_4[VAR_14 * VAR_6] = FUNC_2(VAR_17, !!(VAR_16 && VAR_9), 1);
        } else if (VAR_10 == VAR_3 && VAR_12 > 0)
            VAR_4[VAR_14 * VAR_6] = FUNC_2(VAR_4[VAR_14 * VAR_6], 1, 1);
          else if (VAR_10 == VAR_0 && VAR_11)
            VAR_4[VAR_14 * VAR_6] = FUNC_2(VAR_4[VAR_14 * VAR_6], 1, 1);
    }

    if (VAR_7 <= VAR_8) {
        int VAR_18 = FUNC_0(VAR_5, VAR_8 - VAR_7);

        for (VAR_14 = 0; VAR_14 < VAR_18; VAR_14++) {
            ++VAR_7;
            if (VAR_10 == VAR_1)
                *VAR_4 = FUNC_2(*VAR_4, VAR_7, VAR_13);
            VAR_4 += VAR_6;
        }
        VAR_5 -= VAR_18;
    } else {
        int VAR_19 = FUNC_0(VAR_5, (VAR_7 - VAR_8) >> 3);

        for (VAR_14 = 0; VAR_14 < VAR_19; VAR_14++) {
            VAR_7 -= 8;
            if (VAR_10 == VAR_1)
                *VAR_4 = FUNC_2(*VAR_4, VAR_7, VAR_13);
            VAR_4 += VAR_6;
        }
        if (VAR_7 - 8 < VAR_8)
            VAR_7 = VAR_8;
        VAR_5 -= VAR_19;
    }


    if (VAR_7 == 0) {
        if (VAR_5 > 0)
            VAR_4 += VAR_5 * VAR_6;
    } else {
        while (--VAR_5 >= 0) {
            if (VAR_10 == VAR_1)
                *VAR_4 = FUNC_2(*VAR_4, VAR_7, VAR_13);
            VAR_4 += VAR_6;
        }
    }

    FUNC_1(VAR_4 == VAR_15);

    return VAR_7;
}
