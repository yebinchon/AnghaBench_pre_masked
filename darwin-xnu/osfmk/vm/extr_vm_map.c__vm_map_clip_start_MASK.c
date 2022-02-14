
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_1__* vm_map_entry_t ;
struct vm_map_header {int entries_pageable; } ;
struct TYPE_11__ {scalar_t__ vme_end; scalar_t__ vme_start; scalar_t__ is_sub_map; int vme_prev; scalar_t__ map_aligned; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct vm_map_header*) ;
 int FUNC_5 (scalar_t__,int ) ;
 TYPE_1__* FUNC_6 (struct vm_map_header*,int) ;
 int FUNC_7 (struct vm_map_header*,int ,TYPE_1__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(
 struct vm_map_header *VAR_0,
 vm_map_entry_t VAR_1,
 vm_map_offset_t VAR_2)
{
 vm_map_entry_t VAR_3;
 if (VAR_1->map_aligned) {
  FUNC_8(FUNC_5(VAR_2,
        FUNC_4(VAR_0)));
 }

 VAR_3 = FUNC_6(VAR_0, !VAR_0->entries_pageable);
 FUNC_9(VAR_3, VAR_1);

 VAR_3->vme_end = VAR_2;
 FUNC_8(VAR_3->vme_start < VAR_3->vme_end);
 FUNC_2(VAR_1, FUNC_1(VAR_1) + (VAR_2 - VAR_1->vme_start));
 FUNC_8(VAR_2 < VAR_1->vme_end);
 VAR_1->vme_start = VAR_2;

 FUNC_7(VAR_0, VAR_1->vme_prev, VAR_3);

 if (VAR_1->is_sub_map)
  FUNC_10(FUNC_3(VAR_3));
 else
  FUNC_11(FUNC_0(VAR_3));
}
