
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_18__ {TYPE_6__* priv; } ;
struct TYPE_17__ {int channels; int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_16__ {TYPE_5__* offset; TYPE_4__* tmp; TYPE_3__* coeffs; TYPE_2__* delay; TYPE_1__** frame; } ;
struct TYPE_15__ {scalar_t__* extended_data; } ;
struct TYPE_14__ {scalar_t__* extended_data; } ;
struct TYPE_13__ {scalar_t__* extended_data; } ;
struct TYPE_12__ {scalar_t__* extended_data; } ;
struct TYPE_11__ {scalar_t__* extended_data; } ;
typedef TYPE_6__ AudioNLMSContext ;
typedef TYPE_7__ AVFrame ;
typedef TYPE_8__ AVFilterContext ;


 float FUNC_0 (TYPE_6__*,float const,float const,float*,float*,float*,int*) ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    AudioNLMSContext *VAR_4 = VAR_0->priv;
    AVFrame *VAR_5 = VAR_1;
    const int VAR_6 = (VAR_5->channels * VAR_2) / VAR_3;
    const int VAR_7 = (VAR_5->channels * (VAR_2+1)) / VAR_3;

    for (int VAR_8 = VAR_6; VAR_8 < VAR_7; VAR_8++) {
        const float *VAR_9 = (const float *)VAR_4->frame[0]->extended_data[VAR_8];
        const float *VAR_10 = (const float *)VAR_4->frame[1]->extended_data[VAR_8];
        float *VAR_11 = (float *)VAR_4->delay->extended_data[VAR_8];
        float *VAR_12 = (float *)VAR_4->coeffs->extended_data[VAR_8];
        float *VAR_13 = (float *)VAR_4->tmp->extended_data[VAR_8];
        int *VAR_14 = (int *)VAR_4->offset->extended_data[VAR_8];
        float *VAR_15 = (float *)VAR_5->extended_data[VAR_8];

        for (int VAR_16 = 0; VAR_16 < VAR_5->nb_samples; VAR_16++)
            VAR_15[VAR_16] = FUNC_0(VAR_4, VAR_9[VAR_16], VAR_10[VAR_16], VAR_11, VAR_12, VAR_13, VAR_14);
    }

    return 0;
}
