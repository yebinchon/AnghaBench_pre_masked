
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ orientation; int h; int w; int nb_display_channels; float** magnitudes; } ;
typedef TYPE_1__ ShowSpectrumContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(ShowSpectrumContext *VAR_1, float VAR_2)
{
    int VAR_3, VAR_4, VAR_5 = VAR_1->orientation == VAR_0 ? VAR_1->h : VAR_1->w;

    for (VAR_3 = 0; VAR_3 < VAR_1->nb_display_channels; VAR_3++) {
        float *VAR_6 = VAR_1->magnitudes[VAR_3];

        for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
            VAR_6[VAR_4] *= VAR_2;
    }
}
