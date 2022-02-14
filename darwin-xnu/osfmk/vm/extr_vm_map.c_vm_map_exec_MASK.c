
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* vm_map_t ;
typedef void* task_t ;
typedef int kern_return_t ;
typedef int cpu_type_t ;
typedef int cpu_subtype_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (void*) ;
 void* FUNC_2 () ;
 int FUNC_3 (void*,void*,int ) ;
 int FUNC_4 (void*,void*,int ,void*,int ,int ) ;

kern_return_t
FUNC_5(
 vm_map_t VAR_1,
 task_t VAR_2,
 boolean_t VAR_3,
 void *VAR_4,
 cpu_type_t VAR_5,
 cpu_subtype_t VAR_6)
{
 FUNC_0(
  ("shared_region: task %p: vm_map_exec(%p,%p,%p,0x%x,0x%x): ->\n",
   (void )FUNC_1(FUNC_2()),
   (void )FUNC_1(VAR_1),
   (void )FUNC_1(VAR_2),
   (void )FUNC_1(VAR_4),
   VAR_5,
   VAR_6));
 (void) FUNC_3(VAR_1, VAR_2, VAR_3);
 (void) FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_0(
  ("shared_region: task %p: vm_map_exec(%p,%p,%p,0x%x,0x%x): <-\n",
   (void )FUNC_1(FUNC_2()),
   (void )FUNC_1(VAR_1),
   (void )FUNC_1(VAR_2),
   (void )FUNC_1(VAR_4),
   VAR_5,
   VAR_6));
 return VAR_0;
}
