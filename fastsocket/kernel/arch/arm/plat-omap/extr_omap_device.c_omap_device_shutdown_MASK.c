
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct omap_hwmod {int dummy; } ;
struct TYPE_2__ {int id; int name; } ;
struct omap_device {scalar_t__ _state; int hwmods_cnt; struct omap_hwmod** hwmods; TYPE_1__ pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*,int ,int ) ;
 struct omap_device* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct omap_device*,int ) ;
 int FUNC_3 (struct omap_hwmod*) ;

int FUNC_4(struct platform_device *VAR_5)
{
 int VAR_6, VAR_7;
 struct omap_device *VAR_8;
 struct omap_hwmod *VAR_9;

 VAR_8 = FUNC_1(VAR_5);

 if (VAR_8->_state != VAR_2 &&
     VAR_8->_state != VAR_3) {
  FUNC_0(1, "omap_device: %s.%d: omap_device_shutdown() called "
       "from invalid state\n", VAR_8->pdev.name, VAR_8->pdev.id);
  return -VAR_0;
 }

 VAR_6 = FUNC_2(VAR_8, VAR_1);

 for (VAR_7 = 0, VAR_9 = *VAR_8->hwmods; VAR_7 < VAR_8->hwmods_cnt; VAR_7++, VAR_9++)
  FUNC_3(VAR_9);

 VAR_8->_state = VAR_4;

 return VAR_6;
}
