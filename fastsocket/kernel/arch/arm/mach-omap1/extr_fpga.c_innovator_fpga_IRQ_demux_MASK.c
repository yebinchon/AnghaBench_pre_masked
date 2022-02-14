
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

void FUNC_2(unsigned int VAR_2, struct irq_desc *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1();

 if (!VAR_4)
  return;

 for (VAR_5 = VAR_0;
      (VAR_5 < VAR_1) && VAR_4;
      VAR_5++, VAR_4 >>= 1) {
  if (VAR_4 & 1) {
   FUNC_0(VAR_5);
  }
 }
}
