
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct omap_hwmod {int dummy; } ;
struct omap_device {int hwmods_cnt; struct omap_hwmod** hwmods; } ;


 int FUNC_0 (struct omap_hwmod*,struct resource*) ;

int FUNC_1(struct omap_device *VAR_0, struct resource *VAR_1)
{
 struct omap_hwmod *VAR_2;
 int VAR_3 = 0;
 int VAR_4, VAR_5;

 for (VAR_4 = 0, VAR_2 = *VAR_0->hwmods; VAR_4 < VAR_0->hwmods_cnt; VAR_4++, VAR_2++) {
  VAR_5 = FUNC_0(VAR_2, VAR_1);
  VAR_1 += VAR_5;
  VAR_3 += VAR_5;
 }

 return 0;
}
