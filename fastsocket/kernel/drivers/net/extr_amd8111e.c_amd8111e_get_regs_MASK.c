
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_regs {scalar_t__ version; } ;
struct amd8111e_priv {int dummy; } ;


 int FUNC_0 (struct amd8111e_priv*,void*) ;
 struct amd8111e_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, struct ethtool_regs *VAR_1, void *VAR_2)
{
 struct amd8111e_priv *VAR_3 = FUNC_1(VAR_0);
 VAR_1->version = 0;
 FUNC_0(VAR_3, VAR_2);
}
