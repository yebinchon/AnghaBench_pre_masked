
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbe_iic_pending_bits {int source; int class; int flags; int prio; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static irq_hw_number_t FUNC_0(struct cbe_iic_pending_bits VAR_3)
{
 unsigned char VAR_4 = VAR_3.source & 0xf;
 unsigned char VAR_5 = VAR_3.source >> 4;
 unsigned char VAR_6 = VAR_3.class & 3;


 if (VAR_3.flags & VAR_0)
  return VAR_2 | (VAR_3.prio >> 4);
 else
  return (VAR_5 << VAR_1) | (VAR_6 << 4) | VAR_4;
}
