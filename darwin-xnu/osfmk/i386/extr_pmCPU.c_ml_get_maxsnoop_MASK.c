
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int (* getMaxSnoop ) () ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;

unsigned
FUNC_1(void)
{
    uint64_t VAR_2 = 0;

    if (VAR_1
 && VAR_0 != ((void*)0)
 && VAR_0->getMaxSnoop != ((void*)0))
 VAR_2 = VAR_0->getMaxSnoop();

    return((unsigned)(VAR_2 & 0xffffffff));
}
