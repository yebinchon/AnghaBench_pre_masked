
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int pwm_cycle_p; int* sh2irq_mask; int pwm_irq_cnt; } ;
typedef int SH2 ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,unsigned int,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(SH2 *VAR_2, unsigned int VAR_3)
{
  unsigned int VAR_4 = VAR_3 * 3;
  int VAR_5;

  if (VAR_1 == 0)
    return 0;

  VAR_5 = VAR_4 - VAR_0.pwm_cycle_p;
  if (VAR_5 >= VAR_1)
    FUNC_0(VAR_2, VAR_3, VAR_5);

  if (!((VAR_0.sh2irq_mask[0] | VAR_0.sh2irq_mask[1]) & 1))
    return 0;

  VAR_5 = VAR_4 - VAR_0.pwm_cycle_p;
  return (VAR_0.pwm_irq_cnt * VAR_1
           - VAR_5) / 3 + 1;
}
