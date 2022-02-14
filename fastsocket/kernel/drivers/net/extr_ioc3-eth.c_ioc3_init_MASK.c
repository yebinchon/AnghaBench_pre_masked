
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ioc3_private {int emcr; int ehar_l; int ehar_h; int ioc3_timer; struct ioc3* regs; } ;
struct ioc3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;
 struct ioc3_private* FUNC_14 (struct net_device*) ;
 int FUNC_15 (int) ;

__attribute__((used)) static void FUNC_16(struct net_device *VAR_17)
{
 struct ioc3_private *VAR_18 = FUNC_14(VAR_17);
 struct ioc3 *VAR_19 = VAR_18->regs;

 FUNC_1(&VAR_18->ioc3_timer);

 FUNC_9(VAR_9);
 (void) FUNC_4();
 FUNC_15(4);
 FUNC_9(0);
 (void) FUNC_4();





 FUNC_10(0);

 (void) FUNC_5();
 FUNC_11(15);
 FUNC_13(0);
 FUNC_0(VAR_17);
 FUNC_6(VAR_18->ehar_h);
 FUNC_7(VAR_18->ehar_l);
 FUNC_12(42);

 FUNC_2(VAR_17);

 VAR_18->emcr |= ((VAR_16 / 2) << VAR_12) | VAR_13 |
              VAR_14 | VAR_10 | VAR_11 | VAR_8;
 FUNC_9(VAR_18->emcr);
 FUNC_8(VAR_4 | VAR_2 | VAR_0 |
             VAR_1 | VAR_3 | VAR_5 |
             VAR_6 | VAR_7);
 (void) FUNC_3();
}
