
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvr2_hdw {unsigned int control_cnt; struct pvr2_ctrl* controls; } ;
struct pvr2_ctrl {int dummy; } ;



struct pvr2_ctrl *FUNC_0(struct pvr2_hdw *VAR_0,
          unsigned int VAR_1)
{
 if (VAR_1 >= VAR_0->control_cnt) return ((void*)0);
 return VAR_0->controls + VAR_1;
}
