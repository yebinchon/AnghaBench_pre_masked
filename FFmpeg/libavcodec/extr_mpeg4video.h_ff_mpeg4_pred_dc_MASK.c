
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_5__ {int err_recognition; } ;
struct TYPE_4__ {int y_dc_scale; int c_dc_scale; int* block_wrap; int** dc_val; int* block_index; scalar_t__ mb_x; scalar_t__ resync_mb_x; scalar_t__ mb_y; scalar_t__ resync_mb_y; int workaround_bugs; TYPE_3__* avctx; int encoding; scalar_t__ first_slice_line; } ;
typedef TYPE_1__ MpegEncContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline int FUNC_3(MpegEncContext *VAR_6, int VAR_7, int VAR_8,
                                   int *VAR_9, int VAR_10)
{
    int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
    int16_t *VAR_18;


    if (VAR_7 < 4)
        VAR_16 = VAR_6->y_dc_scale;
    else
        VAR_16 = VAR_6->c_dc_scale;
    if (VAR_5)
        VAR_16 = 8;

    VAR_14 = VAR_6->block_wrap[VAR_7];
    VAR_18 = VAR_6->dc_val[0] + VAR_6->block_index[VAR_7];




    VAR_11 = VAR_18[-1];
    VAR_12 = VAR_18[-1 - VAR_14];
    VAR_13 = VAR_18[-VAR_14];



    if (VAR_6->first_slice_line && VAR_7 != 3) {
        if (VAR_7 != 2)
            VAR_12 = VAR_13 = 1024;
        if (VAR_7 != 1 && VAR_6->mb_x == VAR_6->resync_mb_x)
            VAR_12 = VAR_11 = 1024;
    }
    if (VAR_6->mb_x == VAR_6->resync_mb_x && VAR_6->mb_y == VAR_6->resync_mb_y + 1) {
        if (VAR_7 == 0 || VAR_7 == 4 || VAR_7 == 5)
            VAR_12 = 1024;
    }

    if (FUNC_1(VAR_11 - VAR_12) < FUNC_1(VAR_12 - VAR_13)) {
        VAR_15 = VAR_13;
        *VAR_9 = 1;
    } else {
        VAR_15 = VAR_11;
        *VAR_9 = 0;
    }

    VAR_15 = FUNC_0((VAR_15 + (VAR_16 >> 1)), VAR_16);

    if (VAR_10) {
        VAR_17 = VAR_8 - VAR_15;
    } else {
        VAR_8 += VAR_15;
        VAR_17 = VAR_8;
    }
    VAR_8 *= VAR_16;
    if (VAR_8 & (~2047)) {
        if (!VAR_6->encoding && (VAR_6->avctx->err_recognition & (VAR_2 | VAR_1))) {
            if (VAR_8 < 0) {
                FUNC_2(VAR_6->avctx, VAR_3,
                       "dc<0 at %dx%d\n", VAR_6->mb_x, VAR_6->mb_y);
                return VAR_0;
            }
            if (VAR_8 > 2048 + VAR_16) {
                FUNC_2(VAR_6->avctx, VAR_3,
                       "dc overflow at %dx%d\n", VAR_6->mb_x, VAR_6->mb_y);
                return VAR_0;
            }
        }
        if (VAR_8 < 0)
            VAR_8 = 0;
        else if (!(VAR_6->workaround_bugs & VAR_4))
            VAR_8 = 2047;
    }
    VAR_18[0] = VAR_8;

    return VAR_17;
}
