
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {struct eic* handler_data; } ;
struct eic {scalar_t__ first_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (struct eic*,int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_2, struct irq_desc *VAR_3)
{
 struct eic *VAR_4 = VAR_3->handler_data;
 unsigned long VAR_5, VAR_6;
 unsigned int VAR_7;

 VAR_5 = FUNC_0(VAR_4, VAR_1);
 VAR_6 = VAR_5 & FUNC_0(VAR_4, VAR_0);

 while (VAR_6) {
  VAR_7 = FUNC_1(VAR_6) - 1;
  VAR_6 &= ~(1 << VAR_7);

  FUNC_2(VAR_7 + VAR_4->first_irq);
 }
}
