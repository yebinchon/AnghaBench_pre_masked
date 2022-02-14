
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_handler_data {int iclr; } ;
struct irq_desc {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct irq_handler_data* FUNC_0 (unsigned int) ;
 struct irq_desc* VAR_3 ;
 scalar_t__ FUNC_1 (struct irq_handler_data*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_4)
{
 struct irq_handler_data *VAR_5 = FUNC_0(VAR_4);
 struct irq_desc *VAR_6 = VAR_3 + VAR_4;

 if (FUNC_2(VAR_6->status & (VAR_1|VAR_2)))
  return;

 if (FUNC_1(VAR_5))
  FUNC_3(VAR_0, VAR_5->iclr);
}
