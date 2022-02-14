
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int tg_node; } ;
struct throtl_data {int nr_undestroyed_grps; int tg_list; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct throtl_data *VAR_0, struct throtl_grp *VAR_1)
{
 FUNC_0(&VAR_1->tg_node, &VAR_0->tg_list);
 VAR_0->nr_undestroyed_grps++;
}
