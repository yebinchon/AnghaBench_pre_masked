
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct irq_desc {int dummy; } ;
struct TYPE_3__ {int (* handle_irq ) (unsigned int,TYPE_1__*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (unsigned int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_3, struct irq_desc *VAR_4)
{
 unsigned int VAR_5, VAR_6;
 unsigned int VAR_7 = (unsigned int)FUNC_3(VAR_3);

 VAR_6 = FUNC_2(FUNC_1(VAR_7) + VAR_0);

 VAR_5 = VAR_1 + VAR_7 * 32;
 for (; VAR_6 != 0; VAR_6 >>= 1, VAR_5++) {

  if ((VAR_6 & 1) == 0)
   continue;

  FUNC_0(!(VAR_2[VAR_5].handle_irq));
  VAR_2[VAR_5].handle_irq(VAR_5,
    &VAR_2[VAR_5]);
 }
}
