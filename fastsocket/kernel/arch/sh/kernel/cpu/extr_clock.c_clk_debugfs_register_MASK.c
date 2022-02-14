
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int dentry; struct clk* parent; } ;


 int FUNC_0 (struct clk*) ;

__attribute__((used)) static int FUNC_1(struct clk *VAR_0)
{
 int VAR_1;
 struct clk *VAR_2 = VAR_0->parent;

 if (VAR_2 && !VAR_2->dentry) {
  VAR_1 = FUNC_1(VAR_2);
  if (VAR_1)
   return VAR_1;
 }

 if (!VAR_0->dentry) {
  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1)
   return VAR_1;
 }
 return 0;
}
