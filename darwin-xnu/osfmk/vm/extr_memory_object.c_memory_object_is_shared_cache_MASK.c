
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef int memory_object_control_t ;
typedef int boolean_t ;
struct TYPE_4__ {int object_is_shared_cache; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;

boolean_t
FUNC_1(
 memory_object_control_t VAR_2)
{
 vm_object_t VAR_3 = VAR_1;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 == VAR_1)
  return VAR_0;

 return VAR_3->object_is_shared_cache;
}
