
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_2__ {int (* pmInterruptPrewakeApplicable ) () ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;

boolean_t
FUNC_1()
{
    boolean_t VAR_3 = VAR_0;

    if (VAR_2
 && VAR_1 != ((void*)0)
 && VAR_1->pmInterruptPrewakeApplicable != ((void*)0))
 VAR_3 = VAR_1->pmInterruptPrewakeApplicable();

    return VAR_3;
}
