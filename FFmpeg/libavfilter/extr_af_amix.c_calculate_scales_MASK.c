
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_inputs; int* input_state; float* scale_norm; int weight_sum; int dropout_transition; int sample_rate; float* input_scale; int * weights; } ;
typedef TYPE_1__ MixContext ;


 float FUNC_0 (int ) ;
 int FUNC_1 (int,float) ;
 float FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(MixContext *VAR_1, int VAR_2)
{
    float VAR_3 = 0.f;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1->nb_inputs; VAR_4++)
        if (VAR_1->input_state[VAR_4] & VAR_0)
            VAR_3 += FUNC_0(VAR_1->weights[VAR_4]);

    for (VAR_4 = 0; VAR_4 < VAR_1->nb_inputs; VAR_4++) {
        if (VAR_1->input_state[VAR_4] & VAR_0) {
            if (VAR_1->scale_norm[VAR_4] > VAR_3 / FUNC_0(VAR_1->weights[VAR_4])) {
                VAR_1->scale_norm[VAR_4] -= ((VAR_1->weight_sum / FUNC_0(VAR_1->weights[VAR_4])) / VAR_1->nb_inputs) *
                                    VAR_2 / (VAR_1->dropout_transition * VAR_1->sample_rate);
                VAR_1->scale_norm[VAR_4] = FUNC_1(VAR_1->scale_norm[VAR_4], VAR_3 / FUNC_0(VAR_1->weights[VAR_4]));
            }
        }
    }

    for (VAR_4 = 0; VAR_4 < VAR_1->nb_inputs; VAR_4++) {
        if (VAR_1->input_state[VAR_4] & VAR_0)
            VAR_1->input_scale[VAR_4] = 1.0f / VAR_1->scale_norm[VAR_4] * FUNC_2(VAR_1->weights[VAR_4]);
        else
            VAR_1->input_scale[VAR_4] = 0.0f;
    }
}
