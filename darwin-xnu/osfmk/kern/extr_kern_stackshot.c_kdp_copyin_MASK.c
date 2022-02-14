
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int vm_map_t ;
typedef size_t uint64_t ;
typedef size_t uint32_t ;
typedef int boolean_t ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,size_t) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (size_t,size_t,size_t) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t FUNC_2 (int ,size_t,int,size_t*) ;
 size_t FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (char*,void const*,size_t) ;

boolean_t
FUNC_6(vm_map_t VAR_6, uint64_t VAR_7, void *VAR_8, size_t VAR_9, boolean_t VAR_10, uint32_t *VAR_11)
{
 size_t VAR_12 = VAR_9;
 char *VAR_13 = VAR_8;
 while (VAR_12) {
  uint64_t VAR_14 = FUNC_2(VAR_6, VAR_7, VAR_10, VAR_11);
  uint64_t VAR_15 = FUNC_3((vm_offset_t)VAR_13);
  uint64_t VAR_16 = VAR_2 - (VAR_14 & VAR_1);
  uint64_t VAR_17 = VAR_2 - (VAR_15 & VAR_1);
  size_t VAR_18 = (uint32_t) FUNC_0(VAR_16, VAR_17);
  VAR_18 = FUNC_0(VAR_18, VAR_12);

  if (VAR_14 && VAR_15) {
    FUNC_1(VAR_14, VAR_15, VAR_18);
  } else {
   break;
  }

  VAR_7 += VAR_18;
  VAR_13 += VAR_18;
  VAR_12 -= VAR_18;
 }

 return (VAR_12 == 0);
}
