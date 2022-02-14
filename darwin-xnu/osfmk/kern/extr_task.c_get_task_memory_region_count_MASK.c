
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_map_t ;
typedef int uint64_t ;
typedef TYPE_1__* task_t ;
struct TYPE_4__ {int map; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

uint64_t FUNC_1(task_t VAR_2)
{
 vm_map_t VAR_3;
 VAR_3 = (VAR_2 == VAR_1) ? VAR_0: VAR_2->map;
 return((uint64_t)FUNC_0(VAR_3));
}
