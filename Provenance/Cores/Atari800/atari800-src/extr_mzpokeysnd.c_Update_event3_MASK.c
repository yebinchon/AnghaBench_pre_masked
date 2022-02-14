
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int event_3; scalar_t__ c3sw1; scalar_t__ c3sw2; scalar_t__ c3sw3; } ;
typedef TYPE_1__ PokeyState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(PokeyState* VAR_6)
{
    if(VAR_6->c3sw3)
    {
        if(VAR_6->c3sw2)
            VAR_6->event_3 = VAR_5;
        else
        {
            if(VAR_6->c3sw1)
                VAR_6->event_3 = VAR_0;
            else
                VAR_6->event_3 = VAR_3;
        }
    }
    else
    {
        if(VAR_6->c3sw2)
            VAR_6->event_3 = VAR_2;
        else
        {
            if(VAR_6->c3sw1)
                VAR_6->event_3 = VAR_1;
            else
                VAR_6->event_3 = VAR_4;
        }
    }
}
