
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;
struct cpmac_priv {int phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifreq*) ;
 struct cpmac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5, struct ifreq *VAR_6, int VAR_7)
{
 struct cpmac_priv *VAR_8 = FUNC_1(VAR_5);
 if (!(FUNC_2(VAR_5)))
  return -VAR_0;
 if (!VAR_8->phy)
  return -VAR_0;
 if ((VAR_7 == VAR_2) || (VAR_7 == VAR_3) ||
     (VAR_7 == VAR_4))
  return FUNC_3(VAR_8->phy, FUNC_0(VAR_6), VAR_7);

 return -VAR_1;
}
