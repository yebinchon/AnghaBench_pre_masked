
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct jme_adapter {int rxmcs_lock; int reg_rxmcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct jme_adapter*,int ,int ) ;
 struct jme_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_2, u32 VAR_3)
{
 struct jme_adapter *VAR_4 = FUNC_1(VAR_2);

 FUNC_2(&VAR_4->rxmcs_lock);
 if (VAR_3)
  VAR_4->reg_rxmcs |= VAR_1;
 else
  VAR_4->reg_rxmcs &= ~VAR_1;
 FUNC_0(VAR_4, VAR_0, VAR_4->reg_rxmcs);
 FUNC_3(&VAR_4->rxmcs_lock);

 return 0;
}
