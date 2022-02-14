
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uptr ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_2(uptr VAR_1)
{
 vm_offset_t VAR_2 = FUNC_1(FUNC_0());

 if (VAR_1 >= VAR_2 && VAR_1 < (VAR_2 + VAR_0)) {
  return 1;
 } else {
  return 0;
 }
}
