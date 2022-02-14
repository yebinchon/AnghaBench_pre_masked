
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int tg_node; } ;
struct throtl_data {int nr_undestroyed_grps; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct throtl_grp*) ;

__attribute__((used)) static void
FUNC_4(struct throtl_data *VAR_0, struct throtl_grp *VAR_1)
{

 FUNC_0(FUNC_2(&VAR_1->tg_node));

 FUNC_1(&VAR_1->tg_node);





 FUNC_3(VAR_1);
 VAR_0->nr_undestroyed_grps--;
}
