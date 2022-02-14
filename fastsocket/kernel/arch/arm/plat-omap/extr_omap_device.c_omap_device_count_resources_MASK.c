
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hwmod {int dummy; } ;
struct TYPE_2__ {int name; } ;
struct omap_device {int hwmods_cnt; TYPE_1__ pdev; struct omap_hwmod** hwmods; } ;


 scalar_t__ FUNC_0 (struct omap_hwmod*) ;
 int FUNC_1 (char*,int ,int,int) ;

int FUNC_2(struct omap_device *VAR_0)
{
 struct omap_hwmod *VAR_1;
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0, VAR_1 = *VAR_0->hwmods; VAR_3 < VAR_0->hwmods_cnt; VAR_3++, VAR_1++)
  VAR_2 += FUNC_0(VAR_1);

 FUNC_1("omap_device: %s: counted %d total resources across %d "
   "hwmods\n", VAR_0->pdev.name, VAR_2, VAR_0->hwmods_cnt);

 return VAR_2;
}
