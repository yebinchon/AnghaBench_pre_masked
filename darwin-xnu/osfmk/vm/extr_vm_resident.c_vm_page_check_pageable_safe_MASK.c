
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef scalar_t__ vm_object_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ VAR_2 ;

void
FUNC_2(vm_page_t VAR_3)
{
 vm_object_t VAR_4;

 VAR_4 = FUNC_0(VAR_3);

 if (VAR_4 == VAR_1) {
  FUNC_1("vm_page_check_pageable_safe: trying to add page" "from kernel object (%p) to pageable queue", VAR_1);

 }

 if (VAR_4 == VAR_0) {
  FUNC_1("vm_page_check_pageable_safe: trying to add page" "from compressor object (%p) to pageable queue", VAR_0);

 }

 if (VAR_4 == VAR_2) {
  FUNC_1("vm_page_check_pageable_safe: trying to add page" "from submap object (%p) to pageable queue", VAR_2);

 }
}
