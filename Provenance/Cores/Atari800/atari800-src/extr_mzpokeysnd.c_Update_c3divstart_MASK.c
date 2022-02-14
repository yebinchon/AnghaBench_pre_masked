
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c3divstart; int c2diva; int c3diva; int mdivk; scalar_t__ c2_hf; scalar_t__ c3_f2; } ;
typedef TYPE_1__ PokeyState ;



__attribute__((used)) static void FUNC_0(PokeyState* VAR_0)
{
    if(VAR_0->c3_f2)
    {
        if(VAR_0->c2_hf)
            VAR_0->c3divstart = VAR_0->c2diva + 256*VAR_0->c3diva + 7;
        else
            VAR_0->c3divstart = (VAR_0->c2diva + 256*VAR_0->c3diva + 1) * VAR_0->mdivk;
    }
    else
        VAR_0->c3divstart = (VAR_0->c3diva + 1) * VAR_0->mdivk;
}
