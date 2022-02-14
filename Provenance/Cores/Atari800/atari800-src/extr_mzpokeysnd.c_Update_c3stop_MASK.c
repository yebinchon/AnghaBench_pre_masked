
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* readout_3 ) (TYPE_1__*) ;int outvol_3; } ;
typedef TYPE_1__ PokeyState ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(PokeyState* VAR_0)
{
    VAR_0->outvol_3 = VAR_0->readout_3(VAR_0);
}
