
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int win_scale; scalar_t__ scale; scalar_t__ orientation; int h; int w; double const gain; float** magnitudes; } ;
typedef TYPE_1__ ShowSpectrumContext ;
typedef TYPE_2__ AVFilterContext ;


 scalar_t__ VAR_0 ;
 float const FUNC_0 (int,int const) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_2, void *VAR_3, int VAR_4, int VAR_5)
{
    ShowSpectrumContext *VAR_6 = VAR_2->priv;
    const double VAR_7 = VAR_6->win_scale * (VAR_6->scale == VAR_0 ? VAR_6->win_scale : 1);
    int VAR_8, VAR_9 = VAR_6->orientation == VAR_1 ? VAR_6->h : VAR_6->w;
    const float VAR_10 = VAR_6->gain * VAR_7;
    const int VAR_11 = VAR_4;
    float *VAR_12 = VAR_6->magnitudes[VAR_11];

    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
        VAR_12[VAR_8] = FUNC_0(VAR_8, VAR_11) * VAR_10;

    return 0;
}
