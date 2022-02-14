
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_device {int dev; } ;
struct fb_videomode {int xres; } ;
struct corgi_lcd {int mode; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct corgi_lcd*,int ,int ) ;
 struct corgi_lcd* FUNC_1 (int *) ;
 int FUNC_2 (struct corgi_lcd*,int) ;

__attribute__((used)) static int FUNC_3(struct lcd_device *VAR_3, struct fb_videomode *VAR_4)
{
 struct corgi_lcd *VAR_5 = FUNC_1(&VAR_3->dev);
 int VAR_6 = 129;

 if (VAR_4->xres == 640 || VAR_4->xres == 480)
  VAR_6 = 128;

 if (VAR_5->mode == VAR_6)
  return 0;

 FUNC_2(VAR_5, VAR_6);

 switch (VAR_6) {
 case 128:
  FUNC_0(VAR_5, VAR_0, VAR_2);
  break;
 case 129:
 default:
  FUNC_0(VAR_5, VAR_0, VAR_1);
  break;
 }

 VAR_5->mode = VAR_6;
 return 0;
}
