
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_eth_private {int phydev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sh_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 struct sh_eth_private *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  return VAR_4;


 FUNC_2(VAR_3->phydev, VAR_1, VAR_0);
 FUNC_1(VAR_3->phydev);

 return 0;
}
