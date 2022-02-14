
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {float re; scalar_t__ im; } ;
struct TYPE_9__ {TYPE_1__* priv; } ;
struct TYPE_8__ {int nb_samples; scalar_t__* extended_data; } ;
struct TYPE_7__ {float* window_func_lut; TYPE_5__** fft_data; int * fft; } ;
typedef TYPE_1__ ShowSpatialContext ;
typedef TYPE_2__ AVFrame ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ,TYPE_5__*) ;
 int FUNC_1 (int ,TYPE_5__*) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    ShowSpatialContext *VAR_4 = VAR_0->priv;
    const float *VAR_5 = VAR_4->window_func_lut;
    AVFrame *VAR_6 = VAR_1;
    const int VAR_7 = VAR_2;
    const float *VAR_8 = (float *)VAR_6->extended_data[VAR_7];

    for (int VAR_9 = 0; VAR_9 < VAR_6->nb_samples; VAR_9++) {
        VAR_4->fft_data[VAR_7][VAR_9].re = VAR_8[VAR_9] * VAR_5[VAR_9];
        VAR_4->fft_data[VAR_7][VAR_9].im = 0;
    }

    FUNC_1(VAR_4->fft[VAR_7], VAR_4->fft_data[VAR_7]);
    FUNC_0(VAR_4->fft[VAR_7], VAR_4->fft_data[VAR_7]);

    return 0;
}
