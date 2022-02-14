
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_neurons; int nb_inputs; float* bias; float const* input_weights; scalar_t__ activation; } ;
typedef TYPE_1__ DenseLayer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 float FUNC_0 (int ,float) ;
 float VAR_3 ;
 int FUNC_1 (int ) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float) ;

__attribute__((used)) static void FUNC_4(const DenseLayer *VAR_4, float *VAR_5, const float *VAR_6)
{
    const int VAR_7 = VAR_4->nb_neurons, VAR_8 = VAR_4->nb_inputs, VAR_9 = VAR_7;

    for (int VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {

        float VAR_11 = VAR_4->bias[VAR_10];

        for (int VAR_12 = 0; VAR_12 < VAR_8; VAR_12++)
            VAR_11 += VAR_4->input_weights[VAR_12 * VAR_9 + VAR_10] * VAR_6[VAR_12];

        VAR_5[VAR_10] = VAR_3 * VAR_11;
    }

    if (VAR_4->activation == VAR_1) {
        for (int VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
            VAR_5[VAR_13] = FUNC_2(VAR_5[VAR_13]);
    } else if (VAR_4->activation == VAR_2) {
        for (int VAR_14 = 0; VAR_14 < VAR_7; VAR_14++)
            VAR_5[VAR_14] = FUNC_3(VAR_5[VAR_14]);
    } else if (VAR_4->activation == VAR_0) {
        for (int VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
            VAR_5[VAR_15] = FUNC_0(0, VAR_5[VAR_15]);
    } else {
        FUNC_1(0);
    }
}
