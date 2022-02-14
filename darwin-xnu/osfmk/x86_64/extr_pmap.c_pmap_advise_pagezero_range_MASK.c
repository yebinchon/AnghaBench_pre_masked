
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_6__ {int cpu_pagezero_mapped; } ;
struct TYPE_5__ {int pagezero_accessible; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_4(pmap_t VAR_3, uint64_t VAR_4) {






 VAR_3->pagezero_accessible = ((VAR_2 == VAR_0) && (VAR_4 < 0x1000));
 if (VAR_3 == FUNC_1()) {
  FUNC_2();
  FUNC_0()->cpu_pagezero_mapped = VAR_3->pagezero_accessible;
  FUNC_3();
 }
}
