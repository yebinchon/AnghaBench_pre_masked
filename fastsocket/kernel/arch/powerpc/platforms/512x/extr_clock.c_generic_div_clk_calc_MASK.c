
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk {int div_shift; int rate; TYPE_1__* parent; } ;
struct TYPE_4__ {int scfr1; } ;
struct TYPE_3__ {int rate; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct clk *VAR_1)
{
 int VAR_2 = (VAR_0->scfr1 >> VAR_1->div_shift) & 0x7;

 VAR_1->rate = VAR_1->parent->rate / VAR_2;
}
