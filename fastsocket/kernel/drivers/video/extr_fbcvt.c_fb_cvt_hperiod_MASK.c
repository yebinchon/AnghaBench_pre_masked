
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fb_cvt_data {int f_refresh; int flags; int yres; int interlace; int v_margin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u32 FUNC_0(struct fb_cvt_data *VAR_4)
{
 u32 VAR_5 = 1000000000/VAR_4->f_refresh;
 u32 VAR_6;

 if (VAR_4->flags & VAR_0) {
  VAR_5 -= VAR_3 * 1000;
  VAR_6 = 2 * (VAR_4->yres/VAR_4->interlace + 2 * VAR_4->v_margin);
 } else {
  VAR_5 -= VAR_2 * 1000;
  VAR_6 = 2 * (VAR_4->yres/VAR_4->interlace + VAR_4->v_margin * 2
      + VAR_1 + VAR_4->interlace/2);
 }

 return 2 * (VAR_5/VAR_6);
}
