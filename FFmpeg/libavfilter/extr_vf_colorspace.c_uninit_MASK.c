
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* priv; } ;
struct TYPE_4__ {int lin_lut; int ** dither_scratch_base; scalar_t__ rgb_sz; int * rgb; } ;
typedef TYPE_1__ ColorSpaceContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(AVFilterContext *VAR_0)
{
    ColorSpaceContext *VAR_1 = VAR_0->priv;

    FUNC_0(&VAR_1->rgb[0]);
    FUNC_0(&VAR_1->rgb[1]);
    FUNC_0(&VAR_1->rgb[2]);
    VAR_1->rgb_sz = 0;
    FUNC_0(&VAR_1->dither_scratch_base[0][0]);
    FUNC_0(&VAR_1->dither_scratch_base[0][1]);
    FUNC_0(&VAR_1->dither_scratch_base[1][0]);
    FUNC_0(&VAR_1->dither_scratch_base[1][1]);
    FUNC_0(&VAR_1->dither_scratch_base[2][0]);
    FUNC_0(&VAR_1->dither_scratch_base[2][1]);

    FUNC_0(&VAR_1->lin_lut);
}
