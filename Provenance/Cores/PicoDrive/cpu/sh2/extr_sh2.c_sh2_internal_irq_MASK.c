
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pending_int_irq; int pending_int_vector; int pending_level; int test_irq; } ;
typedef TYPE_1__ SH2 ;



void FUNC_0(SH2 *VAR_0, int VAR_1, int VAR_2)
{


 VAR_0->pending_int_irq = VAR_1;
 VAR_0->pending_int_vector = VAR_2;
 if (VAR_1 > VAR_0->pending_level)
  VAR_0->pending_level = VAR_1;

 VAR_0->test_irq = 1;
}
