
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int readout_2; scalar_t__ c2vo; } ;
typedef TYPE_1__ PokeyState ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(PokeyState* VAR_2)
{
    if(VAR_2->c2vo)
        VAR_2->readout_2 = VAR_1;
    else
        VAR_2->readout_2 = VAR_0;
}
