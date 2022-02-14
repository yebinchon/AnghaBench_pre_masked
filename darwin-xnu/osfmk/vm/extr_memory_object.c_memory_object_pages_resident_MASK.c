
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef int memory_object_control_t ;
typedef int kern_return_t ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ resident_page_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* FUNC_0 (int ) ;

kern_return_t
FUNC_1(
 memory_object_control_t VAR_5,
 boolean_t * VAR_6)
{
 vm_object_t VAR_7;

 *VAR_6 = VAR_0;

 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 == VAR_4)
  return (VAR_1);

 if (VAR_7->resident_page_count)
  *VAR_6 = VAR_3;

 return (VAR_2);
}
