
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sge {TYPE_1__* adapter; } ;
struct TYPE_2__ {int flags; scalar_t__ regs; } ;


 scalar_t__ A_PL_ENABLE ;
 scalar_t__ A_SG_INT_ENABLE ;
 int F_PACKET_TOO_BIG ;
 int SGE_INT_ENABLE ;
 int SGE_PL_INTR_MASK ;
 int TSO_CAPABLE ;
 int readl (scalar_t__) ;
 int writel (int,scalar_t__) ;

void t1_sge_intr_enable(struct sge *sge)
{
 u32 en = SGE_INT_ENABLE;
 u32 val = readl(sge->adapter->regs + A_PL_ENABLE);

 if (sge->adapter->flags & TSO_CAPABLE)
  en &= ~F_PACKET_TOO_BIG;
 writel(en, sge->adapter->regs + A_SG_INT_ENABLE);
 writel(val | SGE_PL_INTR_MASK, sge->adapter->regs + A_PL_ENABLE);
}
