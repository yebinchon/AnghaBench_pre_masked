
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_object_t ;
typedef int * memory_object_control_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2(
        memory_object_control_t VAR_1)
{
 vm_object_t VAR_2;

 if (VAR_1 == ((void*)0))
  return;

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 != VAR_0)
  FUNC_1(VAR_2);
}
