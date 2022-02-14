
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int event_0; scalar_t__ c0sw1; scalar_t__ c0sw2; scalar_t__ c0sw3; } ;
typedef TYPE_1__ PokeyState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(PokeyState* VAR_6)
{
    if(VAR_6->c0sw3)
    {
        if(VAR_6->c0sw2)
            VAR_6->event_0 = VAR_5;
        else
        {
            if(VAR_6->c0sw1)
                VAR_6->event_0 = VAR_0;
            else
                VAR_6->event_0 = VAR_3;
        }
    }
    else
    {
        if(VAR_6->c0sw2)
            VAR_6->event_0 = VAR_2;
        else
        {
            if(VAR_6->c0sw1)
                VAR_6->event_0 = VAR_1;
            else
                VAR_6->event_0 = VAR_4;
        }
    }
}
