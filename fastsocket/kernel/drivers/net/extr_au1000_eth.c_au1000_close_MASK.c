
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; int name; } ;
struct au1000_private {int lock; scalar_t__ phy_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct net_device*) ;
 struct au1000_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ,struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1)
{
 unsigned long VAR_2;
 struct au1000_private *const VAR_3 = FUNC_1(VAR_1);

 if (VAR_0 > 4)
  FUNC_4("%s: close: dev=%p\n", VAR_1->name, VAR_1);

 if (VAR_3->phy_dev)
  FUNC_3(VAR_3->phy_dev);

 FUNC_6(&VAR_3->lock, VAR_2);

 FUNC_5 (VAR_1);


 FUNC_2(VAR_1);


 FUNC_0(VAR_1->irq, VAR_1);
 FUNC_7(&VAR_3->lock, VAR_2);

 return 0;
}
