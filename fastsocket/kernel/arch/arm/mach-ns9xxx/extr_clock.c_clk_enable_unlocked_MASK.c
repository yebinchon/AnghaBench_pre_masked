
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int (* endisable ) (struct clk*,int) ;int usage; struct clk* parent; } ;


 int FUNC_0 (struct clk*,int) ;

__attribute__((used)) static int FUNC_1(struct clk *VAR_0)
{
 int VAR_1 = 0;
 if (VAR_0->parent) {
  VAR_1 = FUNC_1(VAR_0->parent);
  if (VAR_1)
   return VAR_1;
 }

 if (VAR_0->usage++ == 0 && VAR_0->endisable)
  VAR_1 = VAR_0->endisable(VAR_0, 1);

 return VAR_1;
}
