
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_4,
         struct irq_desc *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 unsigned int VAR_8 = 9;




 VAR_6 = FUNC_0(VAR_3);
 VAR_7 = FUNC_0(VAR_2);

 VAR_6 &= ~VAR_7;
 VAR_6 >>= VAR_8;
 VAR_6 &= 3;

 if (VAR_6 != 0) {
  if (VAR_6 & 1) {
   FUNC_1(VAR_1);
  }
  if (VAR_6 & 2) {
   FUNC_1(VAR_0);
  }
 }
}
