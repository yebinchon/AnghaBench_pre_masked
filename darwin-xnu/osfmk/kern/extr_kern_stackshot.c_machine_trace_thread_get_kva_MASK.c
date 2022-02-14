
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int vm_map_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int ,int*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

vm_offset_t
FUNC_5(vm_offset_t VAR_12, vm_map_t VAR_13, uint32_t *VAR_14)
{
 vm_offset_t VAR_15;
 vm_offset_t VAR_16;
 vm_offset_t VAR_17;
 uint32_t VAR_18 = 0;

 VAR_15 = FUNC_1(VAR_12);

 if ((VAR_15 != VAR_9) || VAR_11) {
  VAR_16 = FUNC_3(VAR_13, VAR_12, VAR_10, &VAR_18);
  if (VAR_14) {
   if (VAR_18 & VAR_2) {
    *VAR_14 |= VAR_7;
   }

   if (VAR_18 & VAR_3) {
    *VAR_14 |= VAR_6;
   }

   if (VAR_18 & VAR_1) {
    *VAR_14 |= VAR_5;
   }
  }

  if (VAR_16 == 0) {
   return 0;
  }

  VAR_17 = (vm_offset_t) FUNC_0(VAR_16);





  VAR_9 = VAR_15;
  VAR_8 = (VAR_17 & ~VAR_4);
  VAR_11 = VAR_0;
 } else {

  VAR_17 = VAR_8 + (VAR_12 & VAR_4);
 }




 return VAR_17;
}
