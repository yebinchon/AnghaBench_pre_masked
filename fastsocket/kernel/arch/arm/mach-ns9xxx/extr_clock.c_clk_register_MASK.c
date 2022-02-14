
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* parent; int node; } ;
struct TYPE_2__ {int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct clk *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_0, VAR_3);

 FUNC_0(&VAR_2->node, &VAR_1);

 if (VAR_2->parent)
  ++VAR_2->parent->refcount;

 FUNC_2(&VAR_0, VAR_3);

 return 0;
}
