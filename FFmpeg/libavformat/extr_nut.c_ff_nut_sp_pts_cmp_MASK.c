
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ts; } ;
typedef TYPE_1__ Syncpoint ;



int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const Syncpoint *VAR_2 = VAR_0, *VAR_3 = VAR_1;
    return ((VAR_2->ts - VAR_3->ts) >> 32) - ((VAR_3->ts - VAR_2->ts) >> 32);
}
