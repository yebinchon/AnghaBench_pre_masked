
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int status; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct irq_desc* VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_3)
{
 struct irq_desc *VAR_4 = VAR_2 + VAR_3;
 unsigned int VAR_5 = VAR_3 - VAR_1;





 if (VAR_4->status & VAR_0)
  return;
 FUNC_0(0x100 << VAR_5);
}
