
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct saa7146_dev {scalar_t__ ext_priv; } ;
struct TYPE_3__ {scalar_t__ ci_present; } ;
struct TYPE_4__ {int msp430_irq_tasklet; } ;
struct budget_ci {int ciintf_irq_tasklet; scalar_t__ ci_irq; TYPE_1__ budget; TYPE_2__ ir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,struct saa7146_dev*,struct budget_ci*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct saa7146_dev*,int*) ;

__attribute__((used)) static void FUNC_3(struct saa7146_dev *VAR_3, u32 * VAR_4)
{
 struct budget_ci *VAR_5 = (struct budget_ci *) VAR_3->ext_priv;

 FUNC_0(8, "dev: %p, budget_ci: %p\n", VAR_3, VAR_5);

 if (*VAR_4 & VAR_1)
  FUNC_1(&VAR_5->ir.msp430_irq_tasklet);

 if (*VAR_4 & VAR_2)
  FUNC_2(VAR_3, VAR_4);

 if ((*VAR_4 & VAR_0) && (VAR_5->budget.ci_present) && (VAR_5->ci_irq))
  FUNC_1(&VAR_5->ciintf_irq_tasklet);
}
