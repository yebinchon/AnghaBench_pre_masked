
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void
FUNC_3(unsigned int VAR_3,
        struct irq_desc *VAR_4)
{
 unsigned long VAR_5 = FUNC_1(VAR_2);
 unsigned long VAR_6 = FUNC_1(VAR_1);

 VAR_5 &= ~VAR_6;
 VAR_5 &= ~0xff;



 while (VAR_5) {
  VAR_3 = FUNC_0(VAR_5);
  VAR_5 &= ~(1<<VAR_3);

  VAR_3 += (VAR_0 - 4);
  FUNC_2(VAR_3);
 }

}
