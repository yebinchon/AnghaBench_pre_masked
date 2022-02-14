
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* markAllCPUsOff ) () ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;

void
FUNC_1(void)
{
    if (VAR_1
 && VAR_0 != ((void*)0)
 && VAR_0->markAllCPUsOff != ((void*)0))
 (*VAR_0->markAllCPUsOff)();
}
