
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* parent; } ;
struct TYPE_2__ {unsigned long (* round_rate ) (TYPE_1__*,unsigned long) ;} ;


 unsigned long FUNC_0 (TYPE_1__*,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk *VAR_0, unsigned long VAR_1)
{
 return VAR_0->parent->round_rate(VAR_0->parent, VAR_1);
}
