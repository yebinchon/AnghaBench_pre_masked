
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mv643xx_eth_private {int dev; int * phy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct mv643xx_eth_private* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct mv643xx_eth_private *VAR_1 = FUNC_3(VAR_0);

 FUNC_5(VAR_1->dev);
 if (VAR_1->phy != ((void*)0))
  FUNC_2(VAR_1->phy);
 FUNC_0();
 FUNC_1(VAR_1->dev);

 FUNC_4(VAR_0, ((void*)0));

 return 0;
}
