
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* sh2irq_mask; int* regs; int * sh2irqi; } ;
typedef int SH2 ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int) ;

void FUNC_1(SH2 *VAR_2, int VAR_3)
{
  if ((VAR_1.sh2irq_mask[0] & 2) && (VAR_1.regs[2 / 2] & 1))
    VAR_1.sh2irqi[0] |= VAR_0;
  else
    VAR_1.sh2irqi[0] &= ~VAR_0;

  if ((VAR_1.sh2irq_mask[1] & 2) && (VAR_1.regs[2 / 2] & 2))
    VAR_1.sh2irqi[1] |= VAR_0;
  else
    VAR_1.sh2irqi[1] &= ~VAR_0;

  FUNC_0(VAR_2, VAR_3);
}
