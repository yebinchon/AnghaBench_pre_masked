
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
struct TYPE_3__ {int * pmap; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(vm_map_t VAR_0)
{
        if (VAR_0 == ((void*)0))
         return;
        if (VAR_0->pmap == ((void*)0))
         return;

        FUNC_0(VAR_0->pmap);
}
