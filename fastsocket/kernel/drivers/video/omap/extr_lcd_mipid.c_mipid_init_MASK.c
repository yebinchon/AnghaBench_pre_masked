
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_device {int dummy; } ;
struct mipid_device {int saved_bklight_level; scalar_t__ enabled; int mutex; int esd_work; TYPE_1__* spi; int * esd_wq; struct omapfb_device* fbdev; } ;
struct lcd_panel {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct mipid_device*) ;
 int VAR_1 ;
 int FUNC_4 (struct lcd_panel*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct mipid_device*) ;
 struct mipid_device* FUNC_7 (struct lcd_panel*) ;

__attribute__((used)) static int FUNC_8(struct lcd_panel *VAR_2,
       struct omapfb_device *VAR_3)
{
 struct mipid_device *VAR_4 = FUNC_7(VAR_2);

 VAR_4->fbdev = VAR_3;
 VAR_4->esd_wq = FUNC_1("mipid_esd");
 if (VAR_4->esd_wq == ((void*)0)) {
  FUNC_2(&VAR_4->spi->dev, "can't create ESD workqueue\n");
  return -VAR_0;
 }
 FUNC_0(&VAR_4->esd_work, VAR_1);
 FUNC_5(&VAR_4->mutex);

 VAR_4->enabled = FUNC_6(VAR_4);

 if (VAR_4->enabled)
  FUNC_3(VAR_4);
 else
  VAR_4->saved_bklight_level = FUNC_4(VAR_2);

 return 0;
}
