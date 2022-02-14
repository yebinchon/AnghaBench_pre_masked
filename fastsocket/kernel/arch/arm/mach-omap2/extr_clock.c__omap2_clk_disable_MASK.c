
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* disable ) (struct clk*) ;} ;


 int FUNC_0 (struct clk*) ;

__attribute__((used)) static void FUNC_1(struct clk *VAR_0)
{
 VAR_0->ops->disable(VAR_0);
}
