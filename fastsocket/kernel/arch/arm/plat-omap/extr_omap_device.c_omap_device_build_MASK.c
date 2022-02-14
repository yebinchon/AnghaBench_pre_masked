
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hwmod {int dummy; } ;
struct omap_device_pm_latency {int dummy; } ;
struct omap_device {int dummy; } ;


 int VAR_0 ;
 struct omap_device* FUNC_0 (int ) ;
 struct omap_device* FUNC_1 (char const*,int,struct omap_hwmod**,int,void*,int,struct omap_device_pm_latency*,int) ;

struct omap_device *FUNC_2(const char *VAR_1, int VAR_2,
          struct omap_hwmod *VAR_3, void *VAR_4,
          int VAR_5,
          struct omap_device_pm_latency *VAR_6,
          int VAR_7)
{
 struct omap_hwmod *VAR_8[] = { VAR_3 };

 if (!VAR_3)
  return FUNC_0(-VAR_0);

 return FUNC_1(VAR_1, VAR_2, VAR_8, 1, VAR_4,
        VAR_5, VAR_6, VAR_7);
}
