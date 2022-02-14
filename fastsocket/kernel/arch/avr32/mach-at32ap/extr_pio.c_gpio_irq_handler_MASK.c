
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pio_device {int dummy; } ;
struct irq_desc {int (* handle_irq ) (int,struct irq_desc*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct pio_device* FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 struct irq_desc* VAR_2 ;
 int FUNC_3 (struct pio_device*,int ) ;
 int FUNC_4 (int,struct irq_desc*) ;

__attribute__((used)) static void FUNC_5(unsigned VAR_3, struct irq_desc *VAR_4)
{
 struct pio_device *VAR_5 = FUNC_1(VAR_3);
 unsigned VAR_6;

 VAR_6 = (unsigned) FUNC_2(VAR_3);
 for (;;) {
  u32 VAR_7;
  struct irq_desc *VAR_8;


  VAR_7 = FUNC_3(VAR_5, VAR_1) & FUNC_3(VAR_5, VAR_0);
  if (!VAR_7)
   break;
  do {
   int VAR_9;

   VAR_9 = FUNC_0(VAR_7) - 1;
   VAR_7 &= ~(1 << VAR_9);

   VAR_9 += VAR_6;
   VAR_8 = &VAR_2[VAR_9];

   VAR_8->handle_irq(VAR_9, VAR_8);
  } while (VAR_7);
 }
}
