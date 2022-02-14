
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* parent; scalar_t__ rate; int node; int name; } ;
struct TYPE_2__ {scalar_t__ rate; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 scalar_t__ FUNC_1 (int ,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct clk *VAR_3)
{
 if (VAR_3 == ((void*)0) || FUNC_0(VAR_3))
  return -VAR_0;

 if (FUNC_1(VAR_3->parent && !VAR_3->parent->rate,
   "CLK: %s parent %s has no rate!\n",
   VAR_3->name, VAR_3->parent->name))
  return -VAR_0;

 FUNC_3(&VAR_2);
 FUNC_2(&VAR_3->node, &VAR_1);
 FUNC_4(&VAR_2);


 if (VAR_3->rate)
  return 0;


 if (VAR_3->parent)
  VAR_3->rate = VAR_3->parent->rate;

 return 0;
}
