
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int scale_v; int scale_h; } ;
typedef TYPE_1__ GDVContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void FUNC_3(GDVContext *VAR_1, uint8_t *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    int VAR_7, VAR_8;

    if ((VAR_1->scale_v == VAR_5) && (VAR_1->scale_h == VAR_6)) {
        return;
    }

    if (VAR_1->scale_v) {
        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
            int VAR_9 = VAR_4 - VAR_7 - 1;
            uint8_t *VAR_10 = VAR_2 + VAR_0 + VAR_9 * VAR_3;
            uint8_t *VAR_11 = VAR_2 + VAR_0 + (VAR_9>>!!VAR_1->scale_h) * (VAR_3>>1);

            FUNC_2(VAR_10, VAR_11, VAR_3);
        }
    } else if (VAR_1->scale_h) {
        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
            int VAR_12 = VAR_4 - VAR_7 - 1;
            uint8_t *VAR_13 = VAR_2 + VAR_0 + VAR_12 * VAR_3;
            uint8_t *VAR_14 = VAR_2 + VAR_0 + (VAR_12>>1) * VAR_3;
            FUNC_0(VAR_13, VAR_14, VAR_3);
        }
    }

    if (VAR_6 && VAR_5) {
        for (VAR_8 = 0; VAR_8 < (VAR_4>>1); VAR_8++) {
            uint8_t *VAR_15 = VAR_2 + VAR_0 + VAR_8 * (VAR_3>>1);
            uint8_t *VAR_16 = VAR_2 + VAR_0 + VAR_8*2 * VAR_3;
            FUNC_1(VAR_15, VAR_16, VAR_3>>1);
        }
    } else if (VAR_6) {
        for (VAR_8 = 0; VAR_8 < (VAR_4>>1); VAR_8++) {
            uint8_t *VAR_17 = VAR_2 + VAR_0 + VAR_8 * VAR_3;
            uint8_t *VAR_18 = VAR_2 + VAR_0 + VAR_8*2 * VAR_3;
            FUNC_0(VAR_17, VAR_18, VAR_3);
        }
    } else if (VAR_5) {
        for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
            uint8_t *VAR_19 = VAR_2 + VAR_0 + VAR_8 * VAR_3;
            FUNC_1(VAR_19, VAR_19, VAR_3>>1);
        }
    }

    VAR_1->scale_v = VAR_5;
    VAR_1->scale_h = VAR_6;
}
