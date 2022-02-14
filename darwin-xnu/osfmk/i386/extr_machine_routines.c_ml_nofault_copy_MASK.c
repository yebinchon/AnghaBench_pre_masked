
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef int vm_offset_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ addr64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

vm_size_t FUNC_4(
 vm_offset_t VAR_2, vm_offset_t VAR_3, vm_size_t VAR_4)
{
 addr64_t VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8 = 0;

 while (VAR_4 > 0) {
  if (!(VAR_6 = FUNC_2(VAR_2)))
   break;
  if (!(VAR_5 = FUNC_2(VAR_3)))
   break;
  if (!FUNC_3(FUNC_1(VAR_5)) || !FUNC_3(FUNC_1(VAR_6)))
   break;
  VAR_7 = (uint32_t)(VAR_1 - (VAR_6 & VAR_0));
  if (VAR_7 > (VAR_1 - (VAR_5 & VAR_0)))
   VAR_7 = (uint32_t)(VAR_1 - (VAR_5 & VAR_0));
  if (VAR_7 > VAR_4)
   VAR_7 = (uint32_t)VAR_4;

  FUNC_0(VAR_6, VAR_5, VAR_7);

  VAR_8 += VAR_7;
  VAR_2 += VAR_7;
  VAR_3 += VAR_7;
  VAR_4 -= VAR_7;
 }

 return VAR_8;
}
