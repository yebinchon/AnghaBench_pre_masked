
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct irq_desc {TYPE_1__* chip; } ;
struct TYPE_2__ {int (* unmask ) (unsigned int) ;int (* mask ) (unsigned int) ;} ;


 int* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_4, struct irq_desc *VAR_5)
{
 u16 VAR_6 =
  *VAR_0 & VAR_3;
 int VAR_7;

 VAR_5->chip->mask(VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_6 & (1 << VAR_7)) {
   int VAR_8 =
    FUNC_0(VAR_1 + VAR_7);
   FUNC_1(VAR_8);
  }
 }

 VAR_5->chip->unmask(VAR_4);
}
