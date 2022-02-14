
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mv643xx_eth_private {int dummy; } ;


 int VAR_0 ;
 struct mv643xx_eth_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mv643xx_eth_private*,int ) ;

__attribute__((used)) static u32
FUNC_2(struct net_device *VAR_1)
{
 struct mv643xx_eth_private *VAR_2 = FUNC_0(VAR_1);

 return !!(FUNC_1(VAR_2, VAR_0) & 0x02000000);
}
