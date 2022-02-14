
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_14__ {int cur_w; int width; int cur_x; int cur_h; int height; int cur_y; int bpp2; int cur_hx; int cur_hy; int bpp; int bigendian; TYPE_8__* pic; int * screendta; int * curmask; int * curbits; int gb; } ;
typedef TYPE_1__ VmncContext ;
struct TYPE_17__ {int key_frame; int* linesize; int ** data; int pict_type; } ;
struct TYPE_16__ {TYPE_1__* priv_data; } ;
struct TYPE_15__ {int size; int * data; } ;
typedef int GetByteContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;







 int FUNC_1 (void*,TYPE_8__*) ;
 int FUNC_2 (TYPE_3__*,int ,char*,...) ;
 int FUNC_3 (int **,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int const*,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_1__* const,int *,int *,int,int,int) ;
 int FUNC_11 (TYPE_3__*,TYPE_8__*,int ) ;
 int FUNC_12 (TYPE_1__* const) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (int *,int,int,int *,int,int,int) ;
 int FUNC_15 (int *,int,TYPE_1__* const,int,int) ;
 int FUNC_16 (TYPE_1__* const) ;

__attribute__((used)) static int FUNC_17(AVCodecContext *VAR_7, void *VAR_8, int *VAR_9,
                        AVPacket *VAR_10)
{
    const uint8_t *VAR_11 = VAR_10->data;
    int VAR_12 = VAR_10->size;
    VmncContext * const VAR_13 = VAR_7->priv_data;
    GetByteContext *VAR_14 = &VAR_13->gb;
    uint8_t *VAR_15;
    int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25;

    FUNC_8(VAR_14, VAR_11, VAR_12);
    FUNC_9(VAR_14, 2);
    VAR_22 = FUNC_4(VAR_14);
    if (12LL * VAR_22 > FUNC_7(VAR_14))
        return VAR_0;

    if ((VAR_25 = FUNC_11(VAR_7, VAR_13->pic, 0)) < 0)
        return VAR_25;

    VAR_13->pic->key_frame = 0;
    VAR_13->pic->pict_type = VAR_4;


    if (VAR_13->screendta) {
        int VAR_26;
        VAR_18 = VAR_13->cur_w;
        if (VAR_13->width < VAR_13->cur_x + VAR_18)
            VAR_18 = VAR_13->width - VAR_13->cur_x;
        VAR_19 = VAR_13->cur_h;
        if (VAR_13->height < VAR_13->cur_y + VAR_19)
            VAR_19 = VAR_13->height - VAR_13->cur_y;
        VAR_16 = VAR_13->cur_x;
        if (VAR_16 < 0) {
            VAR_18 += VAR_16;
            VAR_16 = 0;
        }
        VAR_17 = VAR_13->cur_y;
        if (VAR_17 < 0) {
            VAR_19 += VAR_17;
            VAR_17 = 0;
        }
        if ((VAR_18 > 0) && (VAR_19 > 0)) {
            VAR_15 = VAR_13->pic->data[0] + VAR_16 * VAR_13->bpp2 + VAR_17 * VAR_13->pic->linesize[0];
            for (VAR_26 = 0; VAR_26 < VAR_19; VAR_26++) {
                FUNC_13(VAR_15, VAR_13->screendta + VAR_26 * VAR_13->cur_w * VAR_13->bpp2,
                       VAR_18 * VAR_13->bpp2);
                VAR_15 += VAR_13->pic->linesize[0];
            }
        }
    }

    while (VAR_22--) {
        if (FUNC_7(VAR_14) < 12) {
            FUNC_2(VAR_7, VAR_1, "Premature end of data!\n");
            return -1;
        }
        VAR_16 = FUNC_4(VAR_14);
        VAR_17 = FUNC_4(VAR_14);
        VAR_18 = FUNC_4(VAR_14);
        VAR_19 = FUNC_4(VAR_14);
        VAR_21 = FUNC_5(VAR_14);
        if ((VAR_16 + VAR_18 > VAR_13->width) || (VAR_17 + VAR_19 > VAR_13->height)) {
            FUNC_2(VAR_7, VAR_1,
                    "Incorrect frame size: %ix%i+%ix%i of %ix%i\n",
                    VAR_18, VAR_19, VAR_16, VAR_17, VAR_13->width, VAR_13->height);
            return VAR_0;
        }
        VAR_15 = VAR_13->pic->data[0] + VAR_16 * VAR_13->bpp2 + VAR_17 * VAR_13->pic->linesize[0];
        VAR_24 = FUNC_7(VAR_14);
        switch (VAR_21) {
        case 134:
            if (VAR_18*(int64_t)VAR_19*VAR_13->bpp2 > VAR_6/2 - 2) {
                FUNC_2(VAR_7, VAR_1, "dimensions too large\n");
                return VAR_0;
            }
            if (VAR_24 < 2 + VAR_18 * VAR_19 * VAR_13->bpp2 * 2) {
                FUNC_2(VAR_7, VAR_1,
                       "Premature end of data! (need %i got %i)\n",
                       2 + VAR_18 * VAR_19 * VAR_13->bpp2 * 2, VAR_24);
                return VAR_0;
            }
            FUNC_9(VAR_14, 2);
            VAR_13->cur_w = VAR_18;
            VAR_13->cur_h = VAR_19;
            VAR_13->cur_hx = VAR_16;
            VAR_13->cur_hy = VAR_17;
            if ((VAR_13->cur_hx > VAR_13->cur_w) || (VAR_13->cur_hy > VAR_13->cur_h)) {
                FUNC_2(VAR_7, VAR_1,
                       "Cursor hot spot is not in image: "
                       "%ix%i of %ix%i cursor size\n",
                       VAR_13->cur_hx, VAR_13->cur_hy, VAR_13->cur_w, VAR_13->cur_h);
                VAR_13->cur_hx = VAR_13->cur_hy = 0;
            }
            if (VAR_13->cur_w * VAR_13->cur_h >= VAR_6 / VAR_13->bpp2) {
                FUNC_16(VAR_13);
                return FUNC_0(VAR_5);
            } else {
                int VAR_27 = VAR_13->cur_w * VAR_13->cur_h * VAR_13->bpp2;
                if ((VAR_25 = FUNC_3(&VAR_13->curbits, VAR_27)) < 0 ||
                    (VAR_25 = FUNC_3(&VAR_13->curmask, VAR_27)) < 0 ||
                    (VAR_25 = FUNC_3(&VAR_13->screendta, VAR_27)) < 0) {
                    FUNC_16(VAR_13);
                    return VAR_25;
                }
            }
            FUNC_12(VAR_13);
            break;
        case 133:
            FUNC_9(VAR_14, 2);
            break;
        case 132:
            VAR_13->cur_x = VAR_16 - VAR_13->cur_hx;
            VAR_13->cur_y = VAR_17 - VAR_13->cur_hy;
            break;
        case 131:
            FUNC_9(VAR_14, 10);
            break;
        case 130:
            FUNC_9(VAR_14, 4);
            break;
        case 129:
            VAR_13->pic->key_frame = 1;
            VAR_13->pic->pict_type = VAR_3;
            VAR_20 = FUNC_6(VAR_14);
            if (VAR_20 != VAR_13->bpp) {
                FUNC_2(VAR_7, VAR_2,
                       "Depth mismatch. Container %i bpp, "
                       "Frame data: %i bpp\n",
                       VAR_13->bpp, VAR_20);
            }
            FUNC_9(VAR_14, 1);
            VAR_13->bigendian = FUNC_6(VAR_14);
            if (VAR_13->bigendian & (~1)) {
                FUNC_2(VAR_7, VAR_2,
                       "Invalid header: bigendian flag = %i\n", VAR_13->bigendian);
                return VAR_0;
            }

            FUNC_9(VAR_14, 13);
            break;
        case 128:
            FUNC_9(VAR_14, 2);
            break;
        case 0x00000000:
            if (VAR_24 < VAR_18 * VAR_19 * VAR_13->bpp2) {
                FUNC_2(VAR_7, VAR_1,
                       "Premature end of data! (need %i got %i)\n",
                       VAR_18 * VAR_19 * VAR_13->bpp2, VAR_24);
                return VAR_0;
            }
            FUNC_14(VAR_15, VAR_18, VAR_19, VAR_14, VAR_13->bpp2, VAR_13->bigendian,
                      VAR_13->pic->linesize[0]);
            break;
        case 0x00000005:
            VAR_23 = FUNC_10(VAR_13, VAR_15, VAR_14, VAR_18, VAR_19, VAR_13->pic->linesize[0]);
            if (VAR_23 < 0)
                return VAR_23;
            break;
        default:
            FUNC_2(VAR_7, VAR_1, "Unsupported block type 0x%08X\n", VAR_21);
            VAR_22 = 0;
        }
    }
    if (VAR_13->screendta) {
        int VAR_28;

        VAR_18 = VAR_13->cur_w;
        if (VAR_13->width < VAR_13->cur_x + VAR_18)
            VAR_18 = VAR_13->width - VAR_13->cur_x;
        VAR_19 = VAR_13->cur_h;
        if (VAR_13->height < VAR_13->cur_y + VAR_19)
            VAR_19 = VAR_13->height - VAR_13->cur_y;
        VAR_16 = VAR_13->cur_x;
        if (VAR_16 < 0) {
            VAR_18 += VAR_16;
            VAR_16 = 0;
        }
        VAR_17 = VAR_13->cur_y;
        if (VAR_17 < 0) {
            VAR_19 += VAR_17;
            VAR_17 = 0;
        }
        if ((VAR_18 > 0) && (VAR_19 > 0)) {
            VAR_15 = VAR_13->pic->data[0] + VAR_16 * VAR_13->bpp2 + VAR_17 * VAR_13->pic->linesize[0];
            for (VAR_28 = 0; VAR_28 < VAR_19; VAR_28++) {
                FUNC_13(VAR_13->screendta + VAR_28 * VAR_13->cur_w * VAR_13->bpp2, VAR_15,
                       VAR_18 * VAR_13->bpp2);
                VAR_15 += VAR_13->pic->linesize[0];
            }
            VAR_15 = VAR_13->pic->data[0];
            FUNC_15(VAR_15, VAR_13->pic->linesize[0], VAR_13, VAR_13->cur_x, VAR_13->cur_y);
        }
    }
    *VAR_9 = 1;
    if ((VAR_25 = FUNC_1(VAR_8, VAR_13->pic)) < 0)
        return VAR_25;


    return VAR_12;
}
