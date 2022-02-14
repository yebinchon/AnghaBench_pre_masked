
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mpc52xx_fec_priv {int phydev; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifreq*) ;
 struct mpc52xx_fec_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct mpc52xx_fec_priv *VAR_4 = FUNC_1(VAR_1);

 if (!VAR_4->phydev)
  return -VAR_0;

 return FUNC_2(VAR_4->phydev, FUNC_0(VAR_2), VAR_3);
}
