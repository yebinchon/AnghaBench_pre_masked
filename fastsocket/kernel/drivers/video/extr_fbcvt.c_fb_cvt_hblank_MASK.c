
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fb_cvt_data {int flags; int active_pixels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fb_cvt_data*) ;

__attribute__((used)) static u32 FUNC_1(struct fb_cvt_data *VAR_3)
{
 u32 VAR_4 = 0;

 if (VAR_3->flags & VAR_1)
  VAR_4 = VAR_2;
 else {
  u32 VAR_5 = FUNC_0(VAR_3);
  u32 VAR_6 = VAR_3->active_pixels;

  if (VAR_5 < 20000)
   VAR_4 = (VAR_6 * 20000)/
    (100000 - 20000);
  else {
   VAR_4 = (VAR_6 * VAR_5)/
    (100000 - VAR_5);
  }
 }

 VAR_4 &= ~((2 * VAR_0) - 1);

 return VAR_4;
}
