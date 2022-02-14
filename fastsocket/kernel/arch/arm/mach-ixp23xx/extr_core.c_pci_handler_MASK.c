
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct irq_desc {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* unmask ) (unsigned int) ;int (* ack ) (unsigned int) ;} ;


 int FUNC_0 () ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int* VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_3, struct irq_desc *VAR_4)
{
 u32 VAR_5;
 unsigned int VAR_6;

 VAR_5 = *VAR_2;

 VAR_4->chip->ack(VAR_3);


 if (VAR_5 & (1 << 26)) {
  VAR_6 = VAR_1;
 } else if (VAR_5 & (1 << 27)) {
  VAR_6 = VAR_0;
 } else {
  FUNC_0();
 }

 FUNC_1(VAR_6);

 VAR_4->chip->unmask(VAR_3);
}
