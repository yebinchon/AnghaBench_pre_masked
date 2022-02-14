
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static void
FUNC_1(unsigned int VAR_2, struct irq_desc *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = VAR_0 & 0xfffff800;
 do {




  VAR_0 = VAR_4;

  VAR_2 = VAR_1;
  VAR_4 >>= 11;
  do {
   if (VAR_4 & 1)
    FUNC_0(VAR_2);
   VAR_4 >>= 1;
   VAR_2++;
  } while (VAR_4);

  VAR_4 = VAR_0 & 0xfffff800;
 } while (VAR_4);
}
