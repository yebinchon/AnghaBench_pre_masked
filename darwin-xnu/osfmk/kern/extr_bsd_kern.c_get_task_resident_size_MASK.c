
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef int uint64_t ;
typedef TYPE_2__* task_t ;
struct TYPE_7__ {TYPE_1__* map; } ;
struct TYPE_6__ {int pmap; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

uint64_t FUNC_1(task_t VAR_3)
{
 vm_map_t VAR_4;

 VAR_4 = (VAR_3 == VAR_2) ? VAR_1: VAR_3->map;
 return((uint64_t)FUNC_0(VAR_4->pmap) * VAR_0);
}
