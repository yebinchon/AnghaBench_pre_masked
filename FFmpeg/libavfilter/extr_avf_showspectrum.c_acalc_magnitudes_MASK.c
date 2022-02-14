
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int win_scale; scalar_t__ scale; scalar_t__ orientation; int h; int w; double const gain; int nb_display_channels; float** magnitudes; } ;
typedef TYPE_1__ ShowSpectrumContext ;


 scalar_t__ VAR_0 ;
 float const FUNC_0 (int,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(ShowSpectrumContext *VAR_2)
{
    const double VAR_3 = VAR_2->win_scale * (VAR_2->scale == VAR_0 ? VAR_2->win_scale : 1);
    int VAR_4, VAR_5, VAR_6 = VAR_2->orientation == VAR_1 ? VAR_2->h : VAR_2->w;
    const float VAR_7 = VAR_2->gain * VAR_3;

    for (VAR_4 = 0; VAR_4 < VAR_2->nb_display_channels; VAR_4++) {
        float *VAR_8 = VAR_2->magnitudes[VAR_4];

        for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
            VAR_8[VAR_5] += FUNC_0(VAR_5, VAR_4) * VAR_7;
    }
}
