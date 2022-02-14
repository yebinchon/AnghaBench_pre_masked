
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_11__ {int request_channel_layout; } ;
struct TYPE_10__ {int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_9__ {int nb_channels; int nb_programs; int * end_gain; int * begin_gain; int * history; int ** channels; TYPE_6__* avctx; } ;
typedef TYPE_1__ DBEContext ;
typedef TYPE_2__ AVFrame ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,float*) ;
 size_t* VAR_2 ;
 size_t* VAR_3 ;
 size_t* VAR_4 ;
 size_t* VAR_5 ;
 int FUNC_1 (TYPE_6__*,TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*,int *,int ,float*) ;

__attribute__((used)) static int FUNC_3(DBEContext *VAR_6, AVFrame *VAR_7)
{
    const uint8_t *VAR_8;
    int VAR_9, VAR_10;

    if (VAR_6->nb_channels == 4)
        VAR_8 = VAR_2;
    else if (VAR_6->nb_channels == 6)
        VAR_8 = VAR_3;
    else if (VAR_6->nb_programs == 1 && !(VAR_6->avctx->request_channel_layout & VAR_0))
        VAR_8 = VAR_4;
    else
        VAR_8 = VAR_5;

    VAR_7->nb_samples = VAR_1;
    if ((VAR_10 = FUNC_1(VAR_6->avctx, VAR_7, 0)) < 0)
        return VAR_10;

    for (VAR_9 = 0; VAR_9 < VAR_6->nb_channels; VAR_9++) {
        float *VAR_11 = (float *)VAR_7->extended_data[VAR_8[VAR_9]];
        FUNC_2(VAR_6, &VAR_6->channels[0][VAR_9], VAR_6->history[VAR_9], VAR_11);
        FUNC_2(VAR_6, &VAR_6->channels[1][VAR_9], VAR_6->history[VAR_9], VAR_11 + VAR_1 / 2);
        FUNC_0(VAR_6, VAR_6->begin_gain[VAR_9], VAR_6->end_gain[VAR_9], VAR_11);
    }

    return 0;
}
