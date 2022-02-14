
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_rb_root {int rb; } ;
struct cfq_queue {int dummy; } ;
struct cfq_data {int rq_queued; int serving_type; int serving_prio; int serving_group; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct cfq_queue* FUNC_1 (struct cfq_rb_root*) ;
 struct cfq_rb_root* FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static struct cfq_queue *FUNC_3(struct cfq_data *VAR_0)
{
 struct cfq_rb_root *VAR_1 =
  FUNC_2(VAR_0->serving_group, VAR_0->serving_prio,
     VAR_0->serving_type);

 if (!VAR_0->rq_queued)
  return ((void*)0);


 if (!VAR_1)
  return ((void*)0);
 if (FUNC_0(&VAR_1->rb))
  return ((void*)0);
 return FUNC_1(VAR_1);
}
