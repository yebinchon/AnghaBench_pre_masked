
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_14__ ;


typedef TYPE_2__* vm_page_t ;
typedef int vm_page_packed_t ;
struct TYPE_33__ {int cur_count; int page_list; } ;
typedef TYPE_3__ vm_page_bucket_t ;
typedef TYPE_4__* vm_object_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef TYPE_5__* task_t ;
typedef int lck_spin_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_36__ {scalar_t__ reusable_count; int reused_remove; } ;
struct TYPE_35__ {int ledger; } ;
struct TYPE_31__ {scalar_t__ prev; scalar_t__ next; } ;
struct TYPE_34__ {scalar_t__ resident_page_count; scalar_t__ wired_page_count; scalar_t__ reusable_page_count; scalar_t__ purgable; scalar_t__ set_cache_attr; int vo_ledger_tag; scalar_t__ all_reusable; int wire_tag; TYPE_1__ cached_list; scalar_t__ internal; } ;
struct TYPE_32__ {int vmp_tabled; scalar_t__ vmp_wire_count; scalar_t__ vmp_offset; scalar_t__ vmp_object; void* vmp_reusable; scalar_t__ vmp_xpmapped; int vmp_next_m; void* vmp_hashed; int vmp_laundry; int vmp_cleaning; } ;
struct TYPE_30__ {int phys_footprint; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int,scalar_t__*) ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_5__* FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_4__* FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_13 (int ,char*,TYPE_4__*,scalar_t__,TYPE_2__*,int ,int ) ;
 int VAR_10 ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int,int ) ;
 int FUNC_18 (int ,int ) ;
 TYPE_14__ VAR_11 ;
 int FUNC_19 (TYPE_4__*) ;
 int FUNC_20 (TYPE_4__*,int*,int*,int*,int*,int*) ;
 int FUNC_21 (TYPE_4__*) ;
 int * VAR_12 ;
 TYPE_3__* VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_22 (TYPE_4__*,scalar_t__) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_23 (TYPE_2__*) ;
 TYPE_6__ VAR_19 ;
 scalar_t__ VAR_20 ;

void
FUNC_24(
 vm_page_t VAR_21,
 boolean_t VAR_22)
{
 vm_page_bucket_t *VAR_23;
 vm_page_t VAR_24;
 lck_spin_t *VAR_25;
 int VAR_26;
 task_t VAR_27;
 vm_object_t VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;

 VAR_28 = FUNC_8(VAR_21);

        FUNC_13(VAR_10,
                "vm_page_remove, object 0x%X offset 0x%X page 0x%X\n",
                VAR_28, VAR_21->vmp_offset,
  VAR_21, 0,0);

 FUNC_21(VAR_28);
 FUNC_14(VAR_21->vmp_tabled);
 FUNC_14(!VAR_21->vmp_cleaning);
 FUNC_14(!VAR_21->vmp_laundry);

 if (FUNC_10(VAR_21)) {
  FUNC_0(&VAR_18, VAR_2);
 }







 if (VAR_22 == VAR_5) {



  VAR_26 = FUNC_22(VAR_28, VAR_21->vmp_offset);
  VAR_23 = &VAR_13[VAR_26];
  VAR_25 = &VAR_12[VAR_26 / VAR_0];

  FUNC_15(VAR_25);

  if ((VAR_24 = (vm_page_t)(FUNC_11(VAR_23->page_list))) == VAR_21) {


   VAR_23->page_list = VAR_21->vmp_next_m;
  } else {
   vm_page_packed_t *VAR_34;

   for (VAR_34 = &VAR_24->vmp_next_m;
        (VAR_24 = (vm_page_t)(FUNC_11(*VAR_34))) != VAR_21;
        VAR_34 = &VAR_24->vmp_next_m)
    continue;
   *VAR_34 = VAR_24->vmp_next_m;
  }



  VAR_21->vmp_hashed = VAR_1;
  VAR_24->vmp_next_m = FUNC_9(((void*)0));
  FUNC_16(VAR_25);
 }




 FUNC_23(VAR_21);






 FUNC_14(VAR_28->resident_page_count > 0);
 VAR_28->resident_page_count--;

 if (VAR_28->internal) {




  FUNC_1(-1, &VAR_15);
 } else {
  FUNC_14(VAR_14);
  FUNC_1(-1, &VAR_14);

  if (VAR_21->vmp_xpmapped) {
   FUNC_14(VAR_20);
   FUNC_1(-1, &VAR_20);
  }
 }
 if (!VAR_28->internal &&
     VAR_28->cached_list.next &&
     VAR_28->cached_list.prev) {
  if (VAR_28->resident_page_count == 0)
   FUNC_19(VAR_28);
 }

 if (FUNC_12(VAR_21)) {
  FUNC_14(VAR_21->vmp_wire_count > 0);
  FUNC_5(VAR_28);
  FUNC_3(VAR_28, VAR_21);
  FUNC_4(VAR_28, VAR_28->wire_tag);
 }
 FUNC_14(VAR_28->resident_page_count >=
        VAR_28->wired_page_count);
 if (VAR_21->vmp_reusable) {
  FUNC_14(VAR_28->reusable_page_count > 0);
  VAR_28->reusable_page_count--;
  FUNC_14(VAR_28->reusable_page_count <=
         VAR_28->resident_page_count);
  VAR_21->vmp_reusable = VAR_1;
  FUNC_1(-1, &VAR_19.reusable_count);
  VAR_19.reused_remove++;
 } else if (VAR_28->all_reusable) {
  FUNC_1(-1, &VAR_19.reusable_count);
  VAR_19.reused_remove++;
 }

 if (VAR_28->purgable == VAR_6 &&
     ! VAR_28->vo_ledger_tag) {
  VAR_27 = VAR_4;
 } else {
  VAR_27 = FUNC_2(VAR_28);
  FUNC_20(VAR_28,
          &VAR_29,
          &VAR_30,
          &VAR_31,
          &VAR_32,
          &VAR_33);
 }
 if (VAR_27 &&
     (VAR_28->purgable == VAR_8 ||
      VAR_28->purgable == VAR_6 ||
      FUNC_12(VAR_21))) {

  FUNC_17(VAR_27->ledger,
        VAR_30,
        VAR_3);
  if (VAR_33) {

   FUNC_17(VAR_27->ledger,
         VAR_11.phys_footprint,
         VAR_3);
  }
 } else if (VAR_27 &&
     (VAR_28->purgable == VAR_9 ||
      VAR_28->purgable == VAR_7)) {
  FUNC_14(! FUNC_12(VAR_21));

  FUNC_17(VAR_27->ledger,
        VAR_29,
        VAR_3);
 }
 if (VAR_28->purgable == VAR_9) {
  if (FUNC_12(VAR_21)) {
   FUNC_14(VAR_17 > 0);
   FUNC_1(-1, &VAR_17);
  } else {
   FUNC_14(VAR_16 > 0);
   FUNC_1(-1, &VAR_16);
  }
 }

 if (VAR_28->set_cache_attr == VAR_5)
  FUNC_18(FUNC_7(VAR_21), 0);

 VAR_21->vmp_tabled = VAR_1;
 VAR_21->vmp_object = 0;
 VAR_21->vmp_offset = (vm_object_offset_t) -1;
}
