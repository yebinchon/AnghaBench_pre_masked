
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int handle_irq; } ;
typedef int irq_flow_handler_t ;


 int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 struct irq_desc* VAR_1 ;

__attribute__((used)) static inline void FUNC_1(unsigned VAR_2, irq_flow_handler_t VAR_3)
{



 struct irq_desc *VAR_4 = VAR_1 + VAR_2;


 VAR_4->handle_irq = VAR_3;

}
