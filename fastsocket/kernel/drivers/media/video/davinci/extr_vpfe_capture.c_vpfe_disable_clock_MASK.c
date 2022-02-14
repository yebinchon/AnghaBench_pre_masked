
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_device {TYPE_1__* pdev; struct vpfe_config* cfg; } ;
struct vpfe_config {int slaveclk; int vpssclk; } ;
struct TYPE_2__ {int driver; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void FUNC_3(struct vpfe_device *VAR_0)
{
 struct vpfe_config *VAR_1 = VAR_0->cfg;

 FUNC_0(VAR_1->vpssclk);
 FUNC_1(VAR_1->vpssclk);
 FUNC_0(VAR_1->slaveclk);
 FUNC_1(VAR_1->slaveclk);
 FUNC_2(VAR_0->pdev->driver,
   "vpfe vpss master & slave clocks disabled\n");
}
