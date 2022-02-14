
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filter_size; double* prev_amplification_factor; int * gain_history_minimum; int * gain_history_smoothed; int * gain_history_original; scalar_t__ alt_boundary_mode; } ;
typedef TYPE_1__ DynamicAudioNormalizerContext ;


 double FUNC_0 (double,double) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,double const) ;
 double FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int const FUNC_6 (int ) ;
 double FUNC_7 (TYPE_1__*,int ) ;
 double FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(DynamicAudioNormalizerContext *VAR_0, int VAR_1,
                                double VAR_2)
{
    if (FUNC_2(VAR_0->gain_history_original[VAR_1]) ||
        FUNC_2(VAR_0->gain_history_minimum[VAR_1])) {
        const int VAR_3 = VAR_0->filter_size / 2;
        const double VAR_4 = VAR_0->alt_boundary_mode ? VAR_2 : 1.0;

        VAR_0->prev_amplification_factor[VAR_1] = VAR_4;

        while (FUNC_6(VAR_0->gain_history_original[VAR_1]) < VAR_3) {
            FUNC_3(VAR_0->gain_history_original[VAR_1], VAR_4);
        }
    }

    FUNC_3(VAR_0->gain_history_original[VAR_1], VAR_2);

    while (FUNC_6(VAR_0->gain_history_original[VAR_1]) >= VAR_0->filter_size) {
        double VAR_5;
        FUNC_1(FUNC_6(VAR_0->gain_history_original[VAR_1]) == VAR_0->filter_size);

        if (FUNC_2(VAR_0->gain_history_minimum[VAR_1])) {
            const int VAR_6 = VAR_0->filter_size / 2;
            double VAR_7 = VAR_0->alt_boundary_mode ? FUNC_4(VAR_0->gain_history_original[VAR_1], 0) : 1.0;
            int VAR_8 = VAR_6;

            while (FUNC_6(VAR_0->gain_history_minimum[VAR_1]) < VAR_6) {
                VAR_8++;
                VAR_7 = FUNC_0(VAR_7, FUNC_4(VAR_0->gain_history_original[VAR_1], VAR_8));
                FUNC_3(VAR_0->gain_history_minimum[VAR_1], VAR_7);
            }
        }

        VAR_5 = FUNC_8(VAR_0->gain_history_original[VAR_1]);

        FUNC_3(VAR_0->gain_history_minimum[VAR_1], VAR_5);

        FUNC_5(VAR_0->gain_history_original[VAR_1]);
    }

    while (FUNC_6(VAR_0->gain_history_minimum[VAR_1]) >= VAR_0->filter_size) {
        double VAR_9;
        FUNC_1(FUNC_6(VAR_0->gain_history_minimum[VAR_1]) == VAR_0->filter_size);
        VAR_9 = FUNC_7(VAR_0, VAR_0->gain_history_minimum[VAR_1]);

        FUNC_3(VAR_0->gain_history_smoothed[VAR_1], VAR_9);

        FUNC_5(VAR_0->gain_history_minimum[VAR_1]);
    }
}
