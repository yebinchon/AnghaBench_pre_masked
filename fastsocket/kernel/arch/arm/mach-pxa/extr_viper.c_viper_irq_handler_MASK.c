
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
typedef int GEDR ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 unsigned int FUNC_4 (int ) ;
 unsigned long FUNC_5 () ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_1, struct irq_desc *VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_5();
 do {


  GEDR(VAR_4) = FUNC_0(VAR_4);

  if (FUNC_3(VAR_3)) {
   VAR_1 = FUNC_4(FUNC_1(VAR_3));
   FUNC_2(VAR_1);
  }
  VAR_3 = FUNC_5();
 } while (VAR_3);
}
