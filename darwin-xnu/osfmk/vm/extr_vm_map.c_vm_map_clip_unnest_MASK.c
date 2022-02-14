
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_2__* vm_map_entry_t ;
struct TYPE_18__ {int is_nested_map; scalar_t__ lowest_unnestable_start; int disable_vmentry_reuse; } ;
struct TYPE_17__ {int is_sub_map; int use_pmap; scalar_t__ vme_start; scalar_t__ vme_end; } ;
struct TYPE_16__ {scalar_t__ pmap; scalar_t__ map_refcnt; scalar_t__ mapped_in_other_pmaps; int * first_free; scalar_t__ holelistenabled; int hdr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 TYPE_4__* FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,TYPE_2__*,scalar_t__) ;
 int FUNC_5 (int *,TYPE_2__*,scalar_t__) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (TYPE_1__*,scalar_t__,scalar_t__,int,scalar_t__) ;
 int FUNC_8 (char*,long long,long long,long long,long long) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (TYPE_1__*,int *,int) ;
 int FUNC_12 (TYPE_1__*,scalar_t__,scalar_t__,TYPE_4__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_13(
 vm_map_t VAR_4,
 vm_map_entry_t VAR_5,
 vm_map_offset_t VAR_6,
 vm_map_offset_t VAR_7)
{
 vm_map_offset_t VAR_8 = VAR_6;
 vm_map_offset_t VAR_9 = VAR_7;

 FUNC_6(VAR_5->is_sub_map);
 FUNC_6(FUNC_3(VAR_5) != ((void*)0));
 FUNC_6(VAR_5->use_pmap);
 if (FUNC_9(VAR_4->pmap, &VAR_6, &VAR_7)) {
  FUNC_6(FUNC_3(VAR_5)->is_nested_map);
  FUNC_6(!FUNC_3(VAR_5)->disable_vmentry_reuse);
  FUNC_7(VAR_4,
       VAR_8,
       VAR_9,
       FUNC_3(VAR_5)->is_nested_map,
       (VAR_5->vme_start +
        FUNC_3(VAR_5)->lowest_unnestable_start -
        FUNC_2(VAR_5)));
 }

 if (VAR_5->vme_start > VAR_6 ||
     VAR_5->vme_end < VAR_7) {
  FUNC_8("vm_map_clip_unnest(0x%llx,0x%llx): "
        "bad nested entry: start=0x%llx end=0x%llx\n",
        (long long)VAR_6, (long long)VAR_7,
        (long long)VAR_5->vme_start, (long long)VAR_5->vme_end);
 }

 if (VAR_6 > VAR_5->vme_start) {
  FUNC_5(&VAR_4->hdr,
       VAR_5,
       VAR_6);
  if (VAR_4->holelistenabled) {
   FUNC_11(VAR_4, ((void*)0), VAR_0);
  } else {
   FUNC_11(VAR_4, VAR_4->first_free, VAR_0);
  }
 }
 if (VAR_5->vme_end > VAR_7) {
  FUNC_4(&VAR_4->hdr,
     VAR_5,
     VAR_7);
  if (VAR_4->holelistenabled) {
   FUNC_11(VAR_4, ((void*)0), VAR_0);
  } else {
   FUNC_11(VAR_4, VAR_4->first_free, VAR_0);
  }
 }

 FUNC_10(VAR_4->pmap,
      VAR_5->vme_start,
      VAR_5->vme_end - VAR_5->vme_start);
 if ((VAR_4->mapped_in_other_pmaps) && (VAR_4->map_refcnt)) {

  FUNC_12(
   VAR_4, VAR_5->vme_start,
   VAR_5->vme_end,
   FUNC_3(VAR_5),
   FUNC_2(VAR_5));
 }
 VAR_5->use_pmap = VAR_0;
 if ((VAR_4->pmap != VAR_3) &&
     (FUNC_0(VAR_5) == VAR_1)) {
  FUNC_1(VAR_5, VAR_2);
 }
}
