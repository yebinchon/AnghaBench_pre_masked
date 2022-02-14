
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* ack ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 unsigned long VAR_2 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(unsigned int VAR_3, struct irq_desc *VAR_4)
{
 unsigned long VAR_5 = FUNC_2(VAR_1) &
     VAR_2;

 do {

  if (VAR_4->chip->ack)
   VAR_4->chip->ack(VAR_0);
  while (VAR_5) {
   VAR_3 = FUNC_0(0) + FUNC_1(VAR_5);
   FUNC_3(VAR_3);
   VAR_5 &= VAR_5 - 1;
  }
  VAR_5 = FUNC_2(VAR_1) &
    VAR_2;
 } while (VAR_5);
}
