
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_offset_t ;
typedef scalar_t__ vm_map_address_t ;
typedef scalar_t__ pv_entry_t ;
typedef scalar_t__ pt_entry_t ;
typedef int ppnum_t ;
typedef TYPE_1__* pmap_t ;
typedef int pmap_paddr_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {scalar_t__ min; scalar_t__ max; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__* VAR_11 ;
 scalar_t__* FUNC_2 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__* VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (scalar_t__*,scalar_t__) ;
 int FUNC_4 (scalar_t__*,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__,int ,TYPE_1__*) ;
 TYPE_1__* VAR_19 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ) ;
 scalar_t__** FUNC_11 (int) ;
 int FUNC_12 (char*,scalar_t__*,int ) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,int ) ;
 TYPE_1__* FUNC_15 (scalar_t__*) ;
 scalar_t__ FUNC_16 (scalar_t__*) ;
 int FUNC_17 (int ) ;
 scalar_t__* FUNC_18 (scalar_t__*) ;
 int FUNC_19 (scalar_t__*) ;
 scalar_t__* FUNC_20 (scalar_t__**) ;
 scalar_t__* FUNC_21 (scalar_t__**) ;
 scalar_t__ FUNC_22 (scalar_t__**,int ) ;
 int FUNC_23 () ;
 int VAR_20 ;

boolean_t
FUNC_24(
 ppnum_t VAR_21,
 vm_prot_t VAR_22)
{
 pmap_paddr_t VAR_23 = FUNC_17(VAR_21);
 pv_entry_t *VAR_24;
 pt_entry_t *VAR_25;
 int VAR_26;
 boolean_t VAR_27;
 boolean_t VAR_28 = VAR_6;
 pv_entry_t **VAR_29;

 FUNC_6(VAR_21 != VAR_20);

 if (!FUNC_10(VAR_23)) {
  return VAR_6;
 }

 VAR_27 = VAR_6;
 VAR_26 = (int)FUNC_8(VAR_23);
 FUNC_1(VAR_26);
 VAR_29 = FUNC_11(VAR_26);

 VAR_25 = VAR_11;
 VAR_24 = VAR_15;
 if (FUNC_22(VAR_29, VAR_13)) {
  VAR_25 = FUNC_21(VAR_29);
 } else if (FUNC_22(VAR_29, VAR_14)) {
  VAR_24 = FUNC_20(VAR_29);
 }

 while ((VAR_24 != VAR_15) || (VAR_25 != VAR_11)) {
  vm_map_address_t VAR_30;
  pt_entry_t VAR_31;
  pt_entry_t VAR_32;
  pmap_t VAR_33;

  if (VAR_24 != VAR_15)
   VAR_25 = FUNC_18(VAR_24);

  if (VAR_25 == VAR_11) {
   FUNC_12("pte_p is NULL: pve_p=%p ppnum=0x%x\n", VAR_24, VAR_21);
  }





  if (*VAR_25 == VAR_4) {
   FUNC_12("pte is NULL: pte_p=%p ppnum=0x%x\n", VAR_25, VAR_21);
  }

  VAR_33 = FUNC_15(VAR_25);
  VAR_30 = FUNC_16(VAR_25);

  FUNC_6(VAR_30 >= VAR_33->min && VAR_30 < VAR_33->max);

  VAR_31 = *VAR_25;
  VAR_32 = VAR_31;

  if ((VAR_22 & VAR_18) && (FUNC_13(VAR_31))) {
   {
    if (VAR_33 == VAR_19)
     VAR_32 = ((VAR_31 & ~VAR_3) | FUNC_0(VAR_0));
    else
     VAR_32 = ((VAR_31 & ~VAR_3) | FUNC_0(VAR_1));
   }

   VAR_32 |= VAR_2;

   FUNC_14(VAR_32, 0);
   FUNC_9(VAR_23, VAR_10 | VAR_9);

  } else if ((VAR_22 & VAR_17) && ((VAR_31 & VAR_2) != VAR_2)) {
   VAR_32 = VAR_31 | VAR_2;

   {
    FUNC_9(VAR_23, VAR_10);
   }
  }


  if (VAR_31 != VAR_32) {
   if (VAR_31 != VAR_5) {
    FUNC_4(VAR_25, VAR_32);
    FUNC_7(VAR_30, VAR_8, VAR_33);
    VAR_28 = VAR_16;
   } else {
    FUNC_3(VAR_25, VAR_32);
    FUNC_5(VAR_7);
   }
   VAR_27 = VAR_16;
  }




  VAR_25 = VAR_11;
  if (VAR_24 != VAR_15)
   VAR_24 = FUNC_2(FUNC_19(VAR_24));
 }
 if (VAR_28)
  FUNC_23();
 return VAR_27;
}
