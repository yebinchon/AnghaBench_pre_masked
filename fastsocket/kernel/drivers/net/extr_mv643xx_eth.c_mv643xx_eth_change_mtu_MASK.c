
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; int dev; } ;
struct mv643xx_eth_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,char*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct mv643xx_eth_private*) ;
 int FUNC_3 (struct net_device*) ;
 struct mv643xx_eth_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct mv643xx_eth_private*,int,int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2, int VAR_3)
{
 struct mv643xx_eth_private *VAR_4 = FUNC_4(VAR_2);

 if (VAR_3 < 64 || VAR_3 > 9500)
  return -VAR_0;

 VAR_2->mtu = VAR_3;
 FUNC_2(VAR_4);
 FUNC_6(VAR_4, 1000000000, 16777216);

 if (!FUNC_5(VAR_2))
  return 0;







 FUNC_3(VAR_2);
 if (FUNC_1(VAR_2)) {
  FUNC_0(VAR_1, &VAR_2->dev,
      "fatal error on re-opening device after "
      "MTU change\n");
 }

 return 0;
}
