
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct mv643xx_eth_private {int dummy; } ;


 int VAR_0 ;
 struct mv643xx_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mv643xx_eth_private*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1, u32 VAR_2)
{
 struct mv643xx_eth_private *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_3, VAR_0, VAR_2 ? 0x02000000 : 0x00000000);

 return 0;
}
