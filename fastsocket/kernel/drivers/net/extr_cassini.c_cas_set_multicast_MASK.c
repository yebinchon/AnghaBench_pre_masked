
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct cas {int mac_rx_cfg; int lock; scalar_t__ regs; int hw_running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cas*) ;
 struct cas* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_5)
{
 struct cas *VAR_6 = FUNC_1(VAR_5);
 u32 VAR_7, VAR_8;
 unsigned long VAR_9;
 int VAR_10 = VAR_4;

 if (!VAR_6->hw_running)
  return;

 FUNC_3(&VAR_6->lock, VAR_9);
 VAR_7 = FUNC_2(VAR_6->regs + VAR_3);


 FUNC_6(VAR_7 & ~VAR_0, VAR_6->regs + VAR_3);
 while (FUNC_2(VAR_6->regs + VAR_3) & VAR_0) {
  if (!VAR_10--)
   break;
  FUNC_5(10);
 }


 VAR_10 = VAR_4;
 VAR_7 &= ~(VAR_2 | VAR_1);
 FUNC_6(VAR_7 & ~VAR_0, VAR_6->regs + VAR_3);
 while (FUNC_2(VAR_6->regs + VAR_3) & VAR_1) {
  if (!VAR_10--)
   break;
  FUNC_5(10);
 }


 VAR_6->mac_rx_cfg = VAR_8 = FUNC_0(VAR_6);
 VAR_7 |= VAR_8;
 FUNC_6(VAR_7, VAR_6->regs + VAR_3);
 FUNC_4(&VAR_6->lock, VAR_9);
}
