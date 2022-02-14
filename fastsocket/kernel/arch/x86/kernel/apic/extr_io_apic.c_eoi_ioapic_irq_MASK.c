
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {unsigned int irq; struct irq_cfg* chip_data; } ;
struct irq_cfg {int dummy; } ;


 int FUNC_0 (unsigned int,struct irq_cfg*) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct irq_desc *VAR_1)
{
 struct irq_cfg *VAR_2;
 unsigned long VAR_3;
 unsigned int VAR_4;

 VAR_4 = VAR_1->irq;
 VAR_2 = VAR_1->chip_data;

 FUNC_1(&VAR_0, VAR_3);
 FUNC_0(VAR_4, VAR_2);
 FUNC_2(&VAR_0, VAR_3);
}
