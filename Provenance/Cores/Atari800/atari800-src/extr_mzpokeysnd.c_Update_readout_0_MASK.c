
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int readout_0; scalar_t__ c0sw4; scalar_t__ c0vo; } ;
typedef TYPE_1__ PokeyState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(PokeyState* VAR_3)
{
    if(VAR_3->c0vo)
        VAR_3->readout_0 = VAR_2;
    else if(VAR_3->c0sw4)
        VAR_3->readout_0 = VAR_0;
    else
        VAR_3->readout_0 = VAR_1;
}
