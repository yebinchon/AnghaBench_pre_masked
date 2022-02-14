
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tdo24m {int mode; int (* adj_mode ) (struct tdo24m*,int) ;} ;
struct lcd_device {int dummy; } ;
struct fb_videomode {int xres; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tdo24m* FUNC_0 (struct lcd_device*) ;
 int FUNC_1 (struct tdo24m*,int) ;

__attribute__((used)) static int FUNC_2(struct lcd_device *VAR_2, struct fb_videomode *VAR_3)
{
 struct tdo24m *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = VAR_0;

 if (VAR_3->xres == 640 || VAR_3->xres == 480)
  VAR_5 = VAR_1;

 if (VAR_4->mode == VAR_5)
  return 0;

 return VAR_4->adj_mode(VAR_4, VAR_5);
}
