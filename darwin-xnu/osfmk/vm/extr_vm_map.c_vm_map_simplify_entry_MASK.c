
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_22__ {scalar_t__ vme_end; scalar_t__ vme_start; scalar_t__ is_sub_map; scalar_t__ behavior; scalar_t__ needs_copy; scalar_t__ protection; scalar_t__ max_protection; scalar_t__ inheritance; scalar_t__ use_pmap; scalar_t__ no_cache; scalar_t__ permanent; scalar_t__ map_aligned; scalar_t__ zero_wired_pages; scalar_t__ used_for_jit; scalar_t__ pmap_cs_associated; scalar_t__ iokit_acct; scalar_t__ vme_resilient_codesign; scalar_t__ vme_resilient_media; scalar_t__ wired_count; scalar_t__ user_wired_count; scalar_t__ vme_atomic; scalar_t__ in_transition; scalar_t__ needs_wakeup; scalar_t__ is_shared; scalar_t__ superpage_size; struct TYPE_22__* vme_prev; } ;
struct TYPE_21__ {scalar_t__ holelistenabled; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_13 (TYPE_1__*,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (scalar_t__) ;

void
FUNC_16(
 vm_map_t VAR_4,
 vm_map_entry_t VAR_5)
{
 vm_map_entry_t VAR_6;

 FUNC_9(VAR_3++);

 VAR_6 = VAR_5->vme_prev;

 if ((VAR_5 != FUNC_14(VAR_4)) &&
     (VAR_6 != FUNC_14(VAR_4)) &&

     (VAR_6->vme_end == VAR_5->vme_start) &&

     (VAR_6->is_sub_map == VAR_5->is_sub_map) &&
     (FUNC_2(VAR_6) == FUNC_2(VAR_5)) &&
     ((FUNC_3(VAR_6) + (VAR_6->vme_end -
        VAR_6->vme_start))
      == FUNC_3(VAR_5)) &&

     (VAR_6->behavior == VAR_5->behavior) &&
     (VAR_6->needs_copy == VAR_5->needs_copy) &&
     (VAR_6->protection == VAR_5->protection) &&
     (VAR_6->max_protection == VAR_5->max_protection) &&
     (VAR_6->inheritance == VAR_5->inheritance) &&
     (VAR_6->use_pmap == VAR_5->use_pmap) &&
     (FUNC_1(VAR_6) == FUNC_1(VAR_5)) &&
     (VAR_6->no_cache == VAR_5->no_cache) &&
     (VAR_6->permanent == VAR_5->permanent) &&
     (VAR_6->map_aligned == VAR_5->map_aligned) &&
     (VAR_6->zero_wired_pages == VAR_5->zero_wired_pages) &&
     (VAR_6->used_for_jit == VAR_5->used_for_jit) &&
     (VAR_6->pmap_cs_associated == VAR_5->pmap_cs_associated) &&

     (VAR_6->iokit_acct == VAR_5->iokit_acct) &&
     (VAR_6->vme_resilient_codesign ==
      VAR_5->vme_resilient_codesign) &&
     (VAR_6->vme_resilient_media ==
      VAR_5->vme_resilient_media) &&

     (VAR_6->wired_count == VAR_5->wired_count) &&
     (VAR_6->user_wired_count == VAR_5->user_wired_count) &&

     ((VAR_6->vme_atomic == VAR_0) && (VAR_5->vme_atomic == VAR_0)) &&
     (VAR_6->in_transition == VAR_0) &&
     (VAR_5->in_transition == VAR_0) &&
     (VAR_6->needs_wakeup == VAR_0) &&
     (VAR_5->needs_wakeup == VAR_0) &&
     (VAR_6->is_shared == VAR_0) &&
     (VAR_5->is_shared == VAR_0) &&
     (VAR_6->superpage_size == VAR_0) &&
     (VAR_5->superpage_size == VAR_0)
  ) {
  FUNC_12(VAR_4, VAR_6);
  FUNC_8(VAR_6->vme_start < VAR_5->vme_end);
  if (VAR_6->map_aligned)
   FUNC_8(FUNC_6(VAR_6->vme_start,
         FUNC_7(VAR_4)));
  VAR_5->vme_start = VAR_6->vme_start;
  FUNC_4(VAR_5, FUNC_3(VAR_6));

  if (VAR_4->holelistenabled) {
   FUNC_13(VAR_4, VAR_5, VAR_1);
  }

  if (VAR_6->is_sub_map) {
   FUNC_10(FUNC_5(VAR_6));
  } else {
   FUNC_15(FUNC_2(VAR_6));
  }
  FUNC_11(VAR_4, VAR_6);
  FUNC_0(VAR_4, VAR_5);
  FUNC_9(VAR_2++);
 }
}
