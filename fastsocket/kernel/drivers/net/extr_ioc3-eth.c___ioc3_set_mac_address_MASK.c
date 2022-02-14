
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int* dev_addr; } ;
struct ioc3_private {struct ioc3* regs; } ;
struct ioc3 {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct ioc3_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct ioc3_private *VAR_1 = FUNC_2(VAR_0);
 struct ioc3 *VAR_2 = VAR_1->regs;

 FUNC_0((VAR_0->dev_addr[5] << 8) | VAR_0->dev_addr[4]);
 FUNC_1((VAR_0->dev_addr[3] << 24) | (VAR_0->dev_addr[2] << 16) |
               (VAR_0->dev_addr[1] << 8) | VAR_0->dev_addr[0]);
}
