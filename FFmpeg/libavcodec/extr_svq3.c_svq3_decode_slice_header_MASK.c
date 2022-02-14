
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int8_t ;
struct TYPE_18__ {int index; scalar_t__ buffer; } ;
struct TYPE_17__ {TYPE_1__* priv_data; } ;
struct TYPE_16__ {int mb_xy; int watermark_key; int mb_num; int const mb_x; int* intra4x4_pred_mode; int* mb2br_xy; scalar_t__ mb_y; int const mb_stride; int mb_width; TYPE_4__ gb_slice; scalar_t__ has_watermark; scalar_t__ adaptive_quant; void* qscale; void* slice_num; TYPE_2__* avctx; int slice_type; TYPE_4__ gb; int * slice_buf; int slice_size; } ;
typedef TYPE_1__ SVQ3Context ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_4 ;
 int FUNC_3 (int **,int *,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int ,char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int * VAR_5 ;
 void* FUNC_7 (TYPE_4__*,int) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 unsigned int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,int *,int) ;
 int FUNC_12 (int *,scalar_t__,int) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (int*,int,int) ;
 int FUNC_15 (TYPE_4__*,int) ;
 scalar_t__ FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (TYPE_4__*,int) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_20(AVCodecContext *VAR_6)
{
    SVQ3Context *VAR_7 = VAR_6->priv_data;
    const int VAR_8 = VAR_7->mb_xy;
    int VAR_9, VAR_10;
    unsigned VAR_11;

    VAR_10 = FUNC_7(&VAR_7->gb, 8);

    if (((VAR_10 & 0x9F) != 1 && (VAR_10 & 0x9F) != 2) || (VAR_10 & 0x60) == 0) {

        FUNC_4(VAR_6, VAR_3, "unsupported slice header (%02X)\n", VAR_10);
        return -1;
    } else {
        int VAR_12, VAR_13, VAR_14;
        int VAR_15 = VAR_10 >> 5 & 3;

        VAR_14 = FUNC_15(&VAR_7->gb, 8 * VAR_15);
        VAR_12 = VAR_14 * 8;
        VAR_13 = VAR_14 + VAR_15 - 1;

        FUNC_17(&VAR_7->gb, 8);

        FUNC_3(&VAR_7->slice_buf, &VAR_7->slice_size, VAR_13 + VAR_2);
        if (!VAR_7->slice_buf)
            return FUNC_0(VAR_4);

        if (VAR_13 * 8LL > FUNC_9(&VAR_7->gb)) {
            FUNC_4(VAR_6, VAR_3, "slice after bitstream end\n");
            return VAR_0;
        }
        FUNC_12(VAR_7->slice_buf, VAR_7->gb.buffer + VAR_7->gb.index / 8, VAR_13);

        if (VAR_7->watermark_key) {
            uint32_t VAR_16 = FUNC_1(&VAR_7->slice_buf[1]);
            FUNC_2(&VAR_7->slice_buf[1], VAR_16 ^ VAR_7->watermark_key);
        }
        FUNC_11(&VAR_7->gb_slice, VAR_7->slice_buf, VAR_12);

        if (VAR_15 > 0) {
            FUNC_13(VAR_7->slice_buf, &VAR_7->slice_buf[VAR_14], VAR_15 - 1);
        }
        FUNC_19(&VAR_7->gb, VAR_13 * 8);
    }

    if ((VAR_11 = FUNC_10(&VAR_7->gb_slice)) >= 3) {
        FUNC_4(VAR_7->avctx, VAR_3, "illegal slice type %u \n", VAR_11);
        return -1;
    }

    VAR_7->slice_type = VAR_5[VAR_11];

    if ((VAR_10 & 0x9F) == 2) {
        VAR_9 = (VAR_7->mb_num < 64) ? 6 : (1 + FUNC_5(VAR_7->mb_num - 1));
        FUNC_7(&VAR_7->gb_slice, VAR_9);
    } else if (FUNC_8(&VAR_7->gb_slice)) {
        FUNC_6(VAR_7->avctx, "Media key encryption");
        return VAR_1;
    }

    VAR_7->slice_num = FUNC_7(&VAR_7->gb_slice, 8);
    VAR_7->qscale = FUNC_7(&VAR_7->gb_slice, 5);
    VAR_7->adaptive_quant = FUNC_8(&VAR_7->gb_slice);


    FUNC_18(&VAR_7->gb_slice);

    if (VAR_7->has_watermark)
        FUNC_18(&VAR_7->gb_slice);

    FUNC_18(&VAR_7->gb_slice);
    FUNC_17(&VAR_7->gb_slice, 2);

    if (FUNC_16(&VAR_7->gb_slice) < 0)
        return VAR_0;


    if (VAR_7->mb_x > 0) {
        FUNC_14(VAR_7->intra4x4_pred_mode + VAR_7->mb2br_xy[VAR_8 - 1] + 3,
               -1, 4 * sizeof(int8_t));
        FUNC_14(VAR_7->intra4x4_pred_mode + VAR_7->mb2br_xy[VAR_8 - VAR_7->mb_x],
               -1, 8 * sizeof(int8_t) * VAR_7->mb_x);
    }
    if (VAR_7->mb_y > 0) {
        FUNC_14(VAR_7->intra4x4_pred_mode + VAR_7->mb2br_xy[VAR_8 - VAR_7->mb_stride],
               -1, 8 * sizeof(int8_t) * (VAR_7->mb_width - VAR_7->mb_x));

        if (VAR_7->mb_x > 0)
            VAR_7->intra4x4_pred_mode[VAR_7->mb2br_xy[VAR_8 - VAR_7->mb_stride - 1] + 3] = -1;
    }

    return 0;
}
