
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int id; int name; } ;
struct omap_device {scalar_t__ _state; int _dev_wakeup_lat_limit; scalar_t__ dev_wakeup_lat; int pm_lats_cnt; int pm_lat_level; TYPE_1__ pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*,int ,int ) ;
 struct omap_device* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct omap_device*,int ) ;

int FUNC_3(struct platform_device *VAR_5)
{
 int VAR_6;
 struct omap_device *VAR_7;

 VAR_7 = FUNC_1(VAR_5);

 if (VAR_7->_state == VAR_3) {
  FUNC_0(1, "omap_device: %s.%d: omap_device_enable() called from "
       "invalid state\n", VAR_7->pdev.name, VAR_7->pdev.id);
  return -VAR_0;
 }


 if (VAR_7->_state == VAR_4)
  VAR_7->pm_lat_level = VAR_7->pm_lats_cnt;

 VAR_6 = FUNC_2(VAR_7, VAR_1);

 VAR_7->dev_wakeup_lat = 0;
 VAR_7->_dev_wakeup_lat_limit = VAR_2;
 VAR_7->_state = VAR_3;

 return VAR_6;
}
