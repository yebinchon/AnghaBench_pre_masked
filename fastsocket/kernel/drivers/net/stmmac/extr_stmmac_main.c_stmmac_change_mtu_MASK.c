
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {scalar_t__ is_gmac; } ;
struct net_device {int mtu; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int ,...) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, int VAR_5)
{
 struct stmmac_priv *VAR_6 = FUNC_0(VAR_4);
 int VAR_7;

 if (FUNC_1(VAR_4)) {
  FUNC_2("%s: must be stopped to change its MTU\n", VAR_4->name);
  return -VAR_0;
 }

 if (VAR_6->is_gmac)
  VAR_7 = VAR_3;
 else
  VAR_7 = VAR_2;

 if ((VAR_5 < 46) || (VAR_5 > VAR_7)) {
  FUNC_2("%s: invalid MTU, max MTU is: %d\n", VAR_4->name, VAR_7);
  return -VAR_1;
 }

 VAR_4->mtu = VAR_5;

 return 0;
}
