
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int (* ipipe_ack ) (unsigned int,struct irq_desc*) ;} ;


 int FUNC_0 (unsigned int,struct irq_desc*) ;

__attribute__((used)) static void FUNC_1(unsigned VAR_0, struct irq_desc *VAR_1)
{
 VAR_1->ipipe_ack(VAR_0, VAR_1);
}
