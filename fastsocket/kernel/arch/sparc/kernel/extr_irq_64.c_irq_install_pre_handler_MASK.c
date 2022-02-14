
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_handler_data {void (* pre_handler ) (unsigned int,void*,void*) ;void* arg2; void* arg1; } ;
struct irq_desc {int handle_irq; } ;


 struct irq_handler_data* FUNC_0 (int) ;
 struct irq_desc* VAR_0 ;
 int VAR_1 ;

void FUNC_1(int VAR_2,
        void (*VAR_3)(unsigned int, void *, void *),
        void *VAR_4, void *VAR_5)
{
 struct irq_handler_data *VAR_6 = FUNC_0(VAR_2);
 struct irq_desc *VAR_7 = VAR_0 + VAR_2;

 VAR_6->pre_handler = VAR_3;
 VAR_6->arg1 = VAR_4;
 VAR_6->arg2 = VAR_5;

 VAR_7->handle_irq = VAR_1;
}
