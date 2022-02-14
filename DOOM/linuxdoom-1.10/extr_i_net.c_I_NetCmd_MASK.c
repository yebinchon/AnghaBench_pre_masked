
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ command; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3 (void)
{
    if (VAR_2->command == VAR_1)
    {
 FUNC_2 ();
    }
    else if (VAR_2->command == VAR_0)
    {
 FUNC_1 ();
    }
    else
 FUNC_0 ("Bad net cmd: %i\n",VAR_2->command);
}
