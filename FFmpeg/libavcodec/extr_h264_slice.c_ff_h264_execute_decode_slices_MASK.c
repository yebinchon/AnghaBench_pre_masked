
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int (* execute ) (TYPE_4__* const,int (*) (TYPE_4__* const,TYPE_2__*),TYPE_2__*,int *,int,int) ;scalar_t__ hwaccel; } ;
struct TYPE_17__ {int nb_slice_ctx_queued; int mb_height; int mb_width; int mb_y; TYPE_2__* slice_ctx; scalar_t__ postpone_filter; TYPE_4__* avctx; } ;
struct TYPE_15__ {scalar_t__ error_count; } ;
struct TYPE_16__ {int next_slice_idx; int mb_y; int mb_x; int resync_mb_y; int resync_mb_x; TYPE_1__ er; } ;
typedef TYPE_2__ H264SliceContext ;
typedef TYPE_3__ H264Context ;
typedef TYPE_4__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__* const,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*,int ,int) ;
 int FUNC_5 (TYPE_4__* const,int (*) (TYPE_4__* const,TYPE_2__*),TYPE_2__*,int *,int,int) ;

int FUNC_6(H264Context *VAR_2)
{
    AVCodecContext *const VAR_3 = VAR_2->avctx;
    H264SliceContext *VAR_4;
    int VAR_5 = VAR_2->nb_slice_ctx_queued;
    int VAR_6 = 0;
    int VAR_7, VAR_8;

    VAR_2->slice_ctx[0].next_slice_idx = VAR_1;

    if (VAR_2->avctx->hwaccel || VAR_5 < 1)
        return 0;

    FUNC_2(VAR_5 && VAR_2->slice_ctx[VAR_5 - 1].mb_y < VAR_2->mb_height);

    if (VAR_5 == 1) {

        VAR_2->slice_ctx[0].next_slice_idx = VAR_2->mb_width * VAR_2->mb_height;
        VAR_2->postpone_filter = 0;

        VAR_6 = FUNC_3(VAR_3, &VAR_2->slice_ctx[0]);
        VAR_2->mb_y = VAR_2->slice_ctx[0].mb_y;
        if (VAR_6 < 0)
            goto finish;
    } else {
        FUNC_2(VAR_5 > 0);
        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
            int VAR_9 = VAR_2->mb_width * VAR_2->mb_height;
            int VAR_10;

            VAR_4 = &VAR_2->slice_ctx[VAR_7];
            if (VAR_0) {
                VAR_4->er.error_count = 0;
            }


            VAR_10 = VAR_4->mb_y * VAR_2->mb_width + VAR_4->mb_x;
            for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
                H264SliceContext *VAR_11 = &VAR_2->slice_ctx[VAR_8];
                int VAR_12 = VAR_11->mb_y * VAR_2->mb_width + VAR_11->mb_x;

                if (VAR_7 == VAR_8 || VAR_12 < VAR_10)
                    continue;
                VAR_9 = FUNC_0(VAR_9, VAR_12);
            }
            VAR_4->next_slice_idx = VAR_9;
        }

        VAR_3->execute(VAR_3, FUNC_3, VAR_2->slice_ctx,
                       ((void*)0), VAR_5, sizeof(VAR_2->slice_ctx[0]));


        VAR_4 = &VAR_2->slice_ctx[VAR_5 - 1];
        VAR_2->mb_y = VAR_4->mb_y;
        if (VAR_0) {
            for (VAR_7 = 1; VAR_7 < VAR_5; VAR_7++)
                VAR_2->slice_ctx[0].er.error_count += VAR_2->slice_ctx[VAR_7].er.error_count;
        }

        if (VAR_2->postpone_filter) {
            VAR_2->postpone_filter = 0;

            for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
                int VAR_13, VAR_14;

                VAR_4 = &VAR_2->slice_ctx[VAR_7];
                VAR_13 = FUNC_0(VAR_4->mb_y + 1, VAR_2->mb_height);
                VAR_14 = (VAR_4->mb_y >= VAR_2->mb_height) ? VAR_2->mb_width : VAR_4->mb_x;

                for (VAR_8 = VAR_4->resync_mb_y; VAR_8 < VAR_13; VAR_8 += 1 + FUNC_1(VAR_2)) {
                    VAR_4->mb_y = VAR_8;
                    FUNC_4(VAR_2, VAR_4, VAR_8 > VAR_4->resync_mb_y ? 0 : VAR_4->resync_mb_x,
                                VAR_8 == VAR_13 - 1 ? VAR_14 : VAR_2->mb_width);
                }
            }
        }
    }

finish:
    VAR_2->nb_slice_ctx_queued = 0;
    return VAR_6;
}
