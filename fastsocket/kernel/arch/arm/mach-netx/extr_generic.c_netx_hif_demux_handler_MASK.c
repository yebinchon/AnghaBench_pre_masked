
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 int FUNC_0 (char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(unsigned int VAR_2, struct irq_desc *VAR_3)
{
 unsigned int VAR_4 = FUNC_1(0);
 unsigned int VAR_5;

 VAR_5 = ((FUNC_3(VAR_0) &
  FUNC_3(VAR_1)) >> 24) & 0x1f;

 while (VAR_5) {
  if (VAR_5 & 1) {
   FUNC_0("handling irq %d\n", VAR_4);
   FUNC_2(VAR_4);
  }
  VAR_4++;
  VAR_5 >>= 1;
 }
}
