
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint8_t ;
struct TYPE_16__ {int* linesize; int height; int width; int format; int ** data; } ;
struct TYPE_15__ {int mb_stride; int mb_height; int mb_width; TYPE_10__* avctx; } ;
struct TYPE_14__ {scalar_t__* field_poc; int motion_val; int qscale_table; int mb_type; TYPE_3__* f; scalar_t__ recovered; } ;
struct TYPE_13__ {int flags; int flags2; int hwaccel; } ;
typedef TYPE_1__ H264Picture ;
typedef TYPE_2__ H264Context ;
typedef TYPE_3__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int **,int*,int const**,int*,int ,int ,int) ;
 int FUNC_1 (TYPE_10__*,int ,char*,int) ;
 int FUNC_2 (TYPE_10__*,TYPE_3__*,int *,int ,int ,int ,int *,int ,int ,int ,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(H264Context *VAR_5, AVFrame *VAR_6, H264Picture *VAR_7, int *VAR_8)
{
    int VAR_9;

    if (((VAR_5->avctx->flags & VAR_1) ||
         (VAR_5->avctx->flags2 & VAR_0) ||
         VAR_7->recovered)) {

        if (!VAR_5->avctx->hwaccel &&
            (VAR_7->field_poc[0] == VAR_4 ||
             VAR_7->field_poc[1] == VAR_4)
           ) {
            int VAR_10;
            AVFrame *VAR_11 = VAR_7->f;
            int VAR_12 = VAR_7->field_poc[0] == VAR_4;
            uint8_t *VAR_13[4];
            int VAR_14[4];
            const uint8_t *VAR_15[4];

            FUNC_1(VAR_5->avctx, VAR_2, "Duplicating field %d to fill missing\n", VAR_12);

            for (VAR_10 = 0; VAR_10<4; VAR_10++) {
                VAR_13[VAR_10] = VAR_11->data[VAR_10] + (VAR_12^1)*VAR_11->linesize[VAR_10];
                VAR_15[VAR_10] = VAR_11->data[VAR_10] + VAR_12 *VAR_11->linesize[VAR_10];
                VAR_14[VAR_10] = 2*VAR_11->linesize[VAR_10];
            }

            FUNC_0(VAR_13, VAR_14, VAR_15, VAR_14,
                          VAR_11->format, VAR_11->width, VAR_11->height>>1);
        }

        VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_7);
        if (VAR_9 < 0)
            return VAR_9;

        *VAR_8 = 1;

        if (VAR_3) {
            FUNC_2(VAR_5->avctx, VAR_6, ((void*)0),
                                 VAR_7->mb_type,
                                 VAR_7->qscale_table,
                                 VAR_7->motion_val,
                                 ((void*)0),
                                 VAR_5->mb_width, VAR_5->mb_height, VAR_5->mb_stride, 1);
        }
    }

    return 0;
}
