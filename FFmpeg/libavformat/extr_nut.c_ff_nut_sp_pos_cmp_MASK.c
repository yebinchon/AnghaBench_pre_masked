
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pos; } ;
typedef TYPE_1__ Syncpoint ;



int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const Syncpoint *VAR_2 = VAR_0, *VAR_3 = VAR_1;
    return ((VAR_2->pos - VAR_3->pos) >> 32) - ((VAR_3->pos - VAR_2->pos) >> 32);
}
