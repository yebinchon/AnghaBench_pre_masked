
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_desc {int (* handle ) (unsigned int,struct irq_desc*) ;} ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,struct irq_desc*) ;

__attribute__((used)) static void
FUNC_1 (unsigned int VAR_2, struct irq_desc *VAR_3)
{
 u32 VAR_4 = VAR_0;
 VAR_2 = VAR_1;
 for (; VAR_4; VAR_4 >>= 1, ++VAR_2) {
  if (VAR_4 & 1)
   VAR_3[VAR_2].handle (VAR_2, VAR_3);
 }
}
