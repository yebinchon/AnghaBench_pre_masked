
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ memory_object_size_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

int
FUNC_2(
 memory_object_size_t *VAR_4,
 memory_object_size_t *VAR_5,
 vm_size_t *VAR_6,
 boolean_t *VAR_7)
{
 if (VAR_3) {

  *VAR_4 = FUNC_1();
  *VAR_5 = FUNC_0();
  *VAR_6 = (vm_size_t)VAR_1;
  *VAR_7 = VAR_2;

 } else {

  *VAR_4 = 0;
  *VAR_5 = 0;
  *VAR_6 = 0;
  *VAR_7 = VAR_0;
 }
 return 0;
}
