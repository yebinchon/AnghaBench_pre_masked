
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c0divstart; int c0divstart_p; int c0diva; int mdivk; scalar_t__ c0_hf; scalar_t__ c1_f0; } ;
typedef TYPE_1__ PokeyState ;



__attribute__((used)) static void FUNC_0(PokeyState* VAR_0)
{
    if(VAR_0->c1_f0)
    {
        if(VAR_0->c0_hf)
        {
            VAR_0->c0divstart = 256;
            VAR_0->c0divstart_p = VAR_0->c0diva + 7;
        }
        else
        {
            VAR_0->c0divstart = 256 * VAR_0->mdivk;
            VAR_0->c0divstart_p = (VAR_0->c0diva+1)*VAR_0->mdivk;
        }
    }
    else
    {
        if(VAR_0->c0_hf)
            VAR_0->c0divstart = VAR_0->c0diva + 4;
        else
            VAR_0->c0divstart = (VAR_0->c0diva+1) * VAR_0->mdivk;
    }
}
