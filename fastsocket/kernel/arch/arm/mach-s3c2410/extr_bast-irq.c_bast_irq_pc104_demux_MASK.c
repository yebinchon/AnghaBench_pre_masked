
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* ack ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int* VAR_2 ;
 int FUNC_1 (unsigned int) ;
 struct irq_desc* VAR_3 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(unsigned int VAR_4,
       struct irq_desc *VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(VAR_0) & 0xf;

 if (FUNC_3(VAR_6 == 0)) {


  VAR_5 = VAR_3 + VAR_1;
  VAR_5->chip->ack(VAR_1);
 } else {


  for (VAR_8 = 0; VAR_6 != 0; VAR_8++, VAR_6 >>= 1) {
   if (VAR_6 & 1) {
    VAR_7 = VAR_2[VAR_8];
    FUNC_1(VAR_7);
   }
  }
 }
}
