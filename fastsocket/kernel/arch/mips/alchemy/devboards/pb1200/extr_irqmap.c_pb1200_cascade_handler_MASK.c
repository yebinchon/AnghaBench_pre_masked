
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int dummy; } ;
struct TYPE_2__ {unsigned short int_status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (unsigned short) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_2, struct irq_desc *VAR_3)
{
 unsigned short VAR_4 = VAR_1->int_status;

 for ( ; VAR_4; VAR_4 &= VAR_4 - 1)
  FUNC_1(VAR_0 + FUNC_0(VAR_4));
}
