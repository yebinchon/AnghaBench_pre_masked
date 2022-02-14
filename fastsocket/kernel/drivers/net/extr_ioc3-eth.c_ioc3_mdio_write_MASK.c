
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ioc3_private {struct ioc3* regs; } ;
struct ioc3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct ioc3_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct ioc3_private *VAR_6 = FUNC_3(VAR_2);
 struct ioc3 *VAR_7 = VAR_6->regs;

 while (FUNC_0() & VAR_0);
 FUNC_2(VAR_5);
 FUNC_1((VAR_3 << VAR_1) | VAR_4);
 while (FUNC_0() & VAR_0);
}
