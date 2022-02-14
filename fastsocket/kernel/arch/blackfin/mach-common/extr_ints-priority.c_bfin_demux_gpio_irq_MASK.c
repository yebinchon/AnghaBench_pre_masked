
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;

 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;







 unsigned int VAR_6 ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_7,
    struct irq_desc *VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13 = 0;

 switch (VAR_7) {
 default:
  FUNC_0();
  return;
 }

 if (VAR_13) {
  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9 += VAR_0) {
   VAR_12 += VAR_9;

   VAR_11 = FUNC_2(VAR_9) & FUNC_3(VAR_9);

   while (VAR_11) {
    if (VAR_11 & 1)
     FUNC_1(VAR_12);
    VAR_12++;
    VAR_11 >>= 1;
   }
  }
 } else {
   VAR_10 = FUNC_4(VAR_12);
   VAR_11 = FUNC_2(VAR_10) & FUNC_3(VAR_10);

   do {
    if (VAR_11 & 1)
     FUNC_1(VAR_12);
    VAR_12++;
    VAR_11 >>= 1;
   } while (VAR_11);
 }

}
