
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum TwinVQFrameType { ____Placeholder_TwinVQFrameType } TwinVQFrameType ;
struct TYPE_9__ {int size; } ;
typedef TYPE_3__ TwinVQModeTab ;
struct TYPE_10__ {float* prev_frame; int* last_block_pos; float* curr_frame; TYPE_2__* fdsp; TYPE_1__* avctx; scalar_t__ spectrum; TYPE_3__* mtab; } ;
typedef TYPE_4__ TwinVQContext ;
struct TYPE_8__ {int (* butterflies_float ) (float*,float*,int) ;} ;
struct TYPE_7__ {int channels; } ;


 int FUNC_0 (TYPE_4__*,int,int,scalar_t__,float*,int) ;
 int FUNC_1 (float*,float*,int) ;
 int FUNC_2 (float*,float*,int) ;

__attribute__((used)) static void FUNC_3(TwinVQContext *VAR_0, enum TwinVQFrameType VAR_1,
                         int VAR_2, float **VAR_3, int VAR_4)
{
    const TwinVQModeTab *VAR_5 = VAR_0->mtab;
    float *VAR_6 = VAR_0->prev_frame + VAR_0->last_block_pos[0];
    int VAR_7, VAR_8, VAR_9;
    float *VAR_10, *VAR_11;

    for (VAR_9 = 0; VAR_9 < VAR_0->avctx->channels; VAR_9++)
        FUNC_0(VAR_0, VAR_1, VAR_2,
                         VAR_0->spectrum + VAR_9 * VAR_5->size,
                         VAR_6 + 2 * VAR_9 * VAR_5->size,
                         VAR_9);

    if (!VAR_3)
        return;

    VAR_8 = VAR_0->last_block_pos[0];
    VAR_7 = VAR_5->size - VAR_8;

    VAR_10 = &VAR_3[0][0] + VAR_4;
    FUNC_1(VAR_10, VAR_6, VAR_7 * sizeof(*VAR_10));
    FUNC_1(VAR_10 + VAR_7, VAR_0->curr_frame, VAR_8 * sizeof(*VAR_10));

    if (VAR_0->avctx->channels == 2) {
        VAR_11 = &VAR_3[1][0] + VAR_4;
        FUNC_1(VAR_11, &VAR_6[2 * VAR_5->size],
               VAR_7 * sizeof(*VAR_11));
        FUNC_1(VAR_11 + VAR_7, &VAR_0->curr_frame[2 * VAR_5->size],
               VAR_8 * sizeof(*VAR_11));
        VAR_0->fdsp->butterflies_float(VAR_10, VAR_11, VAR_5->size);
    }
}
