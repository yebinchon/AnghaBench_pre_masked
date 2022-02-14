
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* priv; } ;
struct TYPE_10__ {scalar_t__* extended_data; } ;
struct TYPE_9__ {float* output_levels; int hop_size; int buf_size; float* window_func_lut; TYPE_2__* overlap_buffer; TYPE_1__* output; int * irdft; } ;
struct TYPE_8__ {scalar_t__* extended_data; } ;
struct TYPE_7__ {scalar_t__* extended_data; } ;
typedef TYPE_3__ AudioSurroundContext ;
typedef TYPE_4__ AVFrame ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (int ,float*) ;
 int FUNC_1 (float*,float*,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    AudioSurroundContext *VAR_4 = VAR_0->priv;
    const float VAR_5 = VAR_4->output_levels[VAR_2];
    AVFrame *VAR_6 = VAR_1;
    float *VAR_7, *VAR_8;
    int VAR_9;

    FUNC_0(VAR_4->irdft[VAR_2], (float *)VAR_4->output->extended_data[VAR_2]);

    VAR_7 = (float *)VAR_4->output->extended_data[VAR_2];
    VAR_8 = (float *)VAR_4->overlap_buffer->extended_data[VAR_2];

    FUNC_2(VAR_4->overlap_buffer->extended_data[VAR_2],
            VAR_4->overlap_buffer->extended_data[VAR_2] + VAR_4->hop_size * sizeof(float),
            VAR_4->buf_size * sizeof(float));
    FUNC_3(VAR_4->overlap_buffer->extended_data[VAR_2] + VAR_4->buf_size * sizeof(float),
           0, VAR_4->hop_size * sizeof(float));

    for (VAR_9 = 0; VAR_9 < VAR_4->buf_size; VAR_9++) {
        VAR_8[VAR_9] += VAR_7[VAR_9] * VAR_4->window_func_lut[VAR_9] * VAR_5;
    }

    VAR_8 = (float *)VAR_4->overlap_buffer->extended_data[VAR_2];
    VAR_7 = (float *)VAR_6->extended_data[VAR_2];
    FUNC_1(VAR_7, VAR_8, VAR_4->hop_size * sizeof(float));

    return 0;
}
