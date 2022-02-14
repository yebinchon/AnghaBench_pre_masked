
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hwmod {int dummy; } ;
struct omap_device {int hwmods_cnt; struct omap_hwmod** hwmods; } ;


 int FUNC_0 (struct omap_hwmod*) ;

int FUNC_1(struct omap_device *VAR_0)
{
 struct omap_hwmod *VAR_1;
 int VAR_2;

 for (VAR_2 = 0, VAR_1 = *VAR_0->hwmods; VAR_2 < VAR_0->hwmods_cnt; VAR_2++, VAR_1++)
  FUNC_0(VAR_1);


 return 0;
}
