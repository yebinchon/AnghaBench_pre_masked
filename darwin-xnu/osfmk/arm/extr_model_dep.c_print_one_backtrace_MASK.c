
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint32_t ;
typedef scalar_t__ ppnum_t ;
typedef int pmap_t ;
typedef scalar_t__ boolean_t ;
typedef int addr64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int,...) ;
 scalar_t__ FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(pmap_t VAR_10, vm_offset_t VAR_11, const char *VAR_12,
 boolean_t VAR_13)
{
 int VAR_14 = 0;
 addr64_t VAR_15;
 addr64_t VAR_16;
 addr64_t VAR_17;
 ppnum_t VAR_18;
 boolean_t VAR_19;

 VAR_16 = VAR_11;
 VAR_17 = 0;
 VAR_18 = (ppnum_t)((void*)0);

 if (VAR_16 >= VAR_9)
  VAR_19 = VAR_7;
 else
  VAR_19 = VAR_0;

 do {
  if ((VAR_16 == 0) || ((VAR_16 & VAR_1) != 0))
   break;
  if (VAR_19 && ((VAR_16 < VAR_9) || (VAR_16 > VAR_8)))
   break;
  if ((!VAR_19) && (VAR_16 >=VAR_9))
   break;






  if ((((VAR_16 + VAR_2) ^ VAR_17) >> VAR_6) != 0x0U) {
   VAR_18 = FUNC_3(VAR_10, VAR_16 + VAR_2);
   VAR_17 = VAR_16 + (VAR_13 ? VAR_3 : VAR_2);
  }
  if (VAR_18 != (ppnum_t)((void*)0)) {
   if (VAR_13) {
    VAR_15 = FUNC_0(((((vm_offset_t)VAR_18) << VAR_6)) | ((VAR_16 + VAR_3) & VAR_5));
   } else {
    VAR_15 = FUNC_1(((((vm_offset_t)VAR_18) << VAR_6)) | ((VAR_16 + VAR_2) & VAR_5));
   }
  } else {
   if (VAR_13) {
    FUNC_2("%s\t  Could not read LR from frame at 0x%016llx\n", VAR_12, VAR_16 + VAR_3);
   } else {
    FUNC_2("%s\t  Could not read LR from frame at 0x%08x\n", VAR_12, (uint32_t)(VAR_16 + VAR_2));
   }
   break;
  }
  if (((VAR_16 ^ VAR_17) >> VAR_6) != 0x0U) {
   VAR_18 = FUNC_3(VAR_10, VAR_16);
   VAR_17 = VAR_16;
  }
  if (VAR_18 != (ppnum_t)((void*)0)) {
   if (VAR_13) {
    VAR_16 = FUNC_0(((((vm_offset_t)VAR_18) << VAR_6)) | (VAR_16 & VAR_5));
   } else {
    VAR_16 = FUNC_1(((((vm_offset_t)VAR_18) << VAR_6)) | (VAR_16 & VAR_5));
   }
  } else {
   if (VAR_13) {
    FUNC_2("%s\t  Could not read FP from frame at 0x%016llx\n", VAR_12, VAR_16);
   } else {
    FUNC_2("%s\t  Could not read FP from frame at 0x%08x\n", VAR_12, (uint32_t)VAR_16);
   }
   break;
  }

  if (VAR_15) {
   if (VAR_13) {
    FUNC_2("%s\t  lr: 0x%016llx  fp: 0x%016llx\n", VAR_12, VAR_15, VAR_16);
   } else {
    FUNC_2("%s\t  lr: 0x%08x  fp: 0x%08x\n", VAR_12, (uint32_t)VAR_15, (uint32_t)VAR_16);
   }
  }
 } while ((++VAR_14 < VAR_4) && (VAR_16 != VAR_11));
}
