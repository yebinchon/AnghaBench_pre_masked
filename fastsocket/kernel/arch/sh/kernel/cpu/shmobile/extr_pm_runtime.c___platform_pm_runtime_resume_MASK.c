
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
struct TYPE_3__ {int (* runtime_resume ) (struct device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 int FUNC_4 (struct device*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_3)
{
 struct device *VAR_4 = &VAR_3->dev;
 struct pdev_archdata *VAR_5 = &VAR_3->archdata;
 int VAR_6 = VAR_5->hwblk_id;
 int VAR_7 = -VAR_0;

 FUNC_1(VAR_4, "__platform_pm_runtime_resume() [%d]\n", VAR_6);

 if (VAR_4->driver && VAR_4->driver->pm && VAR_4->driver->pm->runtime_resume) {
  FUNC_3(VAR_2, VAR_6);
  VAR_7 = 0;

  if (FUNC_5(VAR_1, &VAR_5->flags)) {
   VAR_7 = VAR_4->driver->pm->runtime_resume(VAR_4);
   if (!VAR_7)
    FUNC_0(VAR_1, &VAR_5->flags);
   else
    FUNC_2(VAR_2, VAR_6);
  }
 }

 FUNC_1(VAR_4, "__platform_pm_runtime_resume() [%d] - returns %d\n",
  VAR_6, VAR_7);

 return VAR_7;
}
