
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ vm_page_t ;
typedef int vm_offset_t ;
typedef TYPE_1__* vm_object_t ;
typedef int vm_object_offset_t ;
typedef int vm_map_t ;
typedef int vm_map_offset_t ;
typedef TYPE_2__* vm_map_entry_t ;
typedef scalar_t__ ppnum_t ;
struct TYPE_13__ {int vme_start; scalar_t__ is_sub_map; } ;
struct TYPE_12__ {int vo_shadow_offset; struct TYPE_12__* shadow; scalar_t__ phys_contiguous; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,int,int ,int ,int ,int ,int *,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int,TYPE_2__**) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int) ;

ppnum_t
FUNC_12(
 vm_map_t VAR_9,
 vm_offset_t VAR_10)
{
 vm_object_offset_t VAR_11;
 vm_object_t VAR_12;
 vm_map_offset_t VAR_13;
 vm_map_entry_t VAR_14;
 ppnum_t VAR_15 = 0;

 VAR_13 = FUNC_7(VAR_10, VAR_1);

 FUNC_5(VAR_9);
 while (FUNC_6(VAR_9, VAR_13, &VAR_14)) {

  if (FUNC_0(VAR_14) == VAR_6) {
   FUNC_8(VAR_9);
   return (ppnum_t) 0;
  }
  if (VAR_14->is_sub_map) {
   vm_map_t VAR_16;
   FUNC_5(FUNC_2(VAR_14));
   VAR_16 = VAR_9;
   VAR_9 = FUNC_2(VAR_14);
   VAR_13 = (FUNC_1(VAR_14) +
          (VAR_13 - VAR_14->vme_start));
   FUNC_8(VAR_16);
   continue;
  }
  if (FUNC_0(VAR_14)->phys_contiguous) {




   if (FUNC_0(VAR_14)->vo_shadow_offset == 0) {

    FUNC_8(VAR_9);
    FUNC_4(VAR_9, VAR_13, VAR_8,
     VAR_0 , VAR_5,
     VAR_3, ((void*)0), 0);
    FUNC_5(VAR_9);
    continue;
   }
   VAR_11 = (FUNC_1(VAR_14) +
      (VAR_13 - VAR_14->vme_start));
   VAR_15 = (ppnum_t)
    ((FUNC_0(VAR_14)->vo_shadow_offset
      + VAR_11) >> VAR_2);
   break;

  }
  VAR_11 = (FUNC_1(VAR_14) + (VAR_13 - VAR_14->vme_start));
  VAR_12 = FUNC_0(VAR_14);
  FUNC_9(VAR_12);
  while (VAR_4) {
   vm_page_t VAR_17 = FUNC_11(VAR_12,VAR_11);
                 if(VAR_17 == VAR_7) {
    if(VAR_12->shadow) {
     vm_object_t VAR_18;
     FUNC_9(VAR_12->shadow);
     VAR_18 = VAR_12;
     VAR_11 = VAR_11 + VAR_12->vo_shadow_offset;
     VAR_12 = VAR_12->shadow;
     FUNC_10(VAR_18);
    } else {
     FUNC_10(VAR_12);
     break;
    }
   } else {
    VAR_15 = (ppnum_t)(FUNC_3(VAR_17));
    FUNC_10(VAR_12);
    break;
   }
  }
  break;

 }

 FUNC_8(VAR_9);
 return VAR_15;
}
