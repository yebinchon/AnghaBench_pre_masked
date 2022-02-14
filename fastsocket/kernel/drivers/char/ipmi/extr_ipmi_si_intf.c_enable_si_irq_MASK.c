
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {scalar_t__ interrupt_disabled; scalar_t__ irq; } ;


 int FUNC_0 (struct smi_info*) ;

__attribute__((used)) static inline void FUNC_1(struct smi_info *VAR_0)
{
 if ((VAR_0->irq) && (VAR_0->interrupt_disabled)) {
  FUNC_0(VAR_0);
  VAR_0->interrupt_disabled = 0;
 }
}
