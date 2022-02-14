
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ data1; } ;
typedef TYPE_1__ event_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;

void FUNC_3 (void)
{
    event_t *VAR_6;
    int VAR_7;

    VAR_7 = FUNC_1 () + 2;
    while (FUNC_1() < VAR_7)
 FUNC_2 ();

    FUNC_2 ();
    for ( ; VAR_5 != VAR_3
       ; VAR_5 = (++VAR_5)&(VAR_1-1) )
    {
 VAR_6 = &VAR_4[VAR_5];
 if (VAR_6->type == VAR_2 && VAR_6->data1 == VAR_0)
     FUNC_0 ("Network game synchronization aborted.");
    }
}
