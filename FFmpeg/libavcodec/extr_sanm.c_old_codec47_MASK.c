
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int ptrdiff_t ;
struct TYPE_5__ {int pitch; int height; int prev_seq; int rotate_code; int avctx; scalar_t__ frm1; scalar_t__ frm0; scalar_t__ frm2; int gb; } ;
typedef TYPE_1__ SANMVideoContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__,scalar_t__,int) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (TYPE_1__*,int *,int *,int *,int,int,int) ;
 int FUNC_13 (TYPE_1__*,int *,int) ;

__attribute__((used)) static int FUNC_14(SANMVideoContext *VAR_3, int VAR_4,
                       int VAR_5, int VAR_6, int VAR_7)
{
    uint32_t VAR_8;
    int VAR_9, VAR_10;
    ptrdiff_t VAR_11 = VAR_3->pitch;
    uint8_t *VAR_12 = (uint8_t *)VAR_3->frm0 + VAR_5 + VAR_4 * VAR_11;
    uint8_t *VAR_13 = (uint8_t *)VAR_3->frm1;
    uint8_t *VAR_14 = (uint8_t *)VAR_3->frm2;
    int VAR_15 = FUNC_9(&VAR_3->gb);
    int VAR_16 = FUNC_6(&VAR_3->gb);
    int VAR_17 = FUNC_3(&VAR_3->gb);
    int VAR_18 = FUNC_3(&VAR_3->gb);
    int VAR_19 = FUNC_3(&VAR_3->gb);

    FUNC_8(&VAR_3->gb, 9);
    VAR_8 = FUNC_7(&VAR_3->gb);
    FUNC_8(&VAR_3->gb, 8);

    if (VAR_8 > VAR_3->height * VAR_11 - VAR_5 - VAR_4 * VAR_11) {
        VAR_8 = VAR_3->height * VAR_11 - VAR_5 - VAR_4 * VAR_11;
        FUNC_0(VAR_3->avctx, VAR_2, "Decoded size is too large.\n");
    }

    if (VAR_19 & 1)
        FUNC_8(&VAR_3->gb, 0x8080);
    if (!VAR_16) {
        VAR_3->prev_seq = -1;
        FUNC_11(VAR_13, 0, VAR_3->height * VAR_11);
        FUNC_11(VAR_14, 0, VAR_3->height * VAR_11);
    }

    switch (VAR_17) {
    case 0:
        if (FUNC_4(&VAR_3->gb) < VAR_6 * VAR_7)
            return VAR_0;
        for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
            FUNC_2(&VAR_3->gb, VAR_12, VAR_6);
            VAR_12 += VAR_11;
        }
        break;
    case 1:
        if (FUNC_4(&VAR_3->gb) < ((VAR_6 + 1) >> 1) * ((VAR_7 + 1) >> 1))
            return VAR_0;
        for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10 += 2) {
            for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9 += 2) {
                VAR_12[VAR_9] =
                VAR_12[VAR_9 + 1] =
                VAR_12[VAR_11 + VAR_9] =
                VAR_12[VAR_11 + VAR_9 + 1] = FUNC_5(&VAR_3->gb);
            }
            VAR_12 += VAR_11 * 2;
        }
        break;
    case 2:
        if (VAR_16 == VAR_3->prev_seq + 1) {
            for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10 += 8) {
                for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9 += 8)
                    if (FUNC_12(VAR_3, VAR_12 + VAR_9, VAR_13 + VAR_9, VAR_14 + VAR_9, VAR_11,
                                      VAR_15 + 8, 8))
                        return VAR_0;
                VAR_12 += VAR_11 * 8;
                VAR_13 += VAR_11 * 8;
                VAR_14 += VAR_11 * 8;
            }
        }
        break;
    case 3:
        FUNC_10(VAR_3->frm0, VAR_3->frm2, VAR_3->pitch * VAR_3->height);
        break;
    case 4:
        FUNC_10(VAR_3->frm0, VAR_3->frm1, VAR_3->pitch * VAR_3->height);
        break;
    case 5:
        if (FUNC_13(VAR_3, VAR_12, VAR_8))
            return VAR_0;
        break;
    default:
        FUNC_1(VAR_3->avctx,
                                      "Subcodec 47 compression %d", VAR_17);
        return VAR_1;
    }
    if (VAR_16 == VAR_3->prev_seq + 1)
        VAR_3->rotate_code = VAR_18;
    else
        VAR_3->rotate_code = 0;
    VAR_3->prev_seq = VAR_16;

    return 0;
}
