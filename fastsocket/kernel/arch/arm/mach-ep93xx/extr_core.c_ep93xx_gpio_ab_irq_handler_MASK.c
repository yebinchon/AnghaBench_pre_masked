
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned char FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_2, struct irq_desc *VAR_3)
{
 unsigned char VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_0);
 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  if (VAR_4 & (1 << VAR_5)) {
   int VAR_6 = FUNC_4(FUNC_0(0)) + VAR_5;
   FUNC_3(VAR_6);
  }
 }

 VAR_4 = FUNC_2(VAR_1);
 for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
  if (VAR_4 & (1 << VAR_5)) {
   int VAR_7 = FUNC_4(FUNC_1(0)) + VAR_5;
   FUNC_3(VAR_7);
  }
 }
}
