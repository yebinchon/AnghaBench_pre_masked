
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_hdw {unsigned int std_enum_cnt; scalar_t__ std_mask_cur; unsigned int std_enum_cur; TYPE_1__* std_defs; } ;
struct TYPE_2__ {scalar_t__ id; } ;



__attribute__((used)) static void FUNC_0(struct pvr2_hdw *VAR_0)
{
 unsigned int VAR_1;
 for (VAR_1 = 1; VAR_1 < VAR_0->std_enum_cnt; VAR_1++) {
  if (VAR_0->std_defs[VAR_1-1].id == VAR_0->std_mask_cur) {
   VAR_0->std_enum_cur = VAR_1;
   return;
  }
 }
 VAR_0->std_enum_cur = 0;
}
