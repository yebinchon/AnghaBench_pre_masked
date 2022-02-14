
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ebus_dma_info {int flags; int irq; int lock; scalar_t__ regs; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct ebus_dma_info*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,struct ebus_dma_info*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,scalar_t__) ;

int FUNC_6(struct ebus_dma_info *VAR_6, int VAR_7)
{
 unsigned long VAR_8;
 u32 VAR_9;

 if (VAR_7) {
  if (VAR_6->flags & VAR_3) {
   if (FUNC_2(VAR_6->irq, VAR_5, VAR_4, VAR_6->name, VAR_6))
    return -VAR_2;
  }

  FUNC_3(&VAR_6->lock, VAR_8);
  VAR_9 = FUNC_1(VAR_6->regs + VAR_0);
  VAR_9 |= VAR_1;
  FUNC_5(VAR_9, VAR_6->regs + VAR_0);
  FUNC_4(&VAR_6->lock, VAR_8);
 } else {
  FUNC_3(&VAR_6->lock, VAR_8);
  VAR_9 = FUNC_1(VAR_6->regs + VAR_0);
  VAR_9 &= ~VAR_1;
  FUNC_5(VAR_9, VAR_6->regs + VAR_0);
  FUNC_4(&VAR_6->lock, VAR_8);

  if (VAR_6->flags & VAR_3) {
   FUNC_0(VAR_6->irq, VAR_6);
  }
 }

 return 0;
}
