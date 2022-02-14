
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lcpu; } ;
typedef TYPE_1__ cpu_data_t ;
typedef int boolean_t ;
struct TYPE_5__ {int (* exitIdle ) (int *) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;

boolean_t
FUNC_1(cpu_data_t *VAR_3)
{
    boolean_t VAR_4;

    if (VAR_2
 && VAR_1 != ((void*)0)
 && VAR_1->exitIdle != ((void*)0))
 VAR_4 = (*VAR_1->exitIdle)(&VAR_3->lcpu);
    else
 VAR_4 = VAR_0;

    return(VAR_4);
}
