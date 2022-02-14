
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ace_device {scalar_t__ irq; scalar_t__ fsm_continue_flag; int fsm_tasklet; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct ace_device *VAR_1)
{
 FUNC_0(VAR_1->dev, "ace_fsm_yieldirq()\n");

 if (VAR_1->irq == VAR_0)

  FUNC_1(&VAR_1->fsm_tasklet);
 VAR_1->fsm_continue_flag = 0;
}
