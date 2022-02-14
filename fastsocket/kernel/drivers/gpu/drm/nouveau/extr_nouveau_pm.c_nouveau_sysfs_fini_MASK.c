
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; } ;
struct TYPE_7__ {TYPE_1__ attr; } ;
struct nouveau_pm_level {TYPE_3__ dev_attr; } ;
struct nouveau_pm {int nr_perflvl; struct nouveau_pm_level* perflvl; } ;
struct drm_device {TYPE_2__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device dev; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (struct device*,TYPE_3__*) ;
 struct nouveau_pm* FUNC_1 (struct drm_device*) ;

__attribute__((used)) static void
FUNC_2(struct drm_device *VAR_1)
{
 struct nouveau_pm *VAR_2 = FUNC_1(VAR_1);
 struct device *VAR_3 = &VAR_1->pdev->dev;
 int VAR_4;

 FUNC_0(VAR_3, &VAR_0);
 for (VAR_4 = 0; VAR_4 < VAR_2->nr_perflvl; VAR_4++) {
  struct nouveau_pm_level *VAR_5 = &VAR_2->perflvl[VAR_4];

  if (!VAR_5->dev_attr.attr.name)
   break;

  FUNC_0(VAR_3, &VAR_5->dev_attr);
 }
}
