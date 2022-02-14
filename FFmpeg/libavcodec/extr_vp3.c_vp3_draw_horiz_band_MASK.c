
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* f; } ;
struct TYPE_6__ {int height; int last_slice_end; int chroma_y_shift; TYPE_5__ current_frame; TYPE_3__* avctx; scalar_t__ flipped_image; } ;
typedef TYPE_1__ Vp3DecodeContext ;
struct TYPE_8__ {int* linesize; } ;
struct TYPE_7__ {int active_thread_type; int (* draw_horiz_band ) (TYPE_3__*,TYPE_4__*,int*,int,int,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_5__*,int,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,int*,int,int,int) ;

__attribute__((used)) static void FUNC_3(Vp3DecodeContext *VAR_4, int VAR_5)
{
    int VAR_6, VAR_7, VAR_8;
    int VAR_9[VAR_0];

    if (VAR_2 && VAR_4->avctx->active_thread_type & VAR_1) {
        int VAR_10 = VAR_4->flipped_image ? VAR_4->height - VAR_5 : VAR_5;




        FUNC_1(&VAR_4->current_frame,
                                  VAR_10 == VAR_4->height ? VAR_3
                                                         : VAR_10 - 1,
                                  0);
    }

    if (!VAR_4->avctx->draw_horiz_band)
        return;

    VAR_6 = VAR_5 - VAR_4->last_slice_end;
    VAR_4->last_slice_end = VAR_5;
    VAR_5 -= VAR_6;

    if (!VAR_4->flipped_image)
        VAR_5 = VAR_4->height - VAR_5 - VAR_6;

    VAR_7 = VAR_5 >> VAR_4->chroma_y_shift;
    VAR_9[0] = VAR_4->current_frame.f->linesize[0] * VAR_5;
    VAR_9[1] = VAR_4->current_frame.f->linesize[1] * VAR_7;
    VAR_9[2] = VAR_4->current_frame.f->linesize[2] * VAR_7;
    for (VAR_8 = 3; VAR_8 < VAR_0; VAR_8++)
        VAR_9[VAR_8] = 0;

    FUNC_0();
    VAR_4->avctx->draw_horiz_band(VAR_4->avctx, VAR_4->current_frame.f, VAR_9, VAR_5, 3, VAR_6);
}
