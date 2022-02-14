
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uint32_t ;
struct fat_header {int nfat_arch; int magic; } ;
struct fat_arch {int cpusubtype; int cputype; int size; int offset; } ;
typedef int load_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;

load_return_t
FUNC_1(vm_offset_t VAR_5, vm_size_t VAR_6)
{
 uint32_t VAR_7, VAR_8;
 uint32_t VAR_9, VAR_10, VAR_11;
 uint32_t VAR_12;

 struct fat_arch *VAR_13;
 struct fat_header *VAR_14;

 if (sizeof(struct fat_header) > VAR_6) {
  return (VAR_2);
 }

 VAR_14 = (struct fat_header *)VAR_5;
 VAR_7 = FUNC_0(VAR_14->magic);
 VAR_8 = FUNC_0(VAR_14->nfat_arch);

 if (VAR_7 != VAR_0) {

  return (VAR_2);
 }

 VAR_9 = (VAR_6 - sizeof(struct fat_header)) / sizeof(struct fat_arch);
 if (VAR_8 > VAR_9) {

  return (VAR_1);
 }


 VAR_12 = sizeof(struct fat_header) + VAR_8 * sizeof(struct fat_arch);
 VAR_13 = (struct fat_arch *)(VAR_5 + sizeof(struct fat_header));

 for (VAR_10=0; VAR_10 < VAR_8; VAR_10++) {
  uint32_t VAR_15 = FUNC_0(VAR_13[VAR_10].offset);
  uint32_t VAR_16 = FUNC_0(VAR_13[VAR_10].size);
  uint32_t VAR_17 = FUNC_0(VAR_13[VAR_10].cputype);
  uint32_t VAR_18 = FUNC_0(VAR_13[VAR_10].cpusubtype);

  if (VAR_15 < VAR_12) {

   return (VAR_1);
  }

  if ((VAR_4 - VAR_16) < VAR_15) {

   return (VAR_1);
  }
  uint32_t VAR_19 = VAR_15 + VAR_16;

  for (VAR_11=VAR_10+1; VAR_11 < VAR_8; VAR_11++) {
   uint32_t VAR_20 = FUNC_0(VAR_13[VAR_11].offset);
   uint32_t VAR_21 = FUNC_0(VAR_13[VAR_11].size);
   uint32_t VAR_22 = FUNC_0(VAR_13[VAR_11].cputype);
   uint32_t VAR_23 = FUNC_0(VAR_13[VAR_11].cpusubtype);

   if ((VAR_17 == VAR_22) && (VAR_18 == VAR_23)) {

    return (VAR_1);
   }

   if ((VAR_4 - VAR_21) < VAR_20) {

    return (VAR_1);
   }
   uint32_t VAR_24 = VAR_20 + VAR_21;

   if (VAR_15 <= VAR_20) {
    if (VAR_19 <= VAR_20) {

    } else {

     return (VAR_1);
    }
   } else {
    if (VAR_15 >= VAR_24) {

    } else {

     return (VAR_1);
    }
   }
  }
 }

 return (VAR_3);
}
