
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef int vm_page_t ;
typedef int vm_object_offset_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef scalar_t__ uint64_t ;
typedef int ppnum_t ;
typedef int pml4_entry_t ;
typedef TYPE_1__* pmap_t ;
typedef int pmap_paddr_t ;
typedef int kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_15__ {int pm_obj_pml4; } ;


 int FUNC_0 (char*,TYPE_1__*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_10 ;
 int FUNC_11 () ;
 int VAR_11 ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 TYPE_1__* VAR_13 ;
 int FUNC_15 (int ) ;
 int FUNC_16 (char*,TYPE_1__*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (TYPE_1__*,scalar_t__) ;
 int * FUNC_18 (TYPE_1__*,scalar_t__) ;
 int * FUNC_19 (TYPE_1__*,scalar_t__) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (TYPE_1__*,scalar_t__) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 () ;
 int FUNC_26 (int ,int ,int,int ) ;
 int FUNC_27 () ;
 scalar_t__ FUNC_28 (int ,int) ;
 int FUNC_29 () ;
 int FUNC_30 (int ,int ,int ) ;

kern_return_t
FUNC_31(
 pmap_t VAR_14,
 vm_map_offset_t VAR_15,
 unsigned int VAR_16)
{
 vm_page_t VAR_17;
 pmap_paddr_t VAR_18;
 uint64_t VAR_19;
 ppnum_t VAR_20;
 pml4_entry_t *VAR_21;
 boolean_t VAR_22 = FUNC_14(VAR_14);

 FUNC_0("pmap_expand_pml4(%p,%p)\n", VAR_14, (void *)VAR_15);




 FUNC_12(VAR_14 != VAR_13 || (VAR_15 == VAR_2));



 while ((VAR_17 = FUNC_25()) == VAR_10) {
  if (VAR_16 & VAR_7)
   return VAR_3;
  FUNC_11();
 }




 VAR_20 = FUNC_10(VAR_17);
 VAR_18 = FUNC_13(VAR_20);
 VAR_19 = FUNC_22(VAR_14, VAR_15);




 FUNC_21(VAR_20);

 FUNC_27();
 FUNC_30(VAR_17, VAR_9, VAR_8);
 FUNC_29();

 FUNC_1(1, &VAR_12);
 FUNC_2(1, &VAR_11);
 FUNC_5(VAR_14, VAR_5);


 FUNC_23(VAR_14->pm_obj_pml4);

 FUNC_3(VAR_14);



 if (FUNC_17(VAR_14, VAR_15) != VAR_6) {
         FUNC_4(VAR_14);
  FUNC_24(VAR_14->pm_obj_pml4);

  FUNC_9(VAR_17);

  FUNC_1(-1, &VAR_12);
  FUNC_6(VAR_14, VAR_5);
  return VAR_4;
 }







 FUNC_26(VAR_17, VAR_14->pm_obj_pml4, (vm_object_offset_t)VAR_19 * VAR_5, VAR_9);
 FUNC_24(VAR_14->pm_obj_pml4);




 VAR_21 = FUNC_18(VAR_14, VAR_15);

 FUNC_20(VAR_21, FUNC_15(VAR_18)
    | FUNC_7(VAR_22)
    | (VAR_22 ? VAR_0 : VAR_1)
    | FUNC_8(VAR_22));
 pml4_entry_t *VAR_23;

 VAR_23 = FUNC_19(VAR_14, VAR_15);
 FUNC_20(VAR_23, FUNC_15(VAR_18)
    | FUNC_7(VAR_22)
    | (VAR_22 ? VAR_0 : VAR_1)
    | FUNC_8(VAR_22));

 FUNC_4(VAR_14);

 return VAR_4;
}
