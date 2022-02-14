
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int usecount; struct clk* parent; } ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;

__attribute__((used)) static int FUNC_2(struct clk *VAR_0)
{
 int VAR_1 = 0;
 if (VAR_0->usecount++ == 0) {
  if (VAR_0->parent)
   VAR_1 = FUNC_2(VAR_0->parent);

  if (VAR_1 != 0) {
   VAR_0->usecount--;
   goto out;
  }

  VAR_1 = FUNC_0(VAR_0);

  if (VAR_1 != 0 && VAR_0->parent) {
   FUNC_1(VAR_0->parent);
   VAR_0->usecount--;
  }
 }
out:
 return VAR_1;
}
