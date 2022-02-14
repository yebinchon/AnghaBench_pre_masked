
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
typedef int vm_map_offset_t ;
typedef int pt_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,scalar_t__,unsigned int) ;
 int* FUNC_4 (int ,int) ;
 int FUNC_5 (int*,int) ;
 scalar_t__ FUNC_6 (int) ;

void
FUNC_7(
 vm_offset_t VAR_13,
 vm_map_offset_t VAR_14,
 vm_map_offset_t VAR_15,
 vm_prot_t VAR_16,
 unsigned int VAR_17)
{
 pt_entry_t VAR_18, VAR_19;
 pt_entry_t *VAR_20, *VAR_21;

 VAR_18 = VAR_2 | VAR_0 | VAR_4 | VAR_3;
 if ((VAR_16 & VAR_10) == 0)
  VAR_18 |= VAR_1;

 if (VAR_16 & VAR_11)
  VAR_18 |= VAR_5;
 FUNC_0(((VAR_14 | VAR_15) & VAR_6) == 0);
 while (VAR_14 < VAR_15) {
  VAR_20 = FUNC_4(VAR_12, (vm_map_offset_t)VAR_13);
  if (VAR_20 == VAR_9) {
   if (VAR_17 & VAR_8) {
    FUNC_3(VAR_12, VAR_13, VAR_8);
    VAR_20 = FUNC_4(VAR_12, (vm_map_offset_t)VAR_13);
   } else {
    FUNC_2("pmap_alias: Invalid alias address");
   }
  }

  FUNC_0(FUNC_6(*VAR_20) == 0);

  VAR_21 = FUNC_4(VAR_12, VAR_14);
  FUNC_0(VAR_21 != VAR_9 && (FUNC_6(*VAR_21) != 0));
  VAR_19 = FUNC_1(FUNC_6(*VAR_21)) | VAR_18;
  FUNC_5(VAR_20, VAR_19);

  VAR_13 += VAR_7;
  VAR_14 += VAR_7;
 }
}
