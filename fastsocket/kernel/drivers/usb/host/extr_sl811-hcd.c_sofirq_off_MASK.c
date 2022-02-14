
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sl811 {int irq_enable; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static inline void FUNC_1(struct sl811 *VAR_1)
{
 if (!(VAR_1->irq_enable & VAR_0))
  return;
 FUNC_0("sof irq off\n");
 VAR_1->irq_enable &= ~VAR_0;
}
