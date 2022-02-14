
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ioc3_private {struct ioc3* regs; } ;
struct ioc3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 struct ioc3_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4, int VAR_5, int VAR_6)
{
 struct ioc3_private *VAR_7 = FUNC_3(VAR_4);
 struct ioc3 *VAR_8 = VAR_7->regs;

 while (FUNC_0() & VAR_0);
 FUNC_2((VAR_5 << VAR_1) | VAR_6 | VAR_2);
 while (FUNC_0() & VAR_0);

 return FUNC_1() & VAR_3;
}
