
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {unsigned long fixed_div; TYPE_1__* parent; } ;
struct TYPE_2__ {unsigned long rate; } ;


 int FUNC_0 (int) ;

unsigned long FUNC_1(struct clk *VAR_0)
{
 FUNC_0(!VAR_0->fixed_div);

 return VAR_0->parent->rate / VAR_0->fixed_div;
}
