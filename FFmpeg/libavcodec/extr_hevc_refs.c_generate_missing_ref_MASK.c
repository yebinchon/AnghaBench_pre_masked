
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {TYPE_4__* sps; } ;
struct TYPE_18__ {scalar_t__ threads_type; int seq_decode; TYPE_5__ ps; TYPE_1__* avctx; } ;
struct TYPE_17__ {int poc; int tf; scalar_t__ flags; int sequence; TYPE_3__* frame; } ;
struct TYPE_15__ {int bit_depth; int height; int* vshift; int width; int* hshift; int pixel_shift; } ;
struct TYPE_14__ {int* linesize; int ** data; TYPE_2__** buf; } ;
struct TYPE_13__ {int size; int data; } ;
struct TYPE_12__ {int hwaccel; } ;
typedef TYPE_6__ HEVCFrame ;
typedef TYPE_7__ HEVCContext ;


 int FUNC_0 (int *,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_6__* FUNC_1 (TYPE_7__*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static HEVCFrame *FUNC_5(HEVCContext *VAR_2, int VAR_3)
{
    HEVCFrame *VAR_4;
    int VAR_5, VAR_6;

    VAR_4 = FUNC_1(VAR_2);
    if (!VAR_4)
        return ((void*)0);

    if (!VAR_2->avctx->hwaccel) {
        if (!VAR_2->ps.sps->pixel_shift) {
            for (VAR_5 = 0; VAR_4->frame->buf[VAR_5]; VAR_5++)
                FUNC_4(VAR_4->frame->buf[VAR_5]->data, 1 << (VAR_2->ps.sps->bit_depth - 1),
                       VAR_4->frame->buf[VAR_5]->size);
        } else {
            for (VAR_5 = 0; VAR_4->frame->data[VAR_5]; VAR_5++)
                for (VAR_6 = 0; VAR_6 < (VAR_2->ps.sps->height >> VAR_2->ps.sps->vshift[VAR_5]); VAR_6++) {
                    uint8_t *VAR_7 = VAR_4->frame->data[VAR_5] + VAR_6 * VAR_4->frame->linesize[VAR_5];
                    FUNC_0(VAR_7, 1 << (VAR_2->ps.sps->bit_depth - 1));
                    FUNC_2(VAR_7 + 2, 2, 2*(VAR_2->ps.sps->width >> VAR_2->ps.sps->hshift[VAR_5]) - 2);
                }
        }
    }

    VAR_4->poc = VAR_3;
    VAR_4->sequence = VAR_2->seq_decode;
    VAR_4->flags = 0;

    if (VAR_2->threads_type == VAR_0)
        FUNC_3(&VAR_4->tf, VAR_1, 0);

    return VAR_4;
}
