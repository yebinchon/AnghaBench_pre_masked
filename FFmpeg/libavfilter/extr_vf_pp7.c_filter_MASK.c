
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int16_t ;
struct TYPE_4__ {int temp_stride; int* src; int qp; int (* requantize ) (TYPE_1__*,int *,int) ;int (* dctB ) (int *,int *) ;int qscale_type; } ;
typedef TYPE_1__ PP7Context ;


 int const FUNC_0 (int,int) ;
 int FUNC_1 (int *,int*,int const) ;
 int** VAR_0 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int*,int*,int const) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int) ;

__attribute__((used)) static void FUNC_6(PP7Context *VAR_1, uint8_t *VAR_2, uint8_t *VAR_3,
                   int VAR_4, int VAR_5,
                   int VAR_6, int VAR_7,
                   uint8_t *VAR_8, int VAR_9, int VAR_10)
{
    int VAR_11, VAR_12;
    const int VAR_13 = VAR_10 ? VAR_1->temp_stride : ((VAR_6 + 16 + 15) & (~15));
    uint8_t *VAR_14 = VAR_1->src + 8 * VAR_13;
    int16_t *VAR_15 = (int16_t *)VAR_1->src;
    int16_t *VAR_16 = (int16_t *)(VAR_1->src + 32);

    if (!VAR_3 || !VAR_2) return;
    for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
        int VAR_17 = 8 + 8 * VAR_13 + VAR_12 * VAR_13;
        FUNC_3(VAR_14 + VAR_17, VAR_3 + VAR_12 * VAR_5, VAR_6);
        for (VAR_11 = 0; VAR_11 < 8; VAR_11++) {
            VAR_14[VAR_17 - VAR_11 - 1]= VAR_14[VAR_17 + VAR_11 ];
            VAR_14[VAR_17 + VAR_6 + VAR_11 ]= VAR_14[VAR_17 + VAR_6 - VAR_11 - 1];
        }
    }
    for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
        FUNC_3(VAR_14 + ( 7 - VAR_12 ) * VAR_13, VAR_14 + ( VAR_12 + 8 ) * VAR_13, VAR_13);
        FUNC_3(VAR_14 + (VAR_7 + 8 + VAR_12) * VAR_13, VAR_14 + (VAR_7 - VAR_12 + 7) * VAR_13, VAR_13);
    }


    for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
        for (VAR_11 = -8; VAR_11 < 0; VAR_11 += 4) {
            const int VAR_18 = VAR_11 + VAR_12 * VAR_13 + (8 - 3) * (1 + VAR_13) + 8;
            uint8_t *VAR_19 = VAR_14 + VAR_18;
            int16_t *VAR_20 = VAR_16 + 4 * VAR_11;

            FUNC_1(VAR_20 + 4 * 8, VAR_19, VAR_13);
        }
        for (VAR_11 = 0; VAR_11 < VAR_6; ) {
            const int VAR_21 = 3 + VAR_10;
            int VAR_22;
            int VAR_23 = FUNC_0(VAR_11 + 8, VAR_6);

            if (VAR_1->qp)
                VAR_22 = VAR_1->qp;
            else {
                VAR_22 = VAR_8[ (FUNC_0(VAR_11, VAR_6 - 1) >> VAR_21) + (FUNC_0(VAR_12, VAR_7 - 1) >> VAR_21) * VAR_9];
                VAR_22 = FUNC_2(VAR_22, VAR_1->qscale_type);
            }
            for (; VAR_11 < VAR_23; VAR_11++) {
                const int VAR_24 = VAR_11 + VAR_12 * VAR_13 + (8 - 3) * (1 + VAR_13) + 8;
                uint8_t *VAR_25 = VAR_14 + VAR_24;
                int16_t *VAR_26 = VAR_16 + 4 * VAR_11;
                int VAR_27;

                if ((VAR_11 & 3) == 0)
                    FUNC_1(VAR_26 + 4 * 8, VAR_25, VAR_13);

                VAR_1->dctB(VAR_15, VAR_26);

                VAR_27 = VAR_1->requantize(VAR_1, VAR_15, VAR_22);
                VAR_27 = (VAR_27 + VAR_0[VAR_12 & 7][VAR_11 & 7]) >> 6;
                if ((unsigned)VAR_27 > 255)
                    VAR_27 = (-VAR_27) >> 31;
                VAR_2[VAR_11 + VAR_12 * VAR_4] = VAR_27;
            }
        }
    }
}
