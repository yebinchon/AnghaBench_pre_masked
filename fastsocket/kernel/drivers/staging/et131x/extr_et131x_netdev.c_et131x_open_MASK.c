
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int irq; int name; } ;
struct et131x_adapter {int Flags; TYPE_1__* pdev; int ErrorTimer; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct et131x_adapter*) ;
 int VAR_1 ;
 int FUNC_3 (struct et131x_adapter*) ;
 int FUNC_4 (struct et131x_adapter*) ;
 int VAR_2 ;
 struct et131x_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ,int ,int ,struct net_device*) ;

int FUNC_8(struct net_device *VAR_3)
{
 int VAR_4 = 0;
 struct et131x_adapter *VAR_5 = FUNC_5(VAR_3);


 FUNC_0(&VAR_5->ErrorTimer);


 VAR_4 = FUNC_7(VAR_3->irq, VAR_1, VAR_0,
     VAR_3->name, VAR_3);
 if (VAR_4) {
  FUNC_1(&VAR_5->pdev->dev, "c ould not register IRQ %d\n",
   VAR_3->irq);
  return VAR_4;
 }


 FUNC_3(VAR_5);
 FUNC_4(VAR_5);


 FUNC_2(VAR_5);

 VAR_5->Flags |= VAR_2;


 FUNC_6(VAR_3);
 return VAR_4;
}
