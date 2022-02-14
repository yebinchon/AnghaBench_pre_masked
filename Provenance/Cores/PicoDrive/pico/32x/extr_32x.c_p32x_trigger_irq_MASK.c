
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int sh2irqs; unsigned int* sh2irqi; int* sh2irq_mask; } ;
typedef int SH2 ;


 unsigned int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int) ;

void FUNC_1(SH2 *VAR_2, int VAR_3, unsigned int VAR_4)
{
  VAR_1.sh2irqs |= VAR_4 & VAR_0;
  VAR_1.sh2irqi[0] |= VAR_4 & (VAR_1.sh2irq_mask[0] << 3);
  VAR_1.sh2irqi[1] |= VAR_4 & (VAR_1.sh2irq_mask[1] << 3);

  FUNC_0(VAR_2, VAR_3);
}
