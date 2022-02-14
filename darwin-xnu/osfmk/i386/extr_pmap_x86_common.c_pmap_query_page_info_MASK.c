
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_map_offset_t ;
typedef int pt_entry_t ;
typedef int ppnum_t ;
typedef scalar_t__ pmap_t ;
typedef scalar_t__ pmap_paddr_t ;
typedef int pd_entry_t ;
typedef int kern_return_t ;
typedef int boolean_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_10 ;
 int FUNC_6 (int ) ;
 int* VAR_11 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_12 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 () ;
 int* FUNC_11 (scalar_t__,int ) ;
 int* FUNC_12 (scalar_t__,int ) ;
 scalar_t__ FUNC_13 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_14 (int) ;

kern_return_t
FUNC_15(
 pmap_t VAR_13,
 vm_map_offset_t VAR_14,
 int *VAR_15)
{
 int VAR_16;
 boolean_t VAR_17;
 pmap_paddr_t VAR_18;
 ppnum_t VAR_19;
 pd_entry_t *VAR_20;
 pt_entry_t *VAR_21;

 FUNC_10();
 if (VAR_13 == VAR_2 || VAR_13 == VAR_12) {
  *VAR_15 = 0;
  return VAR_0;
 }

 VAR_16 = 0;
 VAR_17 = FUNC_8(VAR_13);

 FUNC_3(VAR_13);

 VAR_20 = FUNC_11(VAR_13, VAR_14);
 if (!VAR_20 ||
     !(*VAR_20 & FUNC_6(VAR_17)) ||
     (*VAR_20 & VAR_10)) {
  goto done;
 }

 VAR_21 = FUNC_12(VAR_13, VAR_14);
 if (VAR_21 == VAR_11) {
  goto done;
 }

 VAR_18 = FUNC_14(*VAR_21);
 if (VAR_18 == 0) {
  if (FUNC_5(*VAR_21)) {
   VAR_16 |= VAR_4;
   if (*VAR_21 & VAR_9) {
    VAR_16 |= VAR_5;
   }
  }
 } else {
  VAR_16 |= VAR_7;
  VAR_19 = FUNC_9(VAR_18);
  if (!FUNC_1(VAR_19)) {
  } else if (FUNC_13(VAR_13, VAR_14, VAR_19)) {
   FUNC_7(FUNC_0(VAR_19));
   VAR_16 |= VAR_6;
   VAR_16 |= VAR_3;
  } else if (FUNC_2(VAR_19)) {
   VAR_16 |= VAR_8;
  } else if (FUNC_0(VAR_19)) {
   VAR_16 |= VAR_6;
  }
 }

done:
 FUNC_4(VAR_13);
 *VAR_15 = VAR_16;
 return VAR_1;
}
