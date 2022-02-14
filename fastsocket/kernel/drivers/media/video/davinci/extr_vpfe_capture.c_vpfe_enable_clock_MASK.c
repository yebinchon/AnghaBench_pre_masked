
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_device {TYPE_1__* pdev; struct vpfe_config* cfg; } ;
struct vpfe_config {int * slaveclk; int * vpssclk; } ;
struct TYPE_2__ {int driver; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct vpfe_device *VAR_1)
{
 struct vpfe_config *VAR_2 = VAR_1->cfg;
 int VAR_3 = -VAR_0;

 VAR_2->vpssclk = FUNC_1(VAR_1->pdev, "vpss_master");
 if (((void*)0) == VAR_2->vpssclk) {
  FUNC_3(VAR_1->pdev->driver, "No clock defined for"
    "vpss_master\n");
  return VAR_3;
 }

 if (FUNC_0(VAR_2->vpssclk)) {
  FUNC_3(VAR_1->pdev->driver,
   "vpfe vpss master clock not enabled\n");
  goto out;
 }
 FUNC_4(VAR_1->pdev->driver,
   "vpfe vpss master clock enabled\n");

 VAR_2->slaveclk = FUNC_1(VAR_1->pdev, "vpss_slave");
 if (((void*)0) == VAR_2->slaveclk) {
  FUNC_3(VAR_1->pdev->driver,
   "No clock defined for vpss slave\n");
  goto out;
 }

 if (FUNC_0(VAR_2->slaveclk)) {
  FUNC_3(VAR_1->pdev->driver,
    "vpfe vpss slave clock not enabled\n");
  goto out;
 }
 FUNC_4(VAR_1->pdev->driver, "vpfe vpss slave clock enabled\n");
 return 0;
out:
 if (VAR_2->vpssclk)
  FUNC_2(VAR_2->vpssclk);
 if (VAR_2->slaveclk)
  FUNC_2(VAR_2->slaveclk);

 return -1;
}
