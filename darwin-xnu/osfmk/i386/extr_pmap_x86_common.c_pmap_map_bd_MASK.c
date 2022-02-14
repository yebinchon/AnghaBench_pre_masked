
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef int pt_entry_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int* VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned int VAR_16 ;
 int FUNC_1 () ;
 int VAR_17 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 int* FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;

vm_offset_t
FUNC_8(
 vm_offset_t VAR_18,
 vm_map_offset_t VAR_19,
 vm_map_offset_t VAR_20,
 vm_prot_t VAR_21,
 unsigned int VAR_22)
{
 pt_entry_t VAR_23;
 pt_entry_t *VAR_24;

 vm_offset_t VAR_25 = VAR_18;
 boolean_t VAR_26 = VAR_0;

 VAR_23 = FUNC_2(VAR_19)
  | VAR_5
  | VAR_1
  | VAR_7
  | VAR_6;

 if ((VAR_22 & (VAR_13 | VAR_16)) == VAR_13) {
  VAR_23 |= VAR_2;
  if (!(VAR_22 & (VAR_12)))
   VAR_23 |= VAR_4;
 }

 if ((VAR_21 & VAR_14) == 0)
  VAR_23 |= VAR_3;

 if (VAR_21 & VAR_15)
  VAR_23 |= VAR_8;

 while (VAR_19 < VAR_20) {
  VAR_24 = FUNC_4(VAR_17, (vm_map_offset_t)VAR_18);
  if (VAR_24 == VAR_10) {
   FUNC_3("pmap_map_bd: Invalid kernel address");
  }
  if (FUNC_7(*VAR_24)) {
   VAR_26 = VAR_11;
  }
  FUNC_5(VAR_24, VAR_23);
  FUNC_6(VAR_23);
  VAR_18 += VAR_9;
  VAR_19 += VAR_9;
 }
 if (VAR_26) {
  FUNC_1();
  FUNC_0(VAR_17, VAR_25, VAR_25 + VAR_20 - VAR_19);
 }
 return(VAR_18);
}
