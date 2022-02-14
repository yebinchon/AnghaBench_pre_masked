
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


typedef int vm_page_t ;
typedef int vm_object_offset_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef scalar_t__ uint64_t ;
typedef int ppnum_t ;
typedef TYPE_1__* pmap_t ;
typedef int pmap_paddr_t ;
typedef int pdpt_entry_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_14__ {int pm_obj_pdpt; } ;


 int FUNC_0 (char*,TYPE_1__*,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int VAR_4 ;
 int * VAR_5 ;
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
 int FUNC_12 (int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,TYPE_1__*,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_17 (TYPE_1__*,scalar_t__) ;
 int * FUNC_18 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_19 (TYPE_1__*,scalar_t__,unsigned int) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 () ;
 int FUNC_25 (int ,int ,int,int ) ;
 int FUNC_26 () ;
 scalar_t__ FUNC_27 (int ,int) ;
 int FUNC_28 () ;
 int FUNC_29 (int ,int ,int ) ;

kern_return_t
FUNC_30(pmap_t VAR_13, vm_map_offset_t VAR_14, unsigned int VAR_15)
{
 vm_page_t VAR_16;
 pmap_paddr_t VAR_17;
 uint64_t VAR_18;
 ppnum_t VAR_19;
 pdpt_entry_t *VAR_20;
 boolean_t VAR_21 = FUNC_13(VAR_13);

 FUNC_0("pmap_expand_pdpt(%p,%p)\n", VAR_13, (void *)VAR_14);

 while ((VAR_20 = FUNC_18(VAR_13, VAR_14)) == VAR_5) {
  kern_return_t VAR_22 = FUNC_19(VAR_13, VAR_14, VAR_15);
  if (VAR_22 != VAR_3)
   return VAR_22;
 }




 while ((VAR_16 = FUNC_24()) == VAR_10) {
  if (VAR_15 & VAR_7)
   return VAR_2;
  FUNC_11();
 }





 VAR_19 = FUNC_10(VAR_16);
 VAR_17 = FUNC_12(VAR_19);
 VAR_18 = FUNC_16(VAR_13, VAR_14);




 FUNC_21(VAR_19);

 FUNC_26();
 FUNC_29(VAR_16, VAR_9, VAR_8);
 FUNC_28();

 FUNC_1(1, &VAR_12);
 FUNC_2(1, &VAR_11);
 FUNC_5(VAR_13, VAR_4);


 FUNC_22(VAR_13->pm_obj_pdpt);

 FUNC_3(VAR_13);



 if (FUNC_17(VAR_13, VAR_14) != VAR_6) {
  FUNC_4(VAR_13);
  FUNC_23(VAR_13->pm_obj_pdpt);

  FUNC_9(VAR_16);

  FUNC_1(-1, &VAR_12);
  FUNC_6(VAR_13, VAR_4);
  return VAR_3;
 }







 FUNC_25(VAR_16, VAR_13->pm_obj_pdpt, (vm_object_offset_t)VAR_18 * VAR_4, VAR_9);
 FUNC_23(VAR_13->pm_obj_pdpt);




 VAR_20 = FUNC_18(VAR_13, VAR_14);

 FUNC_20(VAR_20, FUNC_14(VAR_17)
    | FUNC_7(VAR_21)
    | (VAR_21 ? VAR_0 : VAR_1)
    | FUNC_8(VAR_21));

 FUNC_4(VAR_13);

 return VAR_3;

}
