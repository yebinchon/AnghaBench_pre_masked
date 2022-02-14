
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,struct irq_desc*) ;
 struct irq_desc* VAR_3 ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_4, struct irq_desc *VAR_5)
{
 unsigned short VAR_6 = FUNC_0(VAR_2);
 struct irq_desc *VAR_7;
 unsigned int VAR_8 = VAR_0;

 VAR_6 &= (1 << VAR_1) - 1;

 while (VAR_6) {
  if (VAR_6 & 1) {
   VAR_7 = VAR_3 + VAR_8;
   FUNC_1(VAR_8, VAR_7);
  }
  VAR_6 >>= 1;
  VAR_8++;
 }
}
