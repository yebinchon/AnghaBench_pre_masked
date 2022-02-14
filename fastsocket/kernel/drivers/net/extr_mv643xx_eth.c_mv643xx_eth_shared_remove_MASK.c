
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mv643xx_eth_shared_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mv643xx_eth_shared_private {scalar_t__ err_interrupt; int base; int smi_bus; } ;
struct mv643xx_eth_shared_platform_data {int * shared_smi; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,struct mv643xx_eth_shared_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mv643xx_eth_shared_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct mv643xx_eth_shared_private* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct mv643xx_eth_shared_private *VAR_2 = FUNC_5(VAR_1);
 struct mv643xx_eth_shared_platform_data *VAR_3 = VAR_1->dev.platform_data;

 if (VAR_3 == ((void*)0) || VAR_3->shared_smi == ((void*)0)) {
  FUNC_4(VAR_2->smi_bus);
  FUNC_3(VAR_2->smi_bus);
 }
 if (VAR_2->err_interrupt != VAR_0)
  FUNC_0(VAR_2->err_interrupt, VAR_2);
 FUNC_1(VAR_2->base);
 FUNC_2(VAR_2);

 return 0;
}
