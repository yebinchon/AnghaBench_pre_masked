
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {void** extended_data; size_t nb_samples; int format; } ;
struct TYPE_16__ {int * samples; int * overlap; } ;
struct TYPE_15__ {int channels; TYPE_5__* block; } ;
struct TYPE_13__ {int framesize; } ;
struct TYPE_14__ {int bufqueue; TYPE_2__ packet; TYPE_1__* avctx; } ;
struct TYPE_12__ {int frame_size; } ;
typedef TYPE_3__ OpusEncContext ;
typedef TYPE_4__ CeltFrame ;
typedef TYPE_5__ CeltBlock ;
typedef TYPE_6__ AVFrame ;


 size_t const FUNC_0 (int const,int const) ;
 int const FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__**) ;
 void* FUNC_3 (int ) ;
 TYPE_6__* FUNC_4 (int *) ;
 TYPE_6__* FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,void const*,size_t const) ;
 int FUNC_7 (int *,int ,size_t const) ;

__attribute__((used)) static void FUNC_8(OpusEncContext *VAR_0, CeltFrame *VAR_1)
{
    AVFrame *VAR_2 = ((void*)0);
    const int VAR_3 = VAR_0->avctx->frame_size;
    int VAR_4 = FUNC_1(VAR_0->packet.framesize) / VAR_3;

    VAR_2 = FUNC_4(&VAR_0->bufqueue);

    for (int VAR_5 = 0; VAR_5 < VAR_1->channels; VAR_5++) {
        CeltBlock *VAR_6 = &VAR_1->block[VAR_5];
        const void *VAR_7 = VAR_2->extended_data[VAR_5];
        size_t VAR_8 = FUNC_3(VAR_2->format);
        FUNC_6(VAR_6->overlap, VAR_7, VAR_8*VAR_2->nb_samples);
    }

    FUNC_2(&VAR_2);

    for (int VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
        if (VAR_9 != (VAR_4 - 1))
            VAR_2 = FUNC_4(&VAR_0->bufqueue);
        else
            VAR_2 = FUNC_5(&VAR_0->bufqueue, 0);

        for (int VAR_10 = 0; VAR_10 < VAR_1->channels; VAR_10++) {
            CeltBlock *VAR_11 = &VAR_1->block[VAR_10];
            const void *VAR_12 = VAR_2->extended_data[VAR_10];
            const size_t VAR_13 = FUNC_3(VAR_2->format);
            const size_t VAR_14 = (VAR_3 - VAR_2->nb_samples)*VAR_13;
            const size_t VAR_15 = FUNC_0(VAR_3, VAR_2->nb_samples)*VAR_13;
            FUNC_6(&VAR_11->samples[VAR_9*VAR_3], VAR_12, VAR_15);
            FUNC_7(&VAR_11->samples[VAR_2->nb_samples], 0, VAR_14);
        }


        if (VAR_9 != (VAR_4 - 1))
            FUNC_2(&VAR_2);
    }
}
