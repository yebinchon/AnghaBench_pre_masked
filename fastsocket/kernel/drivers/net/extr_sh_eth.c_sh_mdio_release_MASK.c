
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct mii_bus {int dummy; } ;


 struct mii_bus* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct mii_bus*) ;
 int FUNC_3 (struct mii_bus*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct mii_bus *VAR_1 = FUNC_0(&VAR_0->dev);


 FUNC_3(VAR_1);


 FUNC_1(&VAR_0->dev, ((void*)0));


 FUNC_2(VAR_1);

 return 0;
}
