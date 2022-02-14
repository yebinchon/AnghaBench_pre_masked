
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int tpitchuv; int tpitchy; int* tbuffer; } ;
typedef TYPE_1__ FieldMatchContext ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int const*,int,int const*,int,int*,int,int,int) ;

__attribute__((used)) static void FUNC_3(FieldMatchContext *VAR_0,
                           const uint8_t *VAR_1, int VAR_2,
                           const uint8_t *VAR_3, int VAR_4,
                           uint8_t *VAR_5, int VAR_6, int VAR_7,
                           int VAR_8, int VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15 = VAR_9 ? VAR_0->tpitchuv : VAR_0->tpitchy;
    const uint8_t *VAR_16 = VAR_0->tbuffer + VAR_15;

    FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4,
                        VAR_0->tbuffer, VAR_15, VAR_8, VAR_7>>1);

    for (VAR_11 = 2; VAR_11 < VAR_7 - 2; VAR_11 += 2) {
        for (VAR_10 = 1; VAR_10 < VAR_8 - 1; VAR_10++) {
            VAR_13 = VAR_16[VAR_10];
            if (VAR_13 > 3) {
                for (VAR_14 = 0, VAR_12 = VAR_10-1; VAR_12 < VAR_10+2 && VAR_14 < 2; VAR_12++) {
                    VAR_14 += VAR_16[VAR_12-VAR_15] > 3;
                    VAR_14 += VAR_16[VAR_12 ] > 3;
                    VAR_14 += VAR_16[VAR_12+VAR_15] > 3;
                }
                if (VAR_14 > 1) {
                    VAR_5[VAR_10] = 1;
                    if (VAR_13 > 19) {
                        int VAR_17 = 0, VAR_18 = 0;
                        for (VAR_14 = 0, VAR_12 = VAR_10-1; VAR_12 < VAR_10+2 && VAR_14 < 6; VAR_12++) {
                            if (VAR_16[VAR_12-VAR_15] > 19) { VAR_14++; VAR_17 = 1; }
                            if (VAR_16[VAR_12 ] > 19) VAR_14++;
                            if (VAR_16[VAR_12+VAR_15] > 19) { VAR_14++; VAR_18 = 1; }
                        }
                        if (VAR_14 > 3) {
                            if (VAR_17 && VAR_18) {
                                VAR_5[VAR_10] |= 1<<1;
                            } else {
                                int VAR_19 = 0, VAR_20 = 0;
                                for (VAR_12 = FUNC_0(VAR_10-4,0); VAR_12 < FUNC_1(VAR_10+5,VAR_8); VAR_12++) {
                                    if (VAR_11 != 2 && VAR_16[VAR_12-2*VAR_15] > 19) VAR_19 = 1;
                                    if ( VAR_16[VAR_12- VAR_15] > 19) VAR_17 = 1;
                                    if ( VAR_16[VAR_12+ VAR_15] > 19) VAR_18 = 1;
                                    if (VAR_11 != VAR_7-4 && VAR_16[VAR_12+2*VAR_15] > 19) VAR_20 = 1;
                                }
                                if ((VAR_17 && (VAR_18 || VAR_19)) ||
                                    (VAR_18 && (VAR_17 || VAR_20)))
                                    VAR_5[VAR_10] |= 1<<1;
                                else if (VAR_14 > 5)
                                    VAR_5[VAR_10] |= 1<<2;
                            }
                        }
                    }
                }
            }
        }
        VAR_16 += VAR_15;
        VAR_5 += VAR_6;
    }
}
