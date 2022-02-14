
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_8__ {int flags; TYPE_1__* comp; } ;
struct TYPE_7__ {int yuv2rgb_y_coeff; int yuv2rgb_v2r_coeff; int yuv2rgb_v2g_coeff; int yuv2rgb_u2g_coeff; int yuv2rgb_u2b_coeff; int dstFormat; scalar_t__ yuv2rgb_y_offset; } ;
struct TYPE_6__ {int depth; } ;
typedef TYPE_2__ SwsContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(SwsContext *VAR_2, const int16_t *VAR_3,
                  const int16_t **VAR_4, int VAR_5,
                  const int16_t *VAR_6, const int16_t **VAR_7,
                  const int16_t **VAR_8, int VAR_9,
                  const int16_t **VAR_10, uint8_t **VAR_11,
                  int VAR_12, int VAR_13)
{
    const AVPixFmtDescriptor *VAR_14 = FUNC_2(VAR_2->dstFormat);
    int VAR_15;
    int VAR_16 = (VAR_14->flags & VAR_0) && VAR_10;
    uint16_t **VAR_17 = (uint16_t**)VAR_11;
    int VAR_18 = 22 + 8 - VAR_14->comp[0].depth;
    int VAR_19 = 0;

    for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
        int VAR_20;
        int VAR_21 = 1 << 9;
        int VAR_22 = (1 << 9) - (128 << 19);
        int VAR_23 = (1 << 9) - (128 << 19);
        int VAR_24, VAR_25, VAR_26;

        for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++)
            VAR_21 += VAR_4[VAR_20][VAR_15] * VAR_3[VAR_20];

        for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++) {
            VAR_22 += VAR_7[VAR_20][VAR_15] * VAR_6[VAR_20];
            VAR_23 += VAR_8[VAR_20][VAR_15] * VAR_6[VAR_20];
        }

        VAR_21 >>= 10;
        VAR_22 >>= 10;
        VAR_23 >>= 10;

        if (VAR_16) {
            VAR_19 = 1 << 18;

            for (VAR_20 = 0; VAR_20 < VAR_5; VAR_20++)
                VAR_19 += VAR_10[VAR_20][VAR_15] * VAR_3[VAR_20];

            if (VAR_19 & 0xF8000000)
                VAR_19 = FUNC_1(VAR_19, 27);
        }

        VAR_21 -= VAR_2->yuv2rgb_y_offset;
        VAR_21 *= VAR_2->yuv2rgb_y_coeff;
        VAR_21 += 1 << (VAR_18-1);
        VAR_24 = VAR_21 + VAR_23 * VAR_2->yuv2rgb_v2r_coeff;
        VAR_25 = VAR_21 + VAR_23 * VAR_2->yuv2rgb_v2g_coeff + VAR_22 * VAR_2->yuv2rgb_u2g_coeff;
        VAR_26 = VAR_21 + VAR_22 * VAR_2->yuv2rgb_u2b_coeff;

        if ((VAR_24 | VAR_25 | VAR_26) & 0xC0000000) {
            VAR_24 = FUNC_1(VAR_24, 30);
            VAR_25 = FUNC_1(VAR_25, 30);
            VAR_26 = FUNC_1(VAR_26, 30);
        }

        if (VAR_18 != 22) {
            VAR_17[0][VAR_15] = VAR_25 >> VAR_18;
            VAR_17[1][VAR_15] = VAR_26 >> VAR_18;
            VAR_17[2][VAR_15] = VAR_24 >> VAR_18;
            if (VAR_16)
                VAR_17[3][VAR_15] = VAR_19 >> (VAR_18 - 3);
        } else {
            VAR_11[0][VAR_15] = VAR_25 >> 22;
            VAR_11[1][VAR_15] = VAR_26 >> 22;
            VAR_11[2][VAR_15] = VAR_24 >> 22;
            if (VAR_16)
                VAR_11[3][VAR_15] = VAR_19 >> 19;
        }
    }
    if (VAR_18 != 22 && (!FUNC_3(VAR_2->dstFormat)) != (!VAR_1)) {
        for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
            VAR_17[0][VAR_15] = FUNC_0(VAR_17[0][VAR_15]);
            VAR_17[1][VAR_15] = FUNC_0(VAR_17[1][VAR_15]);
            VAR_17[2][VAR_15] = FUNC_0(VAR_17[2][VAR_15]);
            if (VAR_16)
                VAR_17[3][VAR_15] = FUNC_0(VAR_17[3][VAR_15]);
        }
    }
}
