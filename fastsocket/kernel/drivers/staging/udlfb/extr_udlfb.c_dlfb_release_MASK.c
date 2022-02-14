
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int yres; int xres; } ;
struct fb_info {int screen_base; TYPE_1__ var; struct dlfb_data* par; } ;
struct dlfb_data {int dummy; } ;


 int FUNC_0 (struct dlfb_data*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_0, int VAR_1)
{
 struct dlfb_data *VAR_2 = VAR_0->par;
 FUNC_0(VAR_2, 0, 0, VAR_0->var.xres, VAR_0->var.yres,
     VAR_0->screen_base);
 return 0;
}
