
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct lcd_panel {int config; int bpp; int x_res; int hsw; int hfp; int hbp; int y_res; int vsw; int vfp; int vbp; unsigned long pcd; int pixel_clock; int acb; int name; } ;
struct TYPE_4__ {TYPE_1__* fbdev; int lcd_ck; } ;
struct TYPE_3__ {int dev; struct lcd_panel* panel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int,int*) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,unsigned long,int ) ;
 TYPE_2__ VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static void inline FUNC_5(void)
{
 u32 VAR_8;
 struct lcd_panel *VAR_9 = VAR_7.fbdev->panel;
 int VAR_10 = VAR_9->config & VAR_2;
 unsigned long VAR_11;
 int VAR_12;

 VAR_8 = FUNC_3(VAR_0);
 VAR_8 &= ~VAR_1;
 VAR_8 |= VAR_10 ? VAR_1 : 0;






 FUNC_4(VAR_8, VAR_0);

 VAR_8 = FUNC_3(VAR_6);
 VAR_8 &= ~(((1 << 6) - 1) << 20);
 VAR_8 |= (VAR_9->config & VAR_3) << 20;
 FUNC_4(VAR_8, VAR_6);

 VAR_8 = VAR_9->x_res - 1;
 VAR_8 |= (VAR_9->hsw - 1) << 10;
 VAR_8 |= (VAR_9->hfp - 1) << 16;
 VAR_8 |= (VAR_9->hbp - 1) << 24;
 FUNC_4(VAR_8, VAR_4);

 VAR_8 = VAR_9->y_res - 1;
 VAR_8 |= (VAR_9->vsw - 1) << 10;
 VAR_8 |= VAR_9->vfp << 16;
 VAR_8 |= VAR_9->vbp << 24;
 FUNC_4(VAR_8, VAR_5);

 VAR_8 = FUNC_3(VAR_6);
 VAR_8 &= ~0xff;

 VAR_11 = FUNC_1(VAR_7.lcd_ck);

 if (!VAR_9->pcd)
  FUNC_0(VAR_10, VAR_9->pixel_clock * 1000, &VAR_12);
 else {
  FUNC_2(VAR_7.fbdev->dev,
      "Pixel clock divider value is obsolete.\n"
      "Try to set pixel_clock to %lu and pcd to 0 "
      "in drivers/video/omap/lcd_%s.c and submit a patch.\n",
   VAR_11 / VAR_9->pcd / 1000, VAR_9->name);

  VAR_12 = VAR_9->pcd;
 }
 VAR_8 |= VAR_12 & 0xff;
 VAR_8 |= VAR_9->acb << 8;
 FUNC_4(VAR_8, VAR_6);


 VAR_9->pixel_clock = VAR_11 / VAR_12 / 1000;
}
