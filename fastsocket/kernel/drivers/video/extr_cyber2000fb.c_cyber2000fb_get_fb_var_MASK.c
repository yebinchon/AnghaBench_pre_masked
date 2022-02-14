
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_var_screeninfo {int dummy; } ;
struct TYPE_2__ {int var; } ;
struct cfb_info {TYPE_1__ fb; } ;


 int FUNC_0 (struct fb_var_screeninfo*,int *,int) ;

void FUNC_1(struct cfb_info *VAR_0, struct fb_var_screeninfo *VAR_1)
{
 FUNC_0(VAR_1, &VAR_0->fb.var, sizeof(struct fb_var_screeninfo));
}
