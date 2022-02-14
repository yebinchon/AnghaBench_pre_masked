
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int i ;
struct TYPE_14__ {int slice_context_count; scalar_t__ codec_id; int mb_height; int height; int start_mb_y; int end_mb_y; struct TYPE_14__** thread_context; scalar_t__ width; int avctx; int progressive_sequence; int * current_picture_ptr; int next_picture_ptr; int last_picture_ptr; TYPE_1__* picture; int context_initialized; } ;
struct TYPE_13__ {int needs_realloc; } ;
typedef TYPE_2__ MpegEncContext ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__**) ;
 int FUNC_2 (scalar_t__,int,int ,int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__**,int ,int) ;

int FUNC_10(MpegEncContext *VAR_4)
{
    int VAR_5, VAR_6 = 0;

    if (!VAR_4->context_initialized)
        return FUNC_0(VAR_1);

    if (VAR_4->slice_context_count > 1) {
        for (VAR_5 = 0; VAR_5 < VAR_4->slice_context_count; VAR_5++) {
            FUNC_6(VAR_4->thread_context[VAR_5]);
        }
        for (VAR_5 = 1; VAR_5 < VAR_4->slice_context_count; VAR_5++) {
            FUNC_1(&VAR_4->thread_context[VAR_5]);
        }
    } else
        FUNC_6(VAR_4);

    FUNC_5(VAR_4);

    if (VAR_4->picture)
        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
                VAR_4->picture[VAR_5].needs_realloc = 1;
        }

    VAR_4->last_picture_ptr =
    VAR_4->next_picture_ptr =
    *(VAR_4->current_picture_ptr = ((void*)0));


    if (VAR_4->codec_id == VAR_0 && !VAR_4->progressive_sequence)
        VAR_4->mb_height = (VAR_4->height + 31) / 32 * 2;
    else
        VAR_4->mb_height = (VAR_4->height + 15) / 16;

    if ((VAR_4->width || VAR_4->height) &&
        (VAR_6 = FUNC_2(VAR_4->width, VAR_4->height, 0, VAR_4->avctx)) < 0)
        goto fail;

    if ((VAR_6 = FUNC_7(VAR_4)))
        goto fail;

    FUNC_9(VAR_4->thread_context, 0, sizeof(VAR_4->thread_context));
    VAR_4->thread_context[0] = VAR_4;

    if (VAR_4->width && VAR_4->height) {
        int VAR_7 = VAR_4->slice_context_count;
        if (VAR_7 > 1) {
            for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++) {
                if (VAR_5) {
                    VAR_4->thread_context[VAR_5] = FUNC_3(VAR_4, sizeof(MpegEncContext));
                    if (!VAR_4->thread_context[VAR_5]) {
                        VAR_6 = FUNC_0(VAR_2);
                        goto fail;
                    }
                }
                if ((VAR_6 = FUNC_8(VAR_4->thread_context[VAR_5])) < 0)
                    goto fail;
                VAR_4->thread_context[VAR_5]->start_mb_y =
                    (VAR_4->mb_height * (VAR_5) + VAR_7 / 2) / VAR_7;
                VAR_4->thread_context[VAR_5]->end_mb_y =
                    (VAR_4->mb_height * (VAR_5 + 1) + VAR_7 / 2) / VAR_7;
            }
        } else {
            VAR_6 = FUNC_8(VAR_4);
            if (VAR_6 < 0)
                goto fail;
            VAR_4->start_mb_y = 0;
            VAR_4->end_mb_y = VAR_4->mb_height;
        }
        VAR_4->slice_context_count = VAR_7;
    }

    return 0;
 fail:
    FUNC_4(VAR_4);
    return VAR_6;
}
