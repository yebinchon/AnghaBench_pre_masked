
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * name; int mode; } ;
struct TYPE_7__ {TYPE_2__ attr; int * store; int show; } ;
struct nouveau_pm_level {TYPE_3__ dev_attr; int id; int * name; } ;
struct nouveau_pm {int nr_perflvl; struct nouveau_pm_level* perflvl; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device dev; } ;


 int FUNC_0 (struct nouveau_drm*,char*,int ,int) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (struct device*,TYPE_3__*) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 struct nouveau_pm* FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int VAR_2 ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6(struct drm_device *VAR_3)
{
 struct nouveau_drm *VAR_4 = FUNC_2(VAR_3);
 struct nouveau_pm *VAR_5 = FUNC_3(VAR_3);
 struct device *VAR_6 = &VAR_3->pdev->dev;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_6, &VAR_1);
 if (VAR_7)
  return VAR_7;

 for (VAR_8 = 0; VAR_8 < VAR_5->nr_perflvl; VAR_8++) {
  struct nouveau_pm_level *VAR_9 = &VAR_5->perflvl[VAR_8];

  VAR_9->dev_attr.attr.name = VAR_9->name;
  VAR_9->dev_attr.attr.mode = VAR_0;
  VAR_9->dev_attr.show = VAR_2;
  VAR_9->dev_attr.store = ((void*)0);
  FUNC_5(&VAR_9->dev_attr.attr);

  VAR_7 = FUNC_1(VAR_6, &VAR_9->dev_attr);
  if (VAR_7) {
   FUNC_0(VAR_4, "failed pervlvl %d sysfs: %d\n",
     VAR_9->id, VAR_8);
   VAR_9->dev_attr.attr.name = ((void*)0);
   FUNC_4(VAR_3);
   return VAR_7;
  }
 }

 return 0;
}
