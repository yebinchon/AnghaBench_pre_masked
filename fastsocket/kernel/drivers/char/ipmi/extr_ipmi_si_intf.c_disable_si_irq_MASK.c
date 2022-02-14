
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {int interrupt_disabled; int si_timer; int stop_operation; scalar_t__ irq; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct smi_info*) ;

__attribute__((used)) static inline void FUNC_3(struct smi_info *VAR_2)
{
 if ((VAR_2->irq) && (!VAR_2->interrupt_disabled)) {
  FUNC_2(VAR_2);
  VAR_2->interrupt_disabled = 1;
  if (!FUNC_0(&VAR_2->stop_operation))
   FUNC_1(&VAR_2->si_timer, VAR_1 + VAR_0);
 }
}
