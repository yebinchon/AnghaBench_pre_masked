
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pdev_archdata {int hwblk_id; int flags; } ;
struct device {TYPE_2__* driver; } ;
struct platform_device {struct pdev_archdata archdata; struct device dev; } ;
struct TYPE_4__ {TYPE_1__* pm; } ;
struct TYPE_3__ {int (* runtime_suspend ) (struct device*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int VAR_4 ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct pdev_archdata *VAR_7 = &VAR_5->archdata;
 int VAR_8 = VAR_7->hwblk_id;
 int VAR_9 = -VAR_0;

 FUNC_1(VAR_6, "__platform_pm_runtime_suspend() [%d]\n", VAR_8);

 if (VAR_6->driver && VAR_6->driver->pm && VAR_6->driver->pm->runtime_suspend) {
  FUNC_0(!FUNC_8(VAR_2, &VAR_7->flags));

  FUNC_4(VAR_4, VAR_8);
  VAR_9 = VAR_6->driver->pm->runtime_suspend(VAR_6);
  FUNC_3(VAR_4, VAR_8);

  if (!VAR_9) {
   FUNC_6(VAR_3, &VAR_7->flags);
   FUNC_5(VAR_5);
   FUNC_2(VAR_4, VAR_8, VAR_1);
  }
 }

 FUNC_1(VAR_6, "__platform_pm_runtime_suspend() [%d] - returns %d\n",
  VAR_8, VAR_9);

 return VAR_9;
}
