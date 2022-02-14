
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int wq; int lock; int * claimer; scalar_t__ claimed; scalar_t__ claim_cnt; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->lock, VAR_1);
 if (--VAR_0->claim_cnt) {

  FUNC_1(&VAR_0->lock, VAR_1);
 } else {
  VAR_0->claimed = 0;
  VAR_0->claimer = ((void*)0);
  FUNC_1(&VAR_0->lock, VAR_1);
  FUNC_2(&VAR_0->wq);
 }
}
