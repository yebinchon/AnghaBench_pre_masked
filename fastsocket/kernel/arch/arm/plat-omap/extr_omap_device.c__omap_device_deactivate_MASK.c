
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct omap_device_pm_latency {scalar_t__ activate_lat; int deactivate_lat; int (* deactivate_func ) (struct omap_device*) ;} ;
struct TYPE_2__ {int id; int name; } ;
struct omap_device {scalar_t__ pm_lat_level; scalar_t__ pm_lats_cnt; scalar_t__ dev_wakeup_lat; scalar_t__ _dev_wakeup_lat_limit; TYPE_1__ pdev; struct omap_device_pm_latency* pm_lats; } ;


 int FUNC_0 (int,char*,int ,int ,int,int,int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,...) ;
 int FUNC_3 (struct omap_device*) ;

__attribute__((used)) static int FUNC_4(struct omap_device *VAR_0, u8 VAR_1)
{
 u32 VAR_2, VAR_3;

 FUNC_2("omap_device: %s: deactivating\n", VAR_0->pdev.name);

 while (VAR_0->pm_lat_level < VAR_0->pm_lats_cnt) {
  struct omap_device_pm_latency *VAR_4;
  int VAR_5 = 0;

  VAR_4 = VAR_0->pm_lats + VAR_0->pm_lat_level;

  if (!VAR_1 &&
      ((VAR_0->dev_wakeup_lat + VAR_4->activate_lat) >
       VAR_0->_dev_wakeup_lat_limit))
   break;

  VAR_2 = FUNC_1();


  VAR_4->deactivate_func(VAR_0);

  VAR_3 = FUNC_1();

  VAR_5 = (VAR_3 - VAR_2) >> 15;

  FUNC_2("omap_device: %s: pm_lat %d: deactivate: elapsed time "
    "%d usec\n", VAR_0->pdev.name, VAR_0->pm_lat_level,
    VAR_5);

  FUNC_0(VAR_5 > VAR_4->deactivate_lat, "omap_device: %s.%d: "
       "deactivate step %d took longer than expected (%d > %d)\n",
       VAR_0->pdev.name, VAR_0->pdev.id, VAR_0->pm_lat_level,
       VAR_5, VAR_4->deactivate_lat);

  VAR_0->dev_wakeup_lat += VAR_4->activate_lat;

  VAR_0->pm_lat_level++;
 }

 return 0;
}
