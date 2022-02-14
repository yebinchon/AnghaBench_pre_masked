
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_page_t ;
typedef TYPE_1__* vm_object_t ;
typedef TYPE_2__* vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_3__* vm_map_entry_t ;
typedef scalar_t__ vm_fault_return_t ;
typedef scalar_t__ upl_size_t ;
struct vm_object_fault_info {int user_tag; scalar_t__ cluster_size; int stealth; int no_cache; scalar_t__ hi_offset; scalar_t__ lo_offset; int pmap_options; int behavior; int interruptible; } ;
typedef scalar_t__ pmap_t ;
typedef int boolean_t ;
struct TYPE_20__ {scalar_t__ vme_end; scalar_t__ vme_start; scalar_t__ zero_wired_pages; int no_cache; int use_pmap; scalar_t__ is_sub_map; scalar_t__ iokit_acct; int behavior; } ;
struct TYPE_19__ {int no_zero_fill; } ;
struct TYPE_18__ {int alive; scalar_t__ phys_contiguous; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_1__* FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_10 ;
 TYPE_1__* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_11 ;
 int FUNC_8 (int ,char*,int ,int ,int ,int ,int ) ;
 int VAR_12 ;
 int FUNC_9 (int) ;
 TYPE_1__* VAR_13 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (unsigned int) ;
 int FUNC_17 (TYPE_2__*,scalar_t__,int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_18 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_19 (TYPE_1__*,scalar_t__,int ,int ,scalar_t__,int *,int *,int *,int*,int *,int ,scalar_t__,struct vm_object_fault_info*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (int ,int ) ;

void
FUNC_26(
 vm_map_t VAR_16,
 vm_map_entry_t VAR_17,
 boolean_t VAR_18,
 pmap_t VAR_19,
 vm_map_offset_t VAR_20)
{
 vm_map_offset_t VAR_21;
 vm_map_offset_t VAR_22 = VAR_17->vme_end;
 vm_object_t VAR_23;
 struct vm_object_fault_info VAR_24 = {};
 unsigned int VAR_25;

 VAR_23 = (VAR_17->is_sub_map) ? VAR_9 : FUNC_2(VAR_17);







 if (VAR_23 != VAR_9 && VAR_23->phys_contiguous)
  return;

 VAR_24.interruptible = VAR_3;
 VAR_24.behavior = VAR_17->behavior;
 VAR_24.user_tag = FUNC_1(VAR_17);
 if (VAR_17->iokit_acct ||
     (!VAR_17->is_sub_map && !VAR_17->use_pmap)) {
  VAR_24.pmap_options |= VAR_2;
 }
 VAR_24.lo_offset = FUNC_3(VAR_17);
 VAR_24.hi_offset = (VAR_17->vme_end - VAR_17->vme_start) + FUNC_3(VAR_17);
 VAR_24.no_cache = VAR_17->no_cache;
 VAR_24.stealth = VAR_4;

 VAR_25 = 0;






 for (VAR_21 = VAR_17->vme_start; VAR_21 < VAR_22; VAR_21 += VAR_1) {

  if (VAR_23 == VAR_9) {
   if (VAR_19) {
    FUNC_12(VAR_19,
         VAR_20 + (VAR_21 - VAR_17->vme_start), VAR_0);
   }
   (void) FUNC_17(VAR_16, VAR_21, VAR_11,
     VAR_4, VAR_8, VAR_3, VAR_19, VAR_20);
  } else {
    vm_prot_t VAR_26;
   vm_page_t VAR_27;
   vm_page_t VAR_28;
   vm_object_t VAR_29;
   vm_fault_return_t VAR_30;


   upl_size_t VAR_31;
   if (FUNC_10(VAR_22, VAR_21, &VAR_31)) {
    VAR_31 = 0 - (upl_size_t)VAR_1;
   }
   VAR_24.cluster_size = VAR_31;

   do {
    VAR_26 = VAR_11;

    FUNC_20(VAR_23);
    FUNC_21(VAR_23);
    FUNC_8(VAR_12,
     "vm_fault_unwire -> vm_fault_page\n",
     0,0,0,0,0);
    VAR_27 = VAR_10;
     VAR_30 = FUNC_19(
     VAR_23,
     (FUNC_3(VAR_17) +
      (VAR_21 - VAR_17->vme_start)),
     VAR_11, VAR_4,
     VAR_0,
     &VAR_26, &VAR_27, &VAR_28,
     (int *)0,
     ((void*)0), VAR_16->no_zero_fill,
     VAR_0, &VAR_24);
   } while (VAR_30 == VAR_6);
   if (VAR_30 == VAR_5 && !VAR_23->alive)
    continue;

   if (VAR_30 == VAR_5 &&
       VAR_23 == VAR_13) {






    FUNC_9(VAR_18);
    continue;
   }

   if (VAR_30 != VAR_7)
    FUNC_11("vm_fault_unwire: failure");

   VAR_29 = FUNC_6(VAR_27);

   if (VAR_18) {
    FUNC_9(FUNC_5(VAR_27) !=
           VAR_14);
    FUNC_13(FUNC_5(VAR_27));
    if (FUNC_7(VAR_27)) {
     VAR_25++;
    }
    FUNC_4(VAR_27);
   } else {
    if ((VAR_19) && (FUNC_5(VAR_27) != VAR_15))
     FUNC_12(VAR_19,
         VAR_20 + (VAR_21 - VAR_17->vme_start), VAR_0);


    if (FUNC_7(VAR_27)) {
     FUNC_22();
     FUNC_24(VAR_27, VAR_4);
     FUNC_23();
     VAR_25++;
    }
    if(VAR_17->zero_wired_pages) {
     FUNC_15(FUNC_5(VAR_27));
     VAR_17->zero_wired_pages = VAR_0;
    }

    FUNC_0(VAR_27);
   }
   FUNC_18(VAR_29, VAR_28);
  }
 }







 FUNC_14(VAR_19, VAR_20,
  VAR_20 + (VAR_22 - VAR_17->vme_start), VAR_4);

 if (VAR_13 == VAR_23) {
     FUNC_25(VAR_24.user_tag, -FUNC_16(VAR_25));
 }
}
