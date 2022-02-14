
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;
struct et131x_adapter {int ErrorTimer; int Flags; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct et131x_adapter*) ;
 int FUNC_2 (struct et131x_adapter*) ;
 int FUNC_3 (struct et131x_adapter*) ;
 int VAR_0 ;
 int FUNC_4 (int ,struct net_device*) ;
 struct et131x_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

int FUNC_7(struct net_device *VAR_1)
{
 struct et131x_adapter *VAR_2 = FUNC_5(VAR_1);


 FUNC_6(VAR_1);


 FUNC_2(VAR_2);
 FUNC_3(VAR_2);


 FUNC_1(VAR_2);


 VAR_2->Flags &= ~VAR_0;
 FUNC_4(VAR_1->irq, VAR_1);


 FUNC_0(&VAR_2->ErrorTimer);
 return 0;
}
