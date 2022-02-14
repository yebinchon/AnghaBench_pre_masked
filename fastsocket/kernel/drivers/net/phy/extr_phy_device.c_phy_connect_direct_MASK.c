
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {scalar_t__ irq; } ;
struct net_device {int dummy; } ;
typedef int phy_interface_t ;


 int FUNC_0 (struct net_device*,struct phy_device*,int ,int ) ;
 int FUNC_1 (struct phy_device*,void (*) (struct net_device*)) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*,int *) ;

int FUNC_4(struct net_device *VAR_0, struct phy_device *VAR_1,
         void (*VAR_2)(struct net_device *), u32 VAR_3,
         phy_interface_t VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_1, VAR_2);
 FUNC_3(VAR_1, ((void*)0));
 if (VAR_1->irq > 0)
  FUNC_2(VAR_1);

 return 0;
}
