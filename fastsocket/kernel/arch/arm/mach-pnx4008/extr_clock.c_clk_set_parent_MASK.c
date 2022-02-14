
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int (* set_parent ) (struct clk*,struct clk*) ;struct clk* parent; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct clk*,struct clk*) ;

int FUNC_3(struct clk *VAR_1, struct clk *VAR_2)
{
 int VAR_3 = -VAR_0;
 if (!VAR_1->set_parent)
  goto out;

 FUNC_0();
 VAR_3 = VAR_1->set_parent(VAR_1, VAR_2);
 if (!VAR_3)
  VAR_1->parent = VAR_2;
 FUNC_1();

out:
 return VAR_3;
}
