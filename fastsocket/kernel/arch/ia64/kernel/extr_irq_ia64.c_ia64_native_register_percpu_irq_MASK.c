
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irqaction {int dummy; } ;
struct irq_desc {int * chip; int status; } ;
typedef unsigned int ia64_vector ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned int,unsigned int,int ) ;
 struct irq_desc* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned int,struct irqaction*) ;

void
FUNC_3 (ia64_vector VAR_4, struct irqaction *VAR_5)
{
 struct irq_desc *VAR_6;
 unsigned int VAR_7;

 VAR_7 = VAR_4;
 FUNC_0(FUNC_1(VAR_7, VAR_4, VAR_0));
 VAR_6 = VAR_2 + VAR_7;
 VAR_6->status |= VAR_1;
 VAR_6->chip = &VAR_3;
 if (VAR_5)
  FUNC_2(VAR_7, VAR_5);
}
