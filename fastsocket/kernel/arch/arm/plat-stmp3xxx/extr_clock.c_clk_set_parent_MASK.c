
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {struct clk* parent; scalar_t__ usage; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_parent ) (struct clk*,struct clk*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct clk*) ;
 int VAR_1 ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct clk*,struct clk*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct clk *VAR_2, struct clk *VAR_3)
{
 int VAR_4 = -VAR_0;
 unsigned long VAR_5;

 if (FUNC_5(!FUNC_0(VAR_2)))
  goto out;

 if (!VAR_2->ops->set_parent)
  goto out;

 FUNC_2(&VAR_1, VAR_5);

 VAR_4 = VAR_2->ops->set_parent(VAR_2, VAR_3);
 if (!VAR_4) {

  FUNC_1(VAR_3);

  VAR_3->usage += VAR_2->usage;
  VAR_2->parent->usage -= VAR_2->usage;


  FUNC_1(VAR_2->parent);

  VAR_2->parent = VAR_3;
 }
 FUNC_3(&VAR_1, VAR_5);

out:
 return VAR_4;
}
