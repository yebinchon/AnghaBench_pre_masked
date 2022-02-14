
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c2divstart; int c2divstart_p; int c2diva; int mdivk; scalar_t__ c2_hf; scalar_t__ c3_f2; } ;
typedef TYPE_1__ PokeyState ;



__attribute__((used)) static void FUNC_0(PokeyState* VAR_0)
{
    if(VAR_0->c3_f2)
    {
        if(VAR_0->c2_hf)
        {
            VAR_0->c2divstart = 256;
            VAR_0->c2divstart_p = VAR_0->c2diva + 7;
        }
        else
        {
            VAR_0->c2divstart = 256 * VAR_0->mdivk;
            VAR_0->c2divstart_p = (VAR_0->c2diva+1)*VAR_0->mdivk;
        }
    }
    else
    {
        if(VAR_0->c2_hf)
            VAR_0->c2divstart = VAR_0->c2diva + 4;
        else
            VAR_0->c2divstart = (VAR_0->c2diva+1) * VAR_0->mdivk;
    }
}
