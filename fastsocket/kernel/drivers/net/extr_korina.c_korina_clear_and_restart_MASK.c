
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct korina_private {TYPE_1__* eth_regs; } ;
struct TYPE_2__ {int ethintfc; } ;


 int FUNC_0 (struct net_device*) ;
 struct korina_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0, u32 VAR_1)
{
 struct korina_private *VAR_2 = FUNC_1(VAR_0);

 FUNC_2(VAR_0);
 FUNC_3(VAR_1, &VAR_2->eth_regs->ethintfc);
 FUNC_0(VAR_0);
}
