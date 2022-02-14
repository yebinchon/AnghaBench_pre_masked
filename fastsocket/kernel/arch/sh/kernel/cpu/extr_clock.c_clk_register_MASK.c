
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ prev; scalar_t__ next; } ;
struct clk {TYPE_2__* ops; TYPE_3__ node; TYPE_3__ sibling; TYPE_1__* parent; scalar_t__ usecount; int children; } ;
struct TYPE_5__ {int (* init ) (struct clk*) ;} ;
struct TYPE_4__ {int children; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (struct clk*) ;

int FUNC_6(struct clk *VAR_4)
{
 if (VAR_4 == ((void*)0) || FUNC_1(VAR_4))
  return -VAR_0;




 if (VAR_4->node.next || VAR_4->node.prev)
  return 0;

 FUNC_3(&VAR_2);

 FUNC_0(&VAR_4->children);
 VAR_4->usecount = 0;

 if (VAR_4->parent)
  FUNC_2(&VAR_4->sibling, &VAR_4->parent->children);
 else
  FUNC_2(&VAR_4->sibling, &VAR_3);

 FUNC_2(&VAR_4->node, &VAR_1);
 if (VAR_4->ops && VAR_4->ops->init)
  VAR_4->ops->init(VAR_4);
 FUNC_4(&VAR_2);

 return 0;
}
