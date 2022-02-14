
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_priv {int lock; int phydev; } ;
struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct ifreq*) ;
 struct stmmac_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2, struct ifreq *VAR_3, int VAR_4)
{
 struct stmmac_priv *VAR_5 = FUNC_1(VAR_2);
 int VAR_6 = -VAR_1;

 if (!FUNC_2(VAR_2))
  return -VAR_0;

 switch (VAR_4) {
 case 130:
 case 129:
 case 128:
  if (!VAR_5->phydev)
   return -VAR_0;

  FUNC_4(&VAR_5->lock);
  VAR_6 = FUNC_3(VAR_5->phydev, FUNC_0(VAR_3), VAR_4);
  FUNC_5(&VAR_5->lock);
 default:
  break;
 }
 return VAR_6;
}
