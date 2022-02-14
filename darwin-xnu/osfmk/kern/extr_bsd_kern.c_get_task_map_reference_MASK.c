
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_map_t ;
typedef TYPE_1__* task_t ;
struct TYPE_5__ {int map; int active; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

vm_map_t FUNC_3(task_t VAR_1)
{
 vm_map_t VAR_2;

 if (VAR_1 == ((void*)0))
  return VAR_0;

 FUNC_0(VAR_1);
 if (!VAR_1->active) {
  FUNC_1(VAR_1);
  return VAR_0;
 }
 VAR_2 = VAR_1->map;
 FUNC_2(VAR_2);
 FUNC_1(VAR_1);
 return VAR_2;
}
