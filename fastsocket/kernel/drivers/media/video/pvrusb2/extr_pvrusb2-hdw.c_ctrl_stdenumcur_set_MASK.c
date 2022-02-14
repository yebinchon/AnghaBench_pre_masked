
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_hdw {int std_enum_cnt; int std_enum_cur; scalar_t__ std_mask_cur; int std_dirty; TYPE_1__* std_defs; } ;
struct pvr2_ctrl {struct pvr2_hdw* hdw; } ;
struct TYPE_2__ {scalar_t__ id; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct pvr2_ctrl *VAR_1,int VAR_2,int VAR_3)
{
 struct pvr2_hdw *VAR_4 = VAR_1->hdw;
 if (VAR_3 < 0) return -VAR_0;
 if (VAR_3 > VAR_4->std_enum_cnt) return -VAR_0;
 VAR_4->std_enum_cur = VAR_3;
 if (!VAR_3) return 0;
 VAR_3--;
 if (VAR_4->std_mask_cur == VAR_4->std_defs[VAR_3].id) return 0;
 VAR_4->std_mask_cur = VAR_4->std_defs[VAR_3].id;
 VAR_4->std_dirty = !0;
 return 0;
}
