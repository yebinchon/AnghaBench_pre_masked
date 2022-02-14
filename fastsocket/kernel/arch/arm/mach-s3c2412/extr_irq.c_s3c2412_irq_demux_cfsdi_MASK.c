
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_4, struct irq_desc *VAR_5)
{
 unsigned int VAR_6, VAR_7;

 VAR_6 = FUNC_1(VAR_3);
 VAR_7 = FUNC_1(VAR_2);

 VAR_6 &= ~VAR_7;

 if (VAR_6 & FUNC_0(VAR_1))
  FUNC_2(VAR_1);

 if (VAR_6 & FUNC_0(VAR_0))
  FUNC_2(VAR_0);
}
