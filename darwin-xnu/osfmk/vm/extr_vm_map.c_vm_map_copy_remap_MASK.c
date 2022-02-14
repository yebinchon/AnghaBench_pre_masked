
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef void* vm_prot_t ;
typedef TYPE_2__* vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_3__* vm_map_entry_t ;
typedef int vm_map_copy_t ;
typedef int vm_inherit_t ;
struct TYPE_19__ {int use_pmap; scalar_t__ is_sub_map; int behavior; void* max_protection; void* protection; int inheritance; int vme_end; int vme_start; struct TYPE_19__* vme_next; } ;
struct TYPE_17__ {int entries_pageable; } ;
struct TYPE_18__ {TYPE_1__ hdr; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 TYPE_3__* FUNC_3 (int ) ;
 TYPE_3__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*) ;
 TYPE_3__* FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*,TYPE_3__*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

void
FUNC_12(
 vm_map_t VAR_2,
 vm_map_entry_t VAR_3,
 vm_map_copy_t VAR_4,
 vm_map_offset_t VAR_5,
 vm_prot_t VAR_6,
 vm_prot_t VAR_7,
 vm_inherit_t VAR_8)
{
 vm_map_entry_t VAR_9, VAR_10;

 for (VAR_9 = FUNC_3(VAR_4);
      VAR_9 != FUNC_4(VAR_4);
      VAR_9 = VAR_9->vme_next) {

  VAR_10 = FUNC_6(VAR_2,
      !VAR_2->hdr.entries_pageable);

  FUNC_5(VAR_10, VAR_9);

  VAR_10->vme_start += VAR_5;
  VAR_10->vme_end += VAR_5;

  VAR_10->inheritance = VAR_8;
  VAR_10->protection = VAR_6;
  VAR_10->max_protection = VAR_7;
  VAR_10->behavior = VAR_0;

  if (VAR_10->is_sub_map) {
   FUNC_2(!VAR_10->use_pmap);
   FUNC_7(FUNC_1(VAR_10));
   FUNC_8(FUNC_1(VAR_10));
   FUNC_10(FUNC_1(VAR_10));
  } else {
   FUNC_11(FUNC_0(VAR_10));
  }

  FUNC_9(VAR_2, VAR_3, VAR_10,
     VAR_1);

  VAR_3 = VAR_10;
 }
}
