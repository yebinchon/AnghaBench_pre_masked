
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct irq_desc {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* unmask ) (unsigned int) ;int (* ack ) (unsigned int) ;int (* mask ) (unsigned int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int* FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;

__attribute__((used)) static void FUNC_8(unsigned int VAR_3, struct irq_desc *VAR_4)
{
 u8 *VAR_5 = FUNC_3(VAR_4);
 u8 VAR_6;
 int VAR_7;

 VAR_4->chip->mask(VAR_3);
 VAR_4->chip->ack(VAR_3);
 VAR_6 = FUNC_4(VAR_2 + FUNC_0(0) + VAR_1) & *VAR_5;
 VAR_7 = VAR_0 - 1;
 while (VAR_6) {
  int VAR_8 = FUNC_1(VAR_6);
  VAR_7 += VAR_8;
  VAR_6 >>= VAR_8;
  FUNC_2(VAR_7);
 }
 VAR_4->chip->unmask(VAR_3);
}
