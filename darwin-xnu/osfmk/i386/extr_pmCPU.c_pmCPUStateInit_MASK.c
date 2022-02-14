
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* pmCPUStateInit ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 () ;

void
FUNC_1(void)
{
    if (VAR_2 != ((void*)0) && VAR_2->pmCPUStateInit != ((void*)0))
 (*VAR_2->pmCPUStateInit)();
    else
 VAR_1 = VAR_0;
}
