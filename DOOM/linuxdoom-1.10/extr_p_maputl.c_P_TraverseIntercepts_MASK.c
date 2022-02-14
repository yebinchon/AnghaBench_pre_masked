
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* traverser_t ) (TYPE_1__*) ;
struct TYPE_6__ {scalar_t__ frac; } ;
typedef TYPE_1__ intercept_t ;
typedef scalar_t__ fixed_t ;
typedef int boolean ;


 void* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;

boolean
FUNC_0
( traverser_t VAR_3,
  fixed_t VAR_4 )
{
    int VAR_5;
    fixed_t VAR_6;
    intercept_t* VAR_7;
    intercept_t* VAR_8;

    VAR_5 = VAR_1 - VAR_2;

    VAR_8 = 0;

    while (VAR_5--)
    {
 VAR_6 = VAR_0;
 for (VAR_7 = VAR_2 ; VAR_7<VAR_1 ; VAR_7++)
 {
     if (VAR_7->frac < VAR_6)
     {
  VAR_6 = VAR_7->frac;
  VAR_8 = VAR_7;
     }
 }

 if (VAR_6 > VAR_4)
     return 1;
        if ( !VAR_3 (VAR_8) )
     return 0;

 VAR_8->frac = VAR_0;
    }

    return 1;
}
