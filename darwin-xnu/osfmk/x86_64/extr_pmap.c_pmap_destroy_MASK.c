
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_2__* pmap_t ;
struct TYPE_19__ {TYPE_1__* map; } ;
struct TYPE_18__ {scalar_t__ resident_page_count; } ;
struct TYPE_17__ {int ref_count; int ledger; TYPE_4__* pm_obj; TYPE_4__* pm_obj_pdpt; TYPE_4__* pm_obj_pml4; struct TYPE_17__* pm_upml4; struct TYPE_17__* pm_pml4; } ;
struct TYPE_16__ {TYPE_2__* pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* VAR_3 ;
 int FUNC_3 (int,...) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int,int) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_9__* FUNC_8 () ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_9 (int ) ;
 int VAR_8 ;
 int FUNC_10 (int) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (TYPE_4__*) ;
 int FUNC_14 (int ,TYPE_2__*) ;

void
FUNC_15(pmap_t VAR_12)
{
 int VAR_13;

 if (VAR_12 == VAR_3)
  return;

 FUNC_3(FUNC_1(VAR_4) | VAR_1,
            FUNC_7(VAR_12));

 FUNC_2(VAR_12);

 VAR_13 = --VAR_12->ref_count;

 FUNC_10((FUNC_8() && (FUNC_8()->map)) ? (FUNC_8()->map->pmap != VAR_12) : VAR_5);

 if (VAR_13 == 0) {






  FUNC_5(VAR_12, 0x0ULL, 0xFFFFFFFFFFFFF000ULL);
  if (VAR_9)
   FUNC_12(VAR_12);
 }

 FUNC_4(VAR_12);

 if (VAR_13 != 0) {
  FUNC_3(FUNC_1(VAR_4) | VAR_0);
  FUNC_10(VAR_12 == VAR_7);
         return;
 }





 int VAR_14 = 0;

 FUNC_14(VAR_8, VAR_12->pm_pml4);
 FUNC_14(VAR_10, VAR_12->pm_upml4);

 VAR_14 += VAR_12->pm_obj_pml4->resident_page_count;
 FUNC_13(VAR_12->pm_obj_pml4);

 VAR_14 += VAR_12->pm_obj_pdpt->resident_page_count;
 FUNC_13(VAR_12->pm_obj_pdpt);

 VAR_14 += VAR_12->pm_obj->resident_page_count;
 FUNC_13(VAR_12->pm_obj);

 FUNC_0(-VAR_14, &VAR_6);
 FUNC_6(VAR_12, VAR_14 * VAR_2);

 FUNC_11(VAR_12);
 FUNC_9(VAR_12->ledger);
 FUNC_14(VAR_11, VAR_12);

 FUNC_3(FUNC_1(VAR_4) | VAR_0);
}
