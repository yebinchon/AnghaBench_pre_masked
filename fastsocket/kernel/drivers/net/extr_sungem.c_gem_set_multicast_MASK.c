
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct gem {int mac_rx_cfg; int lock; int tx_lock; scalar_t__ regs; int running; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gem*) ;
 struct gem* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_5)
{
 struct gem *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7, VAR_8;
 int VAR_9 = 10000;


 FUNC_6(&VAR_6->lock);
 FUNC_5(&VAR_6->tx_lock);

 if (!VAR_6->running)
  goto bail;

 FUNC_2(VAR_5);

 VAR_7 = FUNC_4(VAR_6->regs + VAR_0);
 VAR_8 = FUNC_0(VAR_6);



 VAR_6->mac_rx_cfg = VAR_8;

 FUNC_10(VAR_7 & ~VAR_1, VAR_6->regs + VAR_0);
 while (FUNC_4(VAR_6->regs + VAR_0) & VAR_1) {
  if (!VAR_9--)
   break;
  FUNC_9(10);
 }

 VAR_7 &= ~(VAR_3 | VAR_2);
 VAR_7 |= VAR_8;

 FUNC_10(VAR_7, VAR_6->regs + VAR_0);

 FUNC_3(VAR_5);

 bail:
 FUNC_7(&VAR_6->tx_lock);
 FUNC_8(&VAR_6->lock);
}
