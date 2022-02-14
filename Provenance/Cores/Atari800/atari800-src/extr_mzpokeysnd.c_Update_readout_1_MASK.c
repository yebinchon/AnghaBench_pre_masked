
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int readout_1; scalar_t__ c1sw4; scalar_t__ c1vo; } ;
typedef TYPE_1__ PokeyState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(PokeyState* VAR_3)
{
    if(VAR_3->c1vo)
        VAR_3->readout_1 = VAR_2;
    else if(VAR_3->c1sw4)
        VAR_3->readout_1 = VAR_0;
    else
        VAR_3->readout_1 = VAR_1;
}
