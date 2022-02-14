
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int usecount; struct clk* parent; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* enable ) (struct clk*) ;} ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct clk *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->usecount++ == 0) {
  if (VAR_0->parent) {
   VAR_1 = FUNC_3(VAR_0->parent);
   if (FUNC_2(VAR_1))
    goto err;
  }

  if (VAR_0->ops && VAR_0->ops->enable) {
   VAR_1 = VAR_0->ops->enable(VAR_0);
   if (VAR_1) {
    if (VAR_0->parent)
     FUNC_0(VAR_0->parent);
    goto err;
   }
  }
 }

 return VAR_1;
err:
 VAR_0->usecount--;
 return VAR_1;
}
