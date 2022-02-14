
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct irq_desc {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* unmask ) (unsigned int) ;int (* mask_ack ) (unsigned int) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6(unsigned int VAR_1,
  struct irq_desc *VAR_2)
{
 u8 VAR_3 = FUNC_1(VAR_0);

 VAR_2->chip->mask_ack(VAR_1);

 while (VAR_3 != 0) {
  int VAR_4 = FUNC_2(VAR_3) - 1;

  VAR_3 &= ~(1 << VAR_4);

  FUNC_3(FUNC_0(VAR_4));
 }

 VAR_2->chip->unmask(VAR_1);
}
