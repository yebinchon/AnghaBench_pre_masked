
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
typedef int GEDR ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 unsigned long VAR_2 ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_3, struct irq_desc *VAR_4)
{
 unsigned long VAR_5 = (~VAR_1) & VAR_2;

 do {
  GEDR(VAR_6) =
     FUNC_0(VAR_6);
  if (FUNC_4(VAR_5)) {
   VAR_3 = FUNC_1(0) + FUNC_2(VAR_5);
   FUNC_3(VAR_3);
  }
  VAR_5 = (~VAR_1) & VAR_2;
 } while (VAR_5);
}
