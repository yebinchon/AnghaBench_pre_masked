
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_3__ {int den; int num; } ;
typedef TYPE_1__ AVRational ;


 void* FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int*,int,int*,int,int,int) ;

__attribute__((used)) static void FUNC_2(uint8_t *VAR_0, int VAR_1,
                         uint8_t *VAR_2, int VAR_3,
                         int VAR_4, int VAR_5, AVRational VAR_6,
                         int VAR_7, int VAR_8, int VAR_9, int VAR_10,
                         unsigned int VAR_11, int VAR_12, int VAR_13)
{
    int VAR_14, VAR_15;
    uint64_t VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
    uint8_t *VAR_22, *VAR_23;

    uint8_t *VAR_24, *VAR_25, *VAR_26;
    unsigned int VAR_27, VAR_28;
    int VAR_29, VAR_30, VAR_31, VAR_32;
    int VAR_33, VAR_34, VAR_35, VAR_36;

    VAR_29 = FUNC_0(-VAR_7, 0);
    VAR_30 = FUNC_0(VAR_7+VAR_9-VAR_4, 0);
    VAR_31 = FUNC_0(-VAR_8, 0);
    VAR_32 = FUNC_0(VAR_8+VAR_10-VAR_5, 0);

    VAR_33 = VAR_7 + VAR_29;
    VAR_34 = VAR_7 + VAR_9 - VAR_30 - 1;
    VAR_35 = VAR_8 + VAR_31;
    VAR_36 = VAR_8 + VAR_10 - VAR_32 - 1;

    VAR_24 = VAR_2+VAR_35 * VAR_3+VAR_33;
    VAR_26 = VAR_2+VAR_35 * VAR_3+VAR_34;
    VAR_25 = VAR_2+VAR_36 * VAR_3+VAR_33;

    if (!VAR_13)
        FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

    VAR_0 += (VAR_35 + 1) * VAR_1;
    VAR_2 += (VAR_35 + 1) * VAR_3;

    for (VAR_15 = VAR_35+1; VAR_15 < VAR_36; VAR_15++) {
        VAR_27 = VAR_24[VAR_3*(VAR_15-VAR_35)] +
                      VAR_24[VAR_3*(VAR_15-VAR_35-1)] +
                      VAR_24[VAR_3*(VAR_15-VAR_35+1)];
        VAR_28 = VAR_26[VAR_3*(VAR_15-VAR_35)] +
                       VAR_26[VAR_3*(VAR_15-VAR_35-1)] +
                       VAR_26[VAR_3*(VAR_15-VAR_35+1)];

        for (VAR_14 = VAR_33+1,
             VAR_22 = VAR_0+VAR_33+1,
             VAR_23 = VAR_2+VAR_33+1; VAR_14 < VAR_34; VAR_14++, VAR_22++, VAR_23++) {

            if (VAR_12 && (VAR_15 == VAR_35+1 || VAR_15 == VAR_36-1 ||
                         VAR_14 == VAR_33+1 || VAR_14 == VAR_34-1)) {
                *VAR_22 = 0;
                continue;
            }


            VAR_17 = (uint64_t) (VAR_34-VAR_14) * (VAR_15-VAR_35) * (VAR_36-VAR_15) * VAR_6.den;
            VAR_18 = (uint64_t)(VAR_14-VAR_33) * (VAR_15-VAR_35) * (VAR_36-VAR_15) * VAR_6.den;
            VAR_19 = (uint64_t)(VAR_14-VAR_33) * (VAR_34-VAR_14) * (VAR_36-VAR_15) * VAR_6.num;
            VAR_20 = (uint64_t)(VAR_14-VAR_33) * (VAR_34-VAR_14) * (VAR_15-VAR_35) * VAR_6.num;

            VAR_16 =
                VAR_27 * VAR_17
                +
                VAR_28 * VAR_18
                +
                (VAR_24[VAR_14-VAR_33] +
                 VAR_24[VAR_14-VAR_33-1] +
                 VAR_24[VAR_14-VAR_33+1]) * VAR_19
                +
                (VAR_25[VAR_14-VAR_33] +
                 VAR_25[VAR_14-VAR_33-1] +
                 VAR_25[VAR_14-VAR_33+1]) * VAR_20;
            VAR_21 = (VAR_17 + VAR_18 + VAR_19 + VAR_20) * 3U;
            VAR_16 = (VAR_16 + (VAR_21 >> 1)) / VAR_21;

            if (VAR_15 >= VAR_8+VAR_11 && VAR_15 < VAR_8+VAR_10-VAR_11 &&
                VAR_14 >= VAR_7+VAR_11 && VAR_14 < VAR_7+VAR_9-VAR_11) {
                *VAR_22 = VAR_16;
            } else {
                unsigned VAR_37 = 0;

                if (VAR_14 < VAR_7+VAR_11)
                    VAR_37 = FUNC_0(VAR_37, VAR_7-VAR_14+VAR_11);
                else if (VAR_14 >= VAR_7+VAR_9-VAR_11)
                    VAR_37 = FUNC_0(VAR_37, VAR_14-(VAR_7+VAR_9-1-VAR_11));

                if (VAR_15 < VAR_8+VAR_11)
                    VAR_37 = FUNC_0(VAR_37, VAR_8-VAR_15+VAR_11);
                else if (VAR_15 >= VAR_8+VAR_10-VAR_11)
                    VAR_37 = FUNC_0(VAR_37, VAR_15-(VAR_8+VAR_10-1-VAR_11));

                *VAR_22 = (*VAR_23*VAR_37 + VAR_16*(VAR_11-VAR_37))/VAR_11;
            }
        }

        VAR_0 += VAR_1;
        VAR_2 += VAR_3;
    }
}
