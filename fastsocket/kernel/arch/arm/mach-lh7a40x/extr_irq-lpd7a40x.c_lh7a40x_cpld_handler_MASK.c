
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* unmask ) (unsigned int) ;int (* ack ) (unsigned int) ;} ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static void FUNC_3 (unsigned int VAR_3, struct irq_desc *VAR_4)
{
 unsigned int VAR_5 = VAR_0;

 VAR_4->chip->ack (VAR_3);

 if ((VAR_5 & 0x1) == 0)
  FUNC_0(VAR_2);

 if ((VAR_5 & 0x2) == 0)
  FUNC_0(VAR_1);

 VAR_4->chip->unmask (VAR_3);
}
