
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tmiofb_par {scalar_t__ lcr; scalar_t__ ccr; } ;
struct tmio_fb_data {int (* lcd_set_power ) (struct platform_device*,int ) ;} ;
struct TYPE_2__ {struct mfd_cell* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mfd_cell {struct tmio_fb_data* driver_data; } ;
struct fb_info {struct tmiofb_par* par; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct fb_info* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3)
{
 struct mfd_cell *VAR_4 = VAR_3->dev.platform_data;
 struct tmio_fb_data *VAR_5 = VAR_4->driver_data;
 struct fb_info *VAR_6 = FUNC_0(VAR_3);
 struct tmiofb_par *VAR_7 = VAR_6->par;

 FUNC_2(0, VAR_7->ccr + VAR_0);
 FUNC_2(0, VAR_7->lcr + VAR_1);
 VAR_5->lcd_set_power(VAR_3, 0);
 FUNC_2(0x0010, VAR_7->lcr + VAR_2);

 return 0;
}
