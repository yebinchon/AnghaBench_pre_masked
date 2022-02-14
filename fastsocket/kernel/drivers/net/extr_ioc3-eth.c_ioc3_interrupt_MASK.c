
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ioc3_private {struct ioc3* regs; } ;
struct ioc3 {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ioc3_private*,int) ;
 int const FUNC_1 () ;
 int FUNC_2 (struct ioc3_private*) ;
 int FUNC_3 (struct ioc3_private*) ;
 int FUNC_4 (int) ;
 struct ioc3_private* FUNC_5 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_9, void *VAR_10)
{
 struct net_device *VAR_11 = (struct net_device *)VAR_10;
 struct ioc3_private *VAR_12 = FUNC_5(VAR_11);
 struct ioc3 *VAR_13 = VAR_12->regs;
 const u32 VAR_14 = VAR_4 | VAR_2 | VAR_0 |
                     VAR_1 | VAR_3 | VAR_5 |
                     VAR_6 | VAR_7;
 u32 VAR_15;

 VAR_15 = FUNC_1() & VAR_14;

 FUNC_4(VAR_15);
 (void) FUNC_1();

 if (VAR_15 & (VAR_2 | VAR_0 | VAR_1 |
             VAR_3 | VAR_5 | VAR_7))
  FUNC_0(VAR_12, VAR_15);
 if (VAR_15 & VAR_4)
  FUNC_2(VAR_12);
 if (VAR_15 & VAR_6)
  FUNC_3(VAR_12);

 return VAR_8;
}
