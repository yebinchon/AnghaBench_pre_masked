
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_rb_root {int total_weight; } ;
struct cfq_group {int weight; } ;
struct cfq_data {struct cfq_rb_root grp_service_tree; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned
FUNC_0(struct cfq_data *VAR_1, struct cfq_group *VAR_2)
{
 struct cfq_rb_root *VAR_3 = &VAR_1->grp_service_tree;

 return VAR_0 * VAR_2->weight / VAR_3->total_weight;
}
