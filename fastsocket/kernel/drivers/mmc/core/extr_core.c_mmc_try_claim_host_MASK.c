
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int claimed; scalar_t__ claimer; int claim_cnt; int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(struct mmc_host *VAR_1)
{
 int VAR_2 = 0;
 unsigned long VAR_3;

 FUNC_0(&VAR_1->lock, VAR_3);
 if (!VAR_1->claimed || VAR_1->claimer == VAR_0) {
  VAR_1->claimed = 1;
  VAR_1->claimer = VAR_0;
  VAR_1->claim_cnt += 1;
  VAR_2 = 1;
 }
 FUNC_1(&VAR_1->lock, VAR_3);
 return VAR_2;
}
