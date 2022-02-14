
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int * chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct irq_desc* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_0(void)
{
 int VAR_8;
 struct irq_desc *VAR_9 = VAR_5;

 VAR_3 = VAR_0;
 VAR_4 = VAR_1;

 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  if (VAR_9[VAR_8].chip == &VAR_7) {
   VAR_9[VAR_8].chip = &VAR_6;
  }
 }
}
