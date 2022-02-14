
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* unmask ) (unsigned int) ;int (* ack ) (unsigned int) ;int (* mask ) (unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static void
FUNC_5(unsigned int VAR_7, struct irq_desc *VAR_8)
{
 unsigned int VAR_9;

 while (1) {



  VAR_8->chip->ack(VAR_7);






  VAR_9 = VAR_3 ^ (VAR_4 | VAR_6);

  if ((VAR_9 & (VAR_4 | VAR_6 | VAR_5)) == 0)
   break;






  if (VAR_9 & (VAR_4 | VAR_6)) {
   VAR_8->chip->mask(VAR_7);







   VAR_8->chip->ack(VAR_7);

   if (VAR_9 & VAR_4) {
    FUNC_0(VAR_1);
   }

   if (VAR_9 & VAR_6) {
    FUNC_0(VAR_2);
   }

   VAR_8->chip->unmask(VAR_7);
  }

  if (VAR_9 & VAR_5) {
   FUNC_0(VAR_0);
  }
 }
}
