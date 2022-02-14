
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int vm_offset_t ;
typedef scalar_t__ uint32_t ;
typedef int boolean_t ;
typedef int addr64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

boolean_t FUNC_3(
 vm_offset_t VAR_4, vm_size_t VAR_5)
{
 addr64_t VAR_6;
 uint32_t VAR_7;

 while (VAR_5 > 0) {
  if (!(VAR_6 = FUNC_0(VAR_4)))
   return VAR_0;
  if (!FUNC_1(FUNC_2(VAR_6)))
   return VAR_0;
  VAR_7 = (uint32_t)(VAR_2 - (VAR_6 & VAR_1));
  if (VAR_7 > VAR_5)
   VAR_7 = (uint32_t)VAR_5;

  VAR_4 += VAR_7;
  VAR_5 -= VAR_7;
 }

 return VAR_3;
}
