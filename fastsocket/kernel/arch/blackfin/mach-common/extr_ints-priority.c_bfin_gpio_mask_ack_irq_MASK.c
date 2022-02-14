
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_desc {scalar_t__ handle_irq; } ;


 scalar_t__ VAR_0 ;
 struct irq_desc* VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_2)
{
 struct irq_desc *VAR_3 = VAR_1 + VAR_2;
 u32 VAR_4 = FUNC_0(VAR_2);

 if (VAR_3->handle_irq == VAR_0)
  FUNC_1(VAR_4, 0);

 FUNC_2(VAR_4, 0);
}
