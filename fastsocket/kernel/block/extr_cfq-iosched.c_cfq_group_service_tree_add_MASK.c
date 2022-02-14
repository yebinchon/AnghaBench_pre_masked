
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_rb_root {int total_weight; } ;
struct cfq_group {scalar_t__ weight; int rb_node; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cfq_rb_root*,struct cfq_group*) ;
 int FUNC_3 (struct cfq_group*) ;

__attribute__((used)) static void
FUNC_4(struct cfq_rb_root *VAR_0, struct cfq_group *VAR_1)
{
 FUNC_0(!FUNC_1(&VAR_1->rb_node));

 FUNC_3(VAR_1);
 FUNC_2(VAR_0, VAR_1);
 VAR_0->total_weight += VAR_1->weight;
}
