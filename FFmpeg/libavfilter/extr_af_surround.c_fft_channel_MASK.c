
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* priv; } ;
struct TYPE_6__ {float* input_levels; int buf_size; float const* window_func_lut; TYPE_1__* input; int * rdft; } ;
struct TYPE_5__ {scalar_t__* extended_data; } ;
typedef TYPE_2__ AudioSurroundContext ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ,float*) ;
 int FUNC_1 (scalar_t__,int ,int) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0, void *VAR_1, int VAR_2, int VAR_3)
{
    AudioSurroundContext *VAR_4 = VAR_0->priv;
    const float VAR_5 = VAR_4->input_levels[VAR_2];
    float *VAR_6;
    int VAR_7;

    FUNC_1(VAR_4->input->extended_data[VAR_2] + VAR_4->buf_size * sizeof(float), 0, VAR_4->buf_size * sizeof(float));

    VAR_6 = (float *)VAR_4->input->extended_data[VAR_2];
    for (VAR_7 = 0; VAR_7 < VAR_4->buf_size; VAR_7++) {
        VAR_6[VAR_7] *= VAR_4->window_func_lut[VAR_7] * VAR_5;
    }

    FUNC_0(VAR_4->rdft[VAR_2], (float *)VAR_4->input->extended_data[VAR_2]);

    return 0;
}
