
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ht_irq_msg {int address_lo; } ;
struct ht_irq_cfg {struct ht_irq_msg msg; } ;


 struct ht_irq_cfg* FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int,struct ht_irq_msg*) ;

void FUNC_2(unsigned int VAR_0)
{
 struct ht_irq_cfg *VAR_1;
 struct ht_irq_msg VAR_2;

 VAR_1 = FUNC_0(VAR_0);

 VAR_2 = VAR_1->msg;
 VAR_2.address_lo |= 1;
 FUNC_1(VAR_0, &VAR_2);
}
