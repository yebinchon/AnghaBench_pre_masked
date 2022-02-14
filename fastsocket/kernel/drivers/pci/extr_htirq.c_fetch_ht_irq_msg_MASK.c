
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ht_irq_msg {int dummy; } ;
struct ht_irq_cfg {struct ht_irq_msg msg; } ;


 struct ht_irq_cfg* FUNC_0 (unsigned int) ;

void FUNC_1(unsigned int VAR_0, struct ht_irq_msg *VAR_1)
{
 struct ht_irq_cfg *VAR_2 = FUNC_0(VAR_0);
 *VAR_1 = VAR_2->msg;
}
