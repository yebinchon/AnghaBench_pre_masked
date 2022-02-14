
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int* linesize; scalar_t__* data; } ;
struct TYPE_9__ {TYPE_2__* last_frame; TYPE_1__* avctx; } ;
struct TYPE_8__ {int* linesize; scalar_t__* data; } ;
struct TYPE_7__ {int height; int flags; } ;
typedef TYPE_3__ MadContext ;
typedef TYPE_4__ AVFrame ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int,scalar_t__,int,int) ;

__attribute__((used)) static inline void FUNC_1(MadContext *VAR_1, AVFrame *VAR_2,
                              int VAR_3, int VAR_4,
                              int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    if (VAR_5 < 4) {
        unsigned VAR_9 = (VAR_4*16 + ((VAR_5&2)<<2) + VAR_7)*VAR_1->last_frame->linesize[0] + VAR_3*16 + ((VAR_5&1)<<3) + VAR_6;
        if (VAR_9 >= (VAR_1->avctx->height - 7) * VAR_1->last_frame->linesize[0] - 7)
            return;
        FUNC_0(VAR_2->data[0] + (VAR_4*16 + ((VAR_5&2)<<2))*VAR_2->linesize[0] + VAR_3*16 + ((VAR_5&1)<<3),
             VAR_2->linesize[0],
             VAR_1->last_frame->data[0] + VAR_9,
             VAR_1->last_frame->linesize[0], VAR_8);
    } else if (!(VAR_1->avctx->flags & VAR_0)) {
        int VAR_10 = VAR_5 - 3;
        unsigned VAR_11 = (VAR_4 * 8 + (VAR_7/2))*VAR_1->last_frame->linesize[VAR_10] + VAR_3 * 8 + (VAR_6/2);
        if (VAR_11 >= (VAR_1->avctx->height/2 - 7) * VAR_1->last_frame->linesize[VAR_10] - 7)
            return;
        FUNC_0(VAR_2->data[VAR_10] + (VAR_4*8)*VAR_2->linesize[VAR_10] + VAR_3 * 8,
             VAR_2->linesize[VAR_10],
             VAR_1->last_frame->data[VAR_10] + VAR_11,
             VAR_1->last_frame->linesize[VAR_10], VAR_8);
    }
}
