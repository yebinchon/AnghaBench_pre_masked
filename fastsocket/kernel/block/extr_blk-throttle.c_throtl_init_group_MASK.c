
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {int limits_changed; int* bps; int* iops; int ref; int * bio_lists; int rb_node; int tg_node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct throtl_grp *VAR_0)
{
 FUNC_0(&VAR_0->tg_node);
 FUNC_1(&VAR_0->rb_node);
 FUNC_3(&VAR_0->bio_lists[0]);
 FUNC_3(&VAR_0->bio_lists[1]);
 VAR_0->limits_changed = 0;


 VAR_0->bps[0] = VAR_0->bps[1] = -1;
 VAR_0->iops[0] = VAR_0->iops[1] = -1;







 FUNC_2(&VAR_0->ref, 1);
}
