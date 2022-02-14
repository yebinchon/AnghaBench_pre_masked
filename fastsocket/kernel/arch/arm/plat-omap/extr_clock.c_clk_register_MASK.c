
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ prev; scalar_t__ next; } ;
struct clk {int (* init ) (struct clk*) ;TYPE_2__ node; TYPE_2__ sibling; TYPE_1__* parent; } ;
struct TYPE_3__ {int children; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct clk*) ;

int FUNC_5(struct clk *VAR_4)
{
 if (VAR_4 == ((void*)0) || FUNC_0(VAR_4))
  return -VAR_0;




 if (VAR_4->node.next || VAR_4->node.prev)
  return 0;

 FUNC_2(&VAR_2);
 if (VAR_4->parent)
  FUNC_1(&VAR_4->sibling, &VAR_4->parent->children);
 else
  FUNC_1(&VAR_4->sibling, &VAR_3);

 FUNC_1(&VAR_4->node, &VAR_1);
 if (VAR_4->init)
  VAR_4->init(VAR_4);
 FUNC_3(&VAR_2);

 return 0;
}
