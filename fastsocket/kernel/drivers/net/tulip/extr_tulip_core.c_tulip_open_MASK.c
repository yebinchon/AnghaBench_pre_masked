
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *,int ,int ,struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_2)
{
 int VAR_3;

 FUNC_3 (VAR_2);

 VAR_3 = FUNC_1(VAR_2->irq, &VAR_1, VAR_0, VAR_2->name, VAR_2);
 if (VAR_3)
  goto free_ring;

 FUNC_4 (VAR_2);

 FUNC_0 (VAR_2);

 return 0;

free_ring:
 FUNC_2 (VAR_2);
 return VAR_3;
}
