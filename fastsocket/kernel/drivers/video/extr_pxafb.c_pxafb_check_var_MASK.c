
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxafb_mode_info {int dummy; } ;
struct pxafb_mach_info {scalar_t__ fixed_modes; } ;
struct pxafb_info {TYPE_1__* dev; } ;
struct fb_var_screeninfo {int dummy; } ;
struct fb_info {int dummy; } ;
struct TYPE_2__ {struct pxafb_mach_info* platform_data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct pxafb_info*,struct fb_var_screeninfo*) ;
 int FUNC_2 (struct fb_var_screeninfo*) ;
 struct pxafb_mode_info* FUNC_3 (struct pxafb_mach_info*,struct fb_var_screeninfo*) ;
 int FUNC_4 (struct fb_var_screeninfo*,int ) ;
 int FUNC_5 (struct fb_var_screeninfo*,struct pxafb_mode_info*) ;
 int FUNC_6 (struct fb_var_screeninfo*) ;
 int FUNC_7 (struct fb_var_screeninfo*) ;

__attribute__((used)) static int FUNC_8(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 struct pxafb_info *VAR_3 = (struct pxafb_info *)VAR_2;
 struct pxafb_mach_info *VAR_4 = VAR_3->dev->platform_data;
 int VAR_5;

 if (VAR_4->fixed_modes) {
  struct pxafb_mode_info *VAR_6;

  VAR_6 = FUNC_3(VAR_4, VAR_1);
  if (!VAR_6)
   return -VAR_0;
  FUNC_5(VAR_1, VAR_6);
 }


 VAR_5 = FUNC_6(VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_4(VAR_1, FUNC_7(VAR_1));

 VAR_5 = FUNC_1(VAR_3, VAR_1);
 if (VAR_5)
  return VAR_5;






 return 0;
}
