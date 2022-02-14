
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int rate; TYPE_1__* parent; } ;
struct TYPE_2__ {int rate; } ;



__attribute__((used)) static void FUNC_0(struct clk *VAR_0)
{
 VAR_0->rate = VAR_0->parent->rate / 2;
}
