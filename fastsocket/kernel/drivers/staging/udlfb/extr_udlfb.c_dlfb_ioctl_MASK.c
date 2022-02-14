
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ xres; scalar_t__ yres; } ;
struct fb_info {int screen_base; TYPE_1__ var; struct dlfb_data* par; } ;
struct dloarea {scalar_t__ x; scalar_t__ y; scalar_t__ x2; scalar_t__ y2; int h; int w; } ;
struct dlfb_data {int edid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct dlfb_data*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (struct dlfb_data*) ;
 int FUNC_3 (struct dlfb_data*) ;
 int FUNC_4 (struct dlfb_data*,scalar_t__,scalar_t__,int ,int ,int ) ;
 int FUNC_5 (struct dlfb_data*) ;

__attribute__((used)) static int FUNC_6(struct fb_info *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{

 struct dlfb_data *VAR_4 = VAR_1->par;
 struct dloarea *VAR_5 = ((void*)0);

 if (VAR_2 == 0xAD) {
  char *VAR_6 = (char *)VAR_3;
  FUNC_3(VAR_4);
  if (FUNC_0(VAR_6, VAR_4->edid, 128)) {
   return -VAR_0;
  }
  return 0;
 }

 if (VAR_2 == 0xAA || VAR_2 == 0xAB || VAR_2 == 0xAC) {

  VAR_5 = (struct dloarea *)VAR_3;

  if (VAR_5->x < 0)
   VAR_5->x = 0;

  if (VAR_5->x > VAR_1->var.xres)
   VAR_5->x = VAR_1->var.xres;

  if (VAR_5->y < 0)
   VAR_5->y = 0;

  if (VAR_5->y > VAR_1->var.yres)
   VAR_5->y = VAR_1->var.yres;
 }

 if (VAR_2 == 0xAA) {
  FUNC_4(VAR_4, VAR_5->x, VAR_5->y, VAR_5->w, VAR_5->h,
      VAR_1->screen_base);
 }
 if (VAR_2 == 0xAC) {
  FUNC_2(VAR_4);
  FUNC_4(VAR_4, VAR_5->x, VAR_5->y, VAR_5->w, VAR_5->h,
      VAR_1->screen_base);
  FUNC_5(VAR_4);
 } else if (VAR_2 == 0xAB) {

  if (VAR_5->x2 < 0)
   VAR_5->x2 = 0;

  if (VAR_5->y2 < 0)
   VAR_5->y2 = 0;

  FUNC_1(VAR_4,
    VAR_5->x2, VAR_5->y2, VAR_5->x, VAR_5->y, VAR_5->w,
    VAR_5->h);
 }
 return 0;
}
