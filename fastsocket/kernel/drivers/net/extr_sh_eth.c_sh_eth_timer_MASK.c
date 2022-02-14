
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_eth_private {int timer; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 struct sh_eth_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_2)
{
 struct net_device *VAR_3 = (struct net_device *)VAR_2;
 struct sh_eth_private *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(&VAR_4->timer, VAR_1 + (10 * VAR_0));
}
