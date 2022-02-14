
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fb_var_screeninfo {scalar_t__ yres; scalar_t__ yres_virtual; int bits_per_pixel; int xres_virtual; int accel_flags; } ;
struct TYPE_2__ {int smem_len; } ;
struct fb_info {TYPE_1__ fix; scalar_t__ par; } ;
struct atyfb_par {int mmaped; scalar_t__ open; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atyfb_par*) ;
 struct fb_var_screeninfo VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct atyfb_par*) ;

__attribute__((used)) static int FUNC_3(struct fb_info *VAR_4, int VAR_5)
{
 struct atyfb_par *VAR_6 = (struct atyfb_par *) VAR_4->par;




 if (!VAR_5)
  return 0;

 VAR_6->open--;
 FUNC_1(1);
 FUNC_2(VAR_6);

 if (VAR_6->open)
  return 0;
 FUNC_0(VAR_6);

 return 0;
}
