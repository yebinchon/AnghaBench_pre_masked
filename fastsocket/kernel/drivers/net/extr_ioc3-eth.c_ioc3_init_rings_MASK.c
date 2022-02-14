
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ioc3_private {int rx_ci; int rx_pi; int tx_pi; int tx_ci; scalar_t__ txqlen; int txr; int rxr; struct ioc3* regs; } ;
struct ioc3 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ioc3_private*) ;
 int FUNC_2 (struct ioc3_private*) ;
 int FUNC_3 (struct ioc3_private*) ;
 unsigned long FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (unsigned long) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 struct ioc3_private* FUNC_14 (struct net_device*) ;

__attribute__((used)) static void FUNC_15(struct net_device *VAR_1)
{
 struct ioc3_private *VAR_2 = FUNC_14(VAR_1);
 struct ioc3 *VAR_3 = VAR_2->regs;
 unsigned long VAR_4;

 FUNC_3(VAR_2);
 FUNC_0(VAR_1);

 FUNC_1(VAR_2);
 FUNC_2(VAR_2);


 VAR_4 = FUNC_4(VAR_2->rxr, 0);
 FUNC_6(VAR_4 >> 32);
 FUNC_7(VAR_4 & 0xffffffff);
 FUNC_8(VAR_2->rx_ci << 3);
 FUNC_9((VAR_2->rx_pi << 3) | VAR_0);

 VAR_4 = FUNC_4(VAR_2->txr, 0);

 VAR_2->txqlen = 0;


 FUNC_10(VAR_4 >> 32);
 FUNC_11(VAR_4 & 0xffffffff);
 FUNC_13(VAR_2->tx_pi << 7);
 FUNC_12(VAR_2->tx_ci << 7);
 (void) FUNC_5();
}
