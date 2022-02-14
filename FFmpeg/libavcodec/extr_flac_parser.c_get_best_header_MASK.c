
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {scalar_t__ channels; int sample_rate; int channel_layout; } ;
struct TYPE_12__ {scalar_t__ channels; int blocksize; int frame_or_sample_num; scalar_t__ is_var_size; int samplerate; } ;
struct TYPE_14__ {int offset; TYPE_2__ fi; struct TYPE_14__* best_child; } ;
struct TYPE_13__ {int last_fi_valid; int fifo_buf; TYPE_2__ last_fi; scalar_t__ best_header_valid; TYPE_1__* pc; int wrap_buf_allocated_size; int wrap_buf; TYPE_7__* avctx; TYPE_4__* best_header; } ;
struct TYPE_11__ {int duration; int flags; int pts; } ;
typedef TYPE_3__ FLACParseContext ;
typedef TYPE_4__ FLACHeaderMarker ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_7__*) ;
 int * FUNC_3 (TYPE_3__*,int,int,int *,int *) ;

__attribute__((used)) static int FUNC_4(FLACParseContext *VAR_1, const uint8_t **VAR_2,
                           int *VAR_3)
{
    FLACHeaderMarker *VAR_4 = VAR_1->best_header;
    FLACHeaderMarker *VAR_5 = VAR_4->best_child;
    if (!VAR_5) {
        *VAR_3 = FUNC_0(VAR_1->fifo_buf) - VAR_4->offset;
    } else {
        *VAR_3 = VAR_5->offset - VAR_4->offset;


        FUNC_1(VAR_1, VAR_4, VAR_5, 0);
    }

    if (VAR_4->fi.channels != VAR_1->avctx->channels ||
        !VAR_1->avctx->channel_layout) {
        VAR_1->avctx->channels = VAR_4->fi.channels;
        FUNC_2(VAR_1->avctx);
    }
    VAR_1->avctx->sample_rate = VAR_4->fi.samplerate;
    VAR_1->pc->duration = VAR_4->fi.blocksize;
    *VAR_2 = FUNC_3(VAR_1, VAR_4->offset, *VAR_3,
                                        &VAR_1->wrap_buf,
                                        &VAR_1->wrap_buf_allocated_size);


    if (VAR_1->pc->flags & VAR_0) {
        if (VAR_4->fi.is_var_size)
          VAR_1->pc->pts = VAR_4->fi.frame_or_sample_num;
        else if (VAR_4->best_child)
          VAR_1->pc->pts = VAR_4->fi.frame_or_sample_num * VAR_4->fi.blocksize;
    }

    VAR_1->best_header_valid = 0;
    VAR_1->last_fi_valid = 1;
    VAR_1->last_fi = VAR_4->fi;



    if (VAR_5)
        return VAR_5->offset - FUNC_0(VAR_1->fifo_buf);
    return 0;
}
