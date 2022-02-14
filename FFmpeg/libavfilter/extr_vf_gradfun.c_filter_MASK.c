
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int* buf; int thresh; int (* filter_line ) (int *,int const*,int*,int,int,int ) ;int (* blur_line ) (int*,int*,int*,int const*,int,int) ;} ;
typedef TYPE_1__ GradFunContext ;


 int FUNC_0 (int,int) ;
 int * VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (int*,int*,int*,int const*,int,int) ;
 int FUNC_4 (int*,int*,int*,int const*,int,int) ;
 int FUNC_5 (int *,int const*,int*,int,int,int ) ;
 int FUNC_6 (int *,int const*,int*,int,int,int ) ;
 int FUNC_7 (int *,int const*,int*,int,int,int ) ;

__attribute__((used)) static void FUNC_8(GradFunContext *VAR_1, uint8_t *VAR_2, const uint8_t *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9 = FUNC_0(VAR_4, 16) / 2;
    int VAR_10;
    uint32_t VAR_11 = (1 << 21) / (VAR_8 * VAR_8);
    uint16_t *VAR_12 = VAR_1->buf + 16;
    uint16_t *VAR_13 = VAR_1->buf + VAR_9 + 32;
    int VAR_14 = VAR_1->thresh;

    FUNC_2(VAR_12, 0, (VAR_9 + 16) * sizeof(*VAR_13));
    for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
        VAR_1->blur_line(VAR_12, VAR_13 + VAR_10 * VAR_9, VAR_13 + (VAR_10 - 1) * VAR_9, VAR_3 + 2 * VAR_10 * VAR_7, VAR_7, VAR_4 / 2);
    for (;;) {
        if (VAR_10 < VAR_5 - VAR_8) {
            int VAR_15 = ((VAR_10 + VAR_8) / 2) % VAR_8;
            uint16_t *VAR_16 = VAR_13 + VAR_15 * VAR_9;
            uint16_t *VAR_17 = VAR_13 + (VAR_15 ? VAR_15 - 1 : VAR_8 - 1) * VAR_9;
            int VAR_18, VAR_19;
            VAR_1->blur_line(VAR_12, VAR_16, VAR_17, VAR_3 + (VAR_10 + VAR_8) * VAR_7, VAR_7, VAR_4 / 2);
            for (VAR_18 = VAR_19 = 0; VAR_18 < VAR_8; VAR_18++)
                VAR_19 += VAR_12[VAR_18];
            for (; VAR_18 < VAR_4 / 2; VAR_18++) {
                VAR_19 += VAR_12[VAR_18] - VAR_12[VAR_18-VAR_8];
                VAR_12[VAR_18-VAR_8] = VAR_19 * VAR_11 >> 16;
            }
            for (; VAR_18 < (VAR_4 + VAR_8 + 1) / 2; VAR_18++)
                VAR_12[VAR_18-VAR_8] = VAR_19 * VAR_11 >> 16;
            for (VAR_18 = -VAR_8 / 2; VAR_18 < 0; VAR_18++)
                VAR_12[VAR_18] = VAR_12[0];
        }
        if (VAR_10 == VAR_8) {
            for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
                VAR_1->filter_line(VAR_2 + VAR_10 * VAR_6, VAR_3 + VAR_10 * VAR_7, VAR_12 - VAR_8 / 2, VAR_4, VAR_14, VAR_0[VAR_10 & 7]);
        }
        VAR_1->filter_line(VAR_2 + VAR_10 * VAR_6, VAR_3 + VAR_10 * VAR_7, VAR_12 - VAR_8 / 2, VAR_4, VAR_14, VAR_0[VAR_10 & 7]);
        if (++VAR_10 >= VAR_5) break;
        VAR_1->filter_line(VAR_2 + VAR_10 * VAR_6, VAR_3 + VAR_10 * VAR_7, VAR_12 - VAR_8 / 2, VAR_4, VAR_14, VAR_0[VAR_10 & 7]);
        if (++VAR_10 >= VAR_5) break;
    }
    FUNC_1();
}
