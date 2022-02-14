
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uLongf ;
struct TYPE_3__ {int tile_width; int tile_height; int* framebuf; int framebuf_stride; int width; int height; int* kempf_flags; int* jpeg_tile; int tile_stride; int kempf_buf; int jc; } ;
typedef TYPE_1__ G2MContext ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int,int,int const*,int,int*,int,int*,int,int,int ) ;
 int FUNC_3 (int ,int,int*,int,int*,int,int,int,int*,int,int) ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int*,int const*,int) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (int ,int*,int const*,int) ;

__attribute__((used)) static int FUNC_8(G2MContext *VAR_1, int VAR_2, int VAR_3,
                             const uint8_t *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11 = -1, VAR_12;
    int VAR_13, VAR_14;
    const uint8_t *VAR_15 = VAR_4 + VAR_5;
    uint8_t VAR_16[768], VAR_17[3];
    uLongf VAR_18 = (VAR_1->tile_width + 1) * VAR_1->tile_height;
    int VAR_19;
    int VAR_20, VAR_21, VAR_22;
    int VAR_23, VAR_24, VAR_25;
    uint8_t *VAR_26 = VAR_1->framebuf + VAR_2 * VAR_1->tile_width * 3 +
                   VAR_3 * VAR_1->tile_height * VAR_1->framebuf_stride;

    if (VAR_5 < 2)
        return VAR_0;

    VAR_6 = FUNC_1(VAR_1->width - VAR_2 * VAR_1->tile_width, VAR_1->tile_width);
    VAR_7 = FUNC_1(VAR_1->height - VAR_3 * VAR_1->tile_height, VAR_1->tile_height);

    VAR_8 = *VAR_4++;
    VAR_19 = VAR_8 >> 5;
    if (VAR_19 == 0) {
        int VAR_27;
        FUNC_5(VAR_17, VAR_4, 3);
        VAR_4 += 3;
        for (VAR_27 = 0; VAR_27 < VAR_7; VAR_27++, VAR_26 += VAR_1->framebuf_stride)
            for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
                FUNC_5(VAR_26 + VAR_13 * 3, VAR_17, 3);
        return 0;
    } else if (VAR_19 == 1) {
        return FUNC_2(&VAR_1->jc, VAR_6, VAR_7, VAR_4, VAR_15 - VAR_4,
                               VAR_26, VAR_1->framebuf_stride, ((void*)0), 0, 0, 0);
    }

    if (VAR_19 != 2) {
        FUNC_5(VAR_17, VAR_4, 3);
        VAR_4 += 3;
    }
    VAR_10 = *VAR_4++ + 1;
    if (VAR_15 - VAR_4 < VAR_10 * 3)
        return VAR_0;
    FUNC_5(VAR_16, VAR_4, VAR_10 * 3);
    VAR_4 += VAR_10 * 3;
    if (VAR_19 != 2) {
        for (VAR_13 = 0; VAR_13 < VAR_10; VAR_13++) {
            if (!FUNC_4(VAR_16 + VAR_13 * 3, VAR_17, 3)) {
                VAR_11 = VAR_13;
                break;
            }
        }
    }

    if (VAR_15 - VAR_4 < 2)
        return 0;
    VAR_9 = (VAR_4[0] << 8) | VAR_4[1];
    VAR_4 += 2;

    if (VAR_15 - VAR_4 < VAR_9 + (VAR_19 != 2))
        return VAR_0;

    VAR_12 = FUNC_7(VAR_1->kempf_buf, &VAR_18, VAR_4, VAR_9);
    if (VAR_12)
        return VAR_0;
    VAR_4 += VAR_9;

    if (VAR_19 == 2) {
        FUNC_3(VAR_1->kempf_buf, VAR_18, VAR_26, VAR_1->framebuf_stride,
                          ((void*)0), 0, VAR_6, VAR_7, VAR_16, VAR_10, VAR_11);
        return 0;
    }

    VAR_20 = *VAR_4++ + 1;
    VAR_21 = 0;
    VAR_22 = FUNC_0(VAR_6, 16) >> 3;

    VAR_23 = 0;
    for (VAR_13 = 0; VAR_13 < (FUNC_0(VAR_7, 16) >> 4); VAR_13++) {
        for (VAR_14 = 0; VAR_14 < (FUNC_0(VAR_6, 16) >> 4); VAR_14++) {
            if (!VAR_23) {
                if (VAR_4 >= VAR_15)
                    return VAR_0;
                VAR_24 = *VAR_4++;
                VAR_23 = 8;
            }
            VAR_25 = VAR_24 & 1;
            VAR_23--;
            VAR_24 >>= 1;
            VAR_21 += VAR_25;
            if (VAR_21 > VAR_20)
                return VAR_0;
            VAR_1->kempf_flags[VAR_14 * 2 + VAR_13 * 2 * VAR_22] =
            VAR_1->kempf_flags[VAR_14 * 2 + 1 + VAR_13 * 2 * VAR_22] =
            VAR_1->kempf_flags[VAR_14 * 2 + (VAR_13 * 2 + 1) * VAR_22] =
            VAR_1->kempf_flags[VAR_14 * 2 + 1 + (VAR_13 * 2 + 1) * VAR_22] = VAR_25;
        }
    }

    FUNC_6(VAR_1->jpeg_tile, 0, VAR_1->tile_stride * VAR_7);
    FUNC_2(&VAR_1->jc, VAR_6, VAR_7, VAR_4, VAR_15 - VAR_4,
                    VAR_1->jpeg_tile, VAR_1->tile_stride,
                    VAR_1->kempf_flags, VAR_22, VAR_20 * 4, 0);

    FUNC_3(VAR_1->kempf_buf, VAR_18, VAR_26, VAR_1->framebuf_stride,
                      VAR_1->jpeg_tile, VAR_1->tile_stride,
                      VAR_6, VAR_7, VAR_16, VAR_10, VAR_11);

    return 0;
}
