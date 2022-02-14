
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int (* getMaxIntDelay ) () ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 () ;

uint64_t
FUNC_1(void)
{
    uint64_t VAR_1 = 0;

    if (VAR_0 != ((void*)0)
 && VAR_0->getMaxIntDelay != ((void*)0))
 VAR_1 = VAR_0->getMaxIntDelay();

    return(VAR_1);
}
