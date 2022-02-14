
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_9__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef TYPE_1__* vm_object_t ;
typedef TYPE_2__* vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef TYPE_3__* vm_map_entry_t ;
typedef int uint64_t ;
typedef scalar_t__ kern_return_t ;
typedef int addr64_t ;
struct TYPE_37__ {int pmap; } ;
struct TYPE_36__ {scalar_t__ wired_count; int protection; scalar_t__ inheritance; int max_protection; scalar_t__ vme_start; scalar_t__ vme_end; scalar_t__ is_sub_map; int iokit_acct; void* is_shared; scalar_t__ needs_copy; void* use_pmap; } ;
struct TYPE_35__ {int pmap; scalar_t__ mapped_in_other_pmaps; } ;
struct TYPE_34__ {scalar_t__ copy_strategy; scalar_t__ vo_size; int true_share; scalar_t__ shadowed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 TYPE_1__* FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_3__*,scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 TYPE_9__* FUNC_6 (TYPE_3__*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int ,int ) ;
 int FUNC_13 (int ,scalar_t__,scalar_t__,int) ;
 int FUNC_14 (TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_15 (TYPE_2__*,scalar_t__) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_9__*) ;
 int FUNC_18 (TYPE_9__*) ;
 int FUNC_19 (TYPE_2__*,int ,TYPE_3__*,int ) ;
 int FUNC_20 (TYPE_9__*) ;
 TYPE_1__* FUNC_21 (scalar_t__) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*,int ,scalar_t__,int ,scalar_t__,int) ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_26(
 vm_map_t VAR_10,
 vm_map_entry_t VAR_11,
 vm_map_t VAR_12)
{
 vm_object_t VAR_13;
 vm_map_entry_t VAR_14;
 VAR_13 = FUNC_1(VAR_11);
 if (VAR_11->is_sub_map) {
  FUNC_7(VAR_11->wired_count == 0);

  if(VAR_11->use_pmap) {
   kern_return_t VAR_15;

   VAR_15 = FUNC_12(VAR_12->pmap,
        (FUNC_6(VAR_11))->pmap,
        (addr64_t)VAR_11->vme_start,
        (addr64_t)VAR_11->vme_start,
        (uint64_t)(VAR_11->vme_end - VAR_11->vme_start));
   if(VAR_15)
    FUNC_9("vm_map_fork_share: pmap_nest failed!");
  }

 } else if (VAR_13 == VAR_7) {
  VAR_13 = FUNC_21((vm_map_size_t)(VAR_11->vme_end -
           VAR_11->vme_start));
  FUNC_5(VAR_11, 0);
  FUNC_2(VAR_11, VAR_13);
  VAR_11->use_pmap = VAR_4;

 } else if (VAR_13->copy_strategy !=
     VAR_2) {







  FUNC_7(! VAR_11->needs_copy);
 }
 else if (VAR_11->needs_copy ||
   VAR_13->shadowed ||
   (!VAR_13->true_share &&
    !VAR_11->is_shared &&
    (VAR_13->vo_size >
     (vm_map_size_t)(VAR_11->vme_end -
       VAR_11->vme_start)))) {
  FUNC_3(VAR_11,
      (vm_map_size_t) (VAR_11->vme_end -
         VAR_11->vme_start));







  if (!VAR_11->needs_copy &&
      (VAR_11->protection & VAR_9)) {
          vm_prot_t VAR_16;

   FUNC_7(!FUNC_11(VAR_11->protection));

   VAR_16 = VAR_11->protection & ~VAR_9;

   FUNC_7(!FUNC_11(VAR_16));

   if (FUNC_8(VAR_10, FUNC_0(VAR_11)) && VAR_16)
           VAR_16 |= VAR_8;


   if (VAR_10->mapped_in_other_pmaps) {
    FUNC_23(
     FUNC_1(VAR_11),
     FUNC_4(VAR_11),
     (VAR_11->vme_end -
      VAR_11->vme_start),
     VAR_3,
     VAR_11->vme_start,
     VAR_16);
   } else {
    FUNC_13(VAR_10->pmap,
          VAR_11->vme_start,
          VAR_11->vme_end,
          VAR_16);
   }
  }

  VAR_11->needs_copy = VAR_0;
  VAR_13 = FUNC_1(VAR_11);
 }
 if(VAR_11->is_sub_map) {
  FUNC_17(FUNC_6(VAR_11));
  FUNC_18(FUNC_6(VAR_11));
  FUNC_20(FUNC_6(VAR_11));
 } else {
  FUNC_22(VAR_13);
  FUNC_24(VAR_13);
  if (VAR_13->copy_strategy == VAR_2) {
   VAR_13->copy_strategy = VAR_1;
  }
  FUNC_25(VAR_13);
 }






 VAR_14 = FUNC_15(VAR_12, VAR_0);

 FUNC_14(VAR_14, VAR_11);
 VAR_11->is_shared = VAR_4;
 VAR_14->is_shared = VAR_4;
 FUNC_7(!VAR_14->iokit_acct);






 if (VAR_11->inheritance == VAR_5) {

  VAR_14->protection &= ~VAR_9;
  VAR_14->max_protection &= ~VAR_9;
 }







 FUNC_19(VAR_12, FUNC_16(VAR_12), VAR_14,
    VAR_6);





 if (VAR_11->is_sub_map) {

 } else {
  FUNC_10(VAR_12->pmap, VAR_10->pmap, VAR_14->vme_start,
     VAR_11->vme_end - VAR_11->vme_start,
     VAR_11->vme_start);
 }
}
