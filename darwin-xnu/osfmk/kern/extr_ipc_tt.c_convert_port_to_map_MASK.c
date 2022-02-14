
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_map_t ;
typedef TYPE_1__* task_t ;
typedef int ipc_port_t ;
struct TYPE_5__ {int map; int active; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

vm_map_t
FUNC_3(
 ipc_port_t VAR_2)
{
 task_t VAR_3;
 vm_map_t VAR_4;

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 == VAR_0)
  return VAR_1;

 if (!VAR_3->active) {
  FUNC_1(VAR_3);
  return VAR_1;
 }

 VAR_4 = VAR_3->map;
 FUNC_2(VAR_4);
 FUNC_1(VAR_3);
 return VAR_4;
}
