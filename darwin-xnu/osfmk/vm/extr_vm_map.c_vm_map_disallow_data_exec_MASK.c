
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
struct TYPE_3__ {int map_disallow_data_exec; } ;


 int VAR_0 ;

void
FUNC_0(vm_map_t VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;

    VAR_1->map_disallow_data_exec = VAR_0;
}
