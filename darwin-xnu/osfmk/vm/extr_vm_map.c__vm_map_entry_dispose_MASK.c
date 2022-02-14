
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ zone_t ;
typedef TYPE_1__* vm_map_entry_t ;
struct vm_map_header {scalar_t__ entries_pageable; } ;
struct TYPE_4__ {int from_reserved_zone; } ;


 int FUNC_0 (int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(
 struct vm_map_header *VAR_4,
 vm_map_entry_t VAR_5)
{
 zone_t VAR_6;

 if (VAR_4->entries_pageable || !(VAR_5->from_reserved_zone))
  VAR_6 = VAR_3;
 else
  VAR_6 = VAR_2;

 if (!VAR_4->entries_pageable) {
  if (VAR_6 == VAR_3)
   FUNC_0(-1, &VAR_0);
  else
   FUNC_0(-1, &VAR_1);
 }

 FUNC_1(VAR_6, VAR_5);
}
