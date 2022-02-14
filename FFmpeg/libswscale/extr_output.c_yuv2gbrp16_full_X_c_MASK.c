
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef unsigned int int32_t ;
typedef unsigned int int16_t ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int yuv2rgb_y_coeff; int yuv2rgb_v2r_coeff; int yuv2rgb_v2g_coeff; int yuv2rgb_u2g_coeff; int yuv2rgb_u2b_coeff; int dstFormat; scalar_t__ yuv2rgb_y_offset; } ;
typedef TYPE_1__ SwsContext ;
typedef TYPE_2__ AVPixFmtDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 TYPE_2__* FUNC_2 (int ) ;
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
    const int32_t **VAR_18 = (const int32_t**)VAR_4;
    const int32_t **VAR_19 = (const int32_t**)VAR_7;
    const int32_t **VAR_20 = (const int32_t**)VAR_8;
    const int32_t **VAR_21 = (const int32_t**)VAR_10;

    for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
        int VAR_22;
        int VAR_23 = -0x40000000;
        int VAR_24 = -(128 << 23);
        int VAR_25 = -(128 << 23);
        int VAR_26, VAR_27, VAR_28, VAR_29;

        for (VAR_22 = 0; VAR_22 < VAR_5; VAR_22++)
            VAR_23 += VAR_18[VAR_22][VAR_15] * (unsigned)VAR_3[VAR_22];

        for (VAR_22 = 0; VAR_22 < VAR_9; VAR_22++) {
            VAR_24 += VAR_19[VAR_22][VAR_15] * (unsigned)VAR_6[VAR_22];
            VAR_25 += VAR_20[VAR_22][VAR_15] * (unsigned)VAR_6[VAR_22];
        }

        VAR_23 >>= 14;
        VAR_23 += 0x10000;
        VAR_24 >>= 14;
        VAR_25 >>= 14;

        if (VAR_16) {
            VAR_29 = -0x40000000;

            for (VAR_22 = 0; VAR_22 < VAR_5; VAR_22++)
                VAR_29 += VAR_21[VAR_22][VAR_15] * VAR_3[VAR_22];

            VAR_29 >>= 1;
            VAR_29 += 0x20002000;
        }

        VAR_23 -= VAR_2->yuv2rgb_y_offset;
        VAR_23 *= VAR_2->yuv2rgb_y_coeff;
        VAR_23 += 1 << 13;
        VAR_26 = VAR_25 * VAR_2->yuv2rgb_v2r_coeff;
        VAR_27 = VAR_25 * VAR_2->yuv2rgb_v2g_coeff + VAR_24 * VAR_2->yuv2rgb_u2g_coeff;
        VAR_28 = VAR_24 * VAR_2->yuv2rgb_u2b_coeff;

        VAR_26 = FUNC_1(VAR_23 + VAR_26, 30);
        VAR_27 = FUNC_1(VAR_23 + VAR_27, 30);
        VAR_28 = FUNC_1(VAR_23 + VAR_28, 30);

        VAR_17[0][VAR_15] = VAR_27 >> 14;
        VAR_17[1][VAR_15] = VAR_28 >> 14;
        VAR_17[2][VAR_15] = VAR_26 >> 14;
        if (VAR_16)
            VAR_17[3][VAR_15] = FUNC_1(VAR_29, 30) >> 14;
    }
    if ((!FUNC_3(VAR_2->dstFormat)) != (!VAR_1)) {
        for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
            VAR_17[0][VAR_15] = FUNC_0(VAR_17[0][VAR_15]);
            VAR_17[1][VAR_15] = FUNC_0(VAR_17[1][VAR_15]);
            VAR_17[2][VAR_15] = FUNC_0(VAR_17[2][VAR_15]);
            if (VAR_16)
                VAR_17[3][VAR_15] = FUNC_0(VAR_17[3][VAR_15]);
        }
    }
}
