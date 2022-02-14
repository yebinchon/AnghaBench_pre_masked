
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,char const*,...) ;

__attribute__((used)) static boolean_t FUNC_2(
 vm_offset_t VAR_2, vm_size_t VAR_3, const char * VAR_4)
{
 if (VAR_2) {
  if (FUNC_0(VAR_2, VAR_3)) {
   return VAR_1;
  } else {
   FUNC_1("Invalid %s pointer: %p size: %d\n",
    VAR_4, (void *)VAR_2, (int)VAR_3);
   return VAR_0;
  }
 } else {
  FUNC_1("NULL %s pointer\n", VAR_4);
  return VAR_0;
 }
}
