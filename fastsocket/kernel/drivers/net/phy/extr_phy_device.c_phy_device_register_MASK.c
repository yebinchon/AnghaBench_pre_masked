
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {size_t addr; TYPE_1__* bus; int dev; } ;
struct TYPE_2__ {struct phy_device** phy_map; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (char*,size_t) ;

int FUNC_3(struct phy_device *VAR_1)
{
 int VAR_2;



 if (VAR_1->bus->phy_map[VAR_1->addr])
  return -VAR_0;
 VAR_1->bus->phy_map[VAR_1->addr] = VAR_1;


 FUNC_1(VAR_1);

 VAR_2 = FUNC_0(&VAR_1->dev);
 if (VAR_2) {
  FUNC_2("phy %d failed to register\n", VAR_1->addr);
  goto out;
 }

 return 0;

 out:
 VAR_1->bus->phy_map[VAR_1->addr] = ((void*)0);
 return VAR_2;
}
