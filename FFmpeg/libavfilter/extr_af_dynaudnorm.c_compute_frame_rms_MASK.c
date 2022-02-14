
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int channels; int nb_samples; scalar_t__* extended_data; } ;
typedef TYPE_1__ AVFrame ;


 int VAR_0 ;
 double FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (double const) ;
 int FUNC_2 (double) ;

__attribute__((used)) static double FUNC_3(AVFrame *VAR_1, int VAR_2)
{
    double VAR_3 = 0.0;
    int VAR_4, VAR_5;

    if (VAR_2 == -1) {
        for (VAR_4 = 0; VAR_4 < VAR_1->channels; VAR_4++) {
            const double *VAR_6 = (double *)VAR_1->extended_data[VAR_4];

            for (VAR_5 = 0; VAR_5 < VAR_1->nb_samples; VAR_5++) {
                VAR_3 += FUNC_1(VAR_6[VAR_5]);
            }
        }

        VAR_3 /= VAR_1->nb_samples * VAR_1->channels;
    } else {
        const double *VAR_7 = (double *)VAR_1->extended_data[VAR_2];
        for (VAR_5 = 0; VAR_5 < VAR_1->nb_samples; VAR_5++) {
            VAR_3 += FUNC_1(VAR_7[VAR_5]);
        }

        VAR_3 /= VAR_1->nb_samples;
    }

    return FUNC_0(FUNC_2(VAR_3), VAR_0);
}
