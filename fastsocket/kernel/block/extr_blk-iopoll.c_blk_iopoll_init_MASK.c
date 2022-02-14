
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_iopoll {int weight; int state; int * poll; int list; } ;
typedef int blk_iopoll_fn ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct blk_iopoll*,int ,int) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct blk_iopoll *VAR_1, int VAR_2, blk_iopoll_fn *VAR_3)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 FUNC_0(&VAR_1->list);
 VAR_1->weight = VAR_2;
 VAR_1->poll = VAR_3;
 FUNC_2(VAR_0, &VAR_1->state);
}
