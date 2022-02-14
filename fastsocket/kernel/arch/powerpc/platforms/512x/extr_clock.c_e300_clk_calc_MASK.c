
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct clk {int rate; TYPE_1__* parent; } ;
struct TYPE_4__ {int spmr; } ;
struct TYPE_3__ {int rate; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct clk *VAR_1)
{
 int VAR_2 = (VAR_0->spmr >> 16) & 0xf;
 int VAR_3 = VAR_1->parent->rate * VAR_2;

 VAR_1->rate = VAR_3 / 2;
}
