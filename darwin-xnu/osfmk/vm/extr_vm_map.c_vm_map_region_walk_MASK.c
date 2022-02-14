
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;


typedef TYPE_1__* vm_region_extended_info_t ;
typedef struct vm_object* vm_object_t ;
typedef int vm_object_size_t ;
typedef scalar_t__ vm_object_offset_t ;
typedef TYPE_2__* vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_3__* vm_map_entry_t ;
struct vm_object {int ref_count; scalar_t__ purgable; scalar_t__ resident_page_count; scalar_t__ wired_page_count; scalar_t__ paging_in_progress; struct vm_object* shadow; scalar_t__ true_share; int internal; int pager_trusted; int pager; scalar_t__ phys_contiguous; } ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_21__ {scalar_t__ vme_start; struct TYPE_21__* vme_next; scalar_t__ needs_copy; scalar_t__ iokit_acct; scalar_t__ superpage_size; scalar_t__ is_sub_map; } ;
struct TYPE_20__ {int pmap; scalar_t__ has_corpse_footprint; } ;
struct TYPE_19__ {scalar_t__ share_mode; int ref_count; int shadow_depth; int external_pager; unsigned int pages_resident; int pages_dirtied; int pages_swapped_out; int pages_reusable; } ;
struct TYPE_18__ {TYPE_2__* map; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 struct vm_object* FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 struct vm_object* VAR_17 ;
 TYPE_15__* FUNC_2 (struct vm_object*) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_3 (int ,scalar_t__,int*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,scalar_t__,int*) ;
 TYPE_3__* FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,struct vm_object*) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,struct vm_object*,scalar_t__,int,int ,TYPE_1__*,int ) ;
 TYPE_3__* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct vm_object*) ;
 int FUNC_12 (struct vm_object*) ;

void
FUNC_13(
 vm_map_t VAR_22,
 vm_map_offset_t VAR_23,
 vm_map_entry_t VAR_24,
 vm_object_offset_t VAR_25,
 vm_object_size_t VAR_26,
 vm_region_extended_info_t VAR_27,
 boolean_t VAR_28,
 mach_msg_type_number_t VAR_29)
{
        struct vm_object *VAR_30, *VAR_31;
 vm_map_offset_t VAR_32;
 int VAR_33;
 int VAR_34;
 struct vm_object *VAR_35;
 int VAR_36;
 boolean_t VAR_37;

 VAR_37 = FUNC_4();

 if ((FUNC_0(VAR_24) == 0) ||
     (VAR_24->is_sub_map) ||
     (FUNC_0(VAR_24)->phys_contiguous &&
      !VAR_24->superpage_size)) {
  VAR_27->share_mode = VAR_10;
  VAR_27->ref_count = 0;
  return;
 }

 if (VAR_24->superpage_size) {
  VAR_27->shadow_depth = 0;
  VAR_27->share_mode = VAR_11;
  VAR_27->ref_count = 1;
  VAR_27->external_pager = 0;
  VAR_27->pages_resident = (unsigned int)(VAR_26 >> VAR_0);
  VAR_27->shadow_depth = 0;
  return;
 }

 VAR_30 = FUNC_0(VAR_24);

 FUNC_11(VAR_30);

 if ((VAR_34 = VAR_30->ref_count) > 1 && VAR_30->paging_in_progress)
  VAR_34--;

 if (VAR_28) {
  for (VAR_32 = VAR_25 + VAR_26;
       VAR_25 < VAR_32;
       VAR_25 += VAR_2, VAR_23 += VAR_1) {

   if (VAR_37) {
    int VAR_38;

    VAR_38 = 0;
    if (VAR_22->has_corpse_footprint) {




     FUNC_6(
      VAR_22,
      VAR_23,
      &VAR_38);
    } else {



     FUNC_3(VAR_22->pmap,
            VAR_23,
            &VAR_38);
    }
    if (VAR_38 & VAR_7) {
     if (!(VAR_38 & VAR_3)) {
      VAR_27->pages_resident++;
     }
     if (VAR_38 & VAR_8) {
      VAR_27->pages_reusable++;
     } else if (!(VAR_38 & VAR_6) ||
         (VAR_38 & VAR_3)) {

     } else {
      VAR_27->pages_dirtied++;
     }
    } else if (VAR_38 & VAR_4) {
     if (VAR_38 & VAR_5) {

     } else {
      VAR_27->pages_swapped_out++;
     }
    }

    if (VAR_30->purgable == VAR_20 &&

        FUNC_2(VAR_30) != ((void*)0) &&
        FUNC_2(VAR_30)->map == VAR_22) {
     if ((((VAR_23
            - VAR_24->vme_start
            + FUNC_1(VAR_24))
           / VAR_1) <
          (VAR_30->resident_page_count +
           FUNC_5(VAR_30->pager)))) {
      VAR_27->pages_resident++;
     }
    } else if ((VAR_30->purgable == VAR_21 ||
         VAR_30->purgable == VAR_19) &&

        FUNC_2(VAR_30) != ((void*)0) &&
        FUNC_2(VAR_30)->map == VAR_22) {
     if ((((VAR_23
            - VAR_24->vme_start
            + FUNC_1(VAR_24))
           / VAR_1) <
          VAR_30->wired_page_count)) {
      VAR_27->pages_resident++;
     }
    } else if (VAR_30->purgable != VAR_18) {







    } else if (VAR_24->iokit_acct) {





     VAR_27->pages_dirtied++;
    }
    continue;
   }

   FUNC_9(VAR_22, VAR_23, VAR_30,
          VAR_25, VAR_34,
          0, VAR_27, VAR_29);
  }

  if (VAR_37) {
   goto collect_object_info;
  }

 } else {
 collect_object_info:
  VAR_35 = VAR_30->shadow;
  VAR_36 = 0;

  if ( !(VAR_30->pager_trusted) && !(VAR_30->internal))
   VAR_27->external_pager = 1;

  if (VAR_35 != VAR_17) {
   FUNC_11(VAR_35);
   for (;
        VAR_35 != VAR_17;
        VAR_36++) {
    vm_object_t VAR_39;

    if ( !(VAR_35->pager_trusted) &&
         !(VAR_35->internal))
     VAR_27->external_pager = 1;

    VAR_39 = VAR_35->shadow;
    if (VAR_39) {
     FUNC_11(VAR_39);
    }
    FUNC_12(VAR_35);
    VAR_35 = VAR_39;
   }
  }
  VAR_27->shadow_depth = VAR_36;
 }

 if (VAR_27->shadow_depth || VAR_24->needs_copy)
  VAR_27->share_mode = VAR_9;
 else {
  if (VAR_34 == 1)
   VAR_27->share_mode = VAR_12;
  else {
   if (VAR_30->true_share)
    VAR_27->share_mode = VAR_16;
   else
    VAR_27->share_mode = VAR_14;
  }
 }
 VAR_27->ref_count = VAR_34 - VAR_27->shadow_depth;

 for (VAR_33 = 0; VAR_33 < VAR_27->shadow_depth; VAR_33++) {
  if ((VAR_31 = VAR_30->shadow) == 0)
   break;
  FUNC_11(VAR_31);
  FUNC_12(VAR_30);

  if ((VAR_34 = VAR_31->ref_count) > 1 && VAR_31->paging_in_progress)
   VAR_34--;

  VAR_27->ref_count += VAR_34;
  VAR_30 = VAR_31;
 }
 FUNC_12(VAR_30);

 if (VAR_27->share_mode == VAR_14) {
  vm_map_entry_t VAR_40;
  vm_map_entry_t VAR_41;
  int VAR_42;

  VAR_30 = FUNC_0(VAR_24);
  VAR_41 = FUNC_10(VAR_22);
  VAR_42 = 0;

  if ((VAR_34 = VAR_30->ref_count) > 1 && VAR_30->paging_in_progress)
   VAR_34--;
  for (VAR_40 = FUNC_7(VAR_22); VAR_40 != VAR_41; VAR_40 = VAR_40->vme_next)
   VAR_42 += FUNC_8(VAR_40, VAR_30);

  if (VAR_42 == VAR_34)
   VAR_27->share_mode = VAR_13;
  else if (VAR_42 > 1)
   VAR_27->share_mode = VAR_15;
 }
}
