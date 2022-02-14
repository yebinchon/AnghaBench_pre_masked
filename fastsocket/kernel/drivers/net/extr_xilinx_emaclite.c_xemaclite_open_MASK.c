
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_local {TYPE_1__* ndev; } ;
struct net_device {int irq; int name; int dev_addr; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *,int ,int ,struct net_device*) ;
 int FUNC_4 (struct net_local*) ;
 int FUNC_5 (struct net_local*) ;
 int VAR_0 ;
 int FUNC_6 (struct net_local*,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct net_local *VAR_2 = (struct net_local *) FUNC_1(VAR_1);
 int VAR_3;


 FUNC_4(VAR_2);


 FUNC_6(VAR_2, VAR_1->dev_addr);


 VAR_3 = FUNC_3(VAR_1->irq, &VAR_0, 0, VAR_1->name, VAR_1);
 if (VAR_3) {
  FUNC_0(&VAR_2->ndev->dev, "Could not allocate interrupt %d\n",
   VAR_1->irq);
  return VAR_3;
 }


 FUNC_5(VAR_2);


 FUNC_2(VAR_1);

 return 0;
}
