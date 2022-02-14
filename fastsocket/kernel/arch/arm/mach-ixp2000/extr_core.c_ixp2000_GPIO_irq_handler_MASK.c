
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned long* VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_2, struct irq_desc *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5 = *VAR_1;

 for (VAR_4 = 0; VAR_4 <= 7; VAR_4++) {
  if (VAR_5 & (1<<VAR_4)) {
   FUNC_0(VAR_4 + VAR_0);
  }
 }
}
