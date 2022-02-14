
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {scalar_t__ orientation; int h; int w; float** phases; } ;
typedef TYPE_1__ ShowSpectrumContext ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int,int const) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_1(AVFilterContext *VAR_2, void *VAR_3, int VAR_4, int VAR_5)
{
    ShowSpectrumContext *VAR_6 = VAR_2->priv;
    const int VAR_7 = VAR_6->orientation == VAR_1 ? VAR_6->h : VAR_6->w;
    const int VAR_8 = VAR_4;
    float *VAR_9 = VAR_6->phases[VAR_8];
    int VAR_10;

    for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
        VAR_9[VAR_10] = (FUNC_0(VAR_10, VAR_8) / VAR_0 + 1) / 2;

    return 0;
}
