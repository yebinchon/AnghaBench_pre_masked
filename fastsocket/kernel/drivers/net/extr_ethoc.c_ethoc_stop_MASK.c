
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; } ;
struct ethoc {scalar_t__ phy; int napi; } ;


 int FUNC_0 (struct ethoc*) ;
 int FUNC_1 (int ,struct net_device*) ;
 int FUNC_2 (int *) ;
 struct ethoc* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_0)
{
 struct ethoc *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(&VAR_1->napi);

 if (VAR_1->phy)
  FUNC_6(VAR_1->phy);

 FUNC_0(VAR_1);
 FUNC_1(VAR_0->irq, VAR_0);

 if (!FUNC_4(VAR_0))
  FUNC_5(VAR_0);

 return 0;
}
