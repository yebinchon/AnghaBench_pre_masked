
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned int,struct irq_desc*) ;
 unsigned int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned int) ;
 unsigned long FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(unsigned int VAR_3, struct irq_desc *VAR_4)
{
 unsigned long VAR_5 = FUNC_3(VAR_2 + VAR_1);

 if (VAR_5 == 0) {
  FUNC_0(VAR_3, VAR_4);
  return;
 }

 do {
  VAR_3 = FUNC_1(VAR_5) - 1;
  VAR_5 &= ~(1 << VAR_3);

  VAR_3 += VAR_0;

  FUNC_2(VAR_3);
 } while (VAR_5);
}
