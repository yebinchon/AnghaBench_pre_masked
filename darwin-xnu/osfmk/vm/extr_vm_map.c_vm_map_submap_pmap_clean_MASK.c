
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef int addr64_t ;
struct TYPE_16__ {scalar_t__ vme_end; scalar_t__ vme_start; struct TYPE_16__* vme_next; scalar_t__ is_sub_map; } ;
struct TYPE_15__ {int pmap; scalar_t__ map_refcnt; scalar_t__ mapped_in_other_pmaps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,scalar_t__,TYPE_2__**) ;
 TYPE_2__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,scalar_t__,scalar_t__,int ,scalar_t__,int ,int ) ;

void
FUNC_9(
 vm_map_t VAR_3,
 vm_map_offset_t VAR_4,
 vm_map_offset_t VAR_5,
 vm_map_t VAR_6,
 vm_map_offset_t VAR_7)
{
 vm_map_offset_t VAR_8;
 vm_map_offset_t VAR_9;
 vm_map_size_t VAR_10;
 vm_map_entry_t VAR_11;

 VAR_9 = VAR_7 + (VAR_5 - VAR_4);
 VAR_8 = VAR_7;

 FUNC_4(VAR_6);
 if(FUNC_5(VAR_6, VAR_7, &VAR_11)) {

  VAR_10 = (VAR_11->vme_end - VAR_11->vme_start);
  if(VAR_7 > VAR_11->vme_start)
   VAR_10 -= VAR_7 - VAR_11->vme_start;


  if(VAR_9 < VAR_11->vme_end) {
   VAR_10 -=
    VAR_11->vme_end - VAR_9;
  }
  if(VAR_11->is_sub_map) {
   FUNC_9(
    VAR_6,
    VAR_4,
    VAR_4 + VAR_10,
    FUNC_2(VAR_11),
    FUNC_1(VAR_11));
  } else {

   if((VAR_3->mapped_in_other_pmaps) && (VAR_3->map_refcnt)
      && (FUNC_0(VAR_11) != ((void*)0))) {
    FUNC_8(
     FUNC_0(VAR_11),
     (FUNC_1(VAR_11) +
      VAR_7 -
      VAR_11->vme_start),
     VAR_10,
     VAR_0,
     VAR_11->vme_start,
     VAR_2,
     VAR_1);
   } else {
    FUNC_3(VAR_3->pmap,
         (addr64_t)VAR_4,
         (addr64_t)(VAR_4 + VAR_10));
   }
  }
 }

 VAR_11 = VAR_11->vme_next;

 while((VAR_11 != FUNC_6(VAR_6))
       && (VAR_11->vme_start < VAR_9)) {
  VAR_10 = (VAR_11->vme_end - VAR_11->vme_start);
  if(VAR_9 < VAR_11->vme_end) {
   VAR_10 -= VAR_11->vme_end - VAR_9;
  }
  if(VAR_11->is_sub_map) {
   FUNC_9(
    VAR_6,
    (VAR_4 + VAR_11->vme_start) - VAR_7,
    ((VAR_4 + VAR_11->vme_start) - VAR_7) + VAR_10,
    FUNC_2(VAR_11),
    FUNC_1(VAR_11));
  } else {
   if((VAR_3->mapped_in_other_pmaps) && (VAR_3->map_refcnt)
      && (FUNC_0(VAR_11) != ((void*)0))) {
    FUNC_8(
     FUNC_0(VAR_11),
     FUNC_1(VAR_11),
     VAR_10,
     VAR_0,
     VAR_11->vme_start,
     VAR_2,
     VAR_1);
   } else {
    FUNC_3(VAR_3->pmap,
         (addr64_t)((VAR_4 + VAR_11->vme_start)
             - VAR_7),
         (addr64_t)(((VAR_4 + VAR_11->vme_start)
       - VAR_7) + VAR_10));
   }
  }
  VAR_11 = VAR_11->vme_next;
 }
 FUNC_7(VAR_6);
 return;
}
