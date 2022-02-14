
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int claimed; scalar_t__ claimer; int claim_cnt; int wq; int lock; } ;
typedef int atomic_t ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int VAR_3 ;
 int FUNC_10 (int *) ;

int FUNC_11(struct mmc_host *VAR_4, atomic_t *VAR_5)
{
 FUNC_0(VAR_3, VAR_2);
 unsigned long VAR_6;
 int VAR_7;

 FUNC_3();

 FUNC_1(&VAR_4->wq, &VAR_3);
 FUNC_8(&VAR_4->lock, VAR_6);
 while (1) {
  FUNC_7(VAR_1);
  VAR_7 = VAR_5 ? FUNC_2(VAR_5) : 0;
  if (VAR_7 || !VAR_4->claimed || VAR_4->claimer == VAR_2)
   break;
  FUNC_9(&VAR_4->lock, VAR_6);
  FUNC_6();
  FUNC_8(&VAR_4->lock, VAR_6);
 }
 FUNC_7(VAR_0);
 if (!VAR_7) {
  VAR_4->claimed = 1;
  VAR_4->claimer = VAR_2;
  VAR_4->claim_cnt += 1;
 } else
  FUNC_10(&VAR_4->wq);
 FUNC_9(&VAR_4->lock, VAR_6);
 FUNC_5(&VAR_4->wq, &VAR_3);
 if (!VAR_7)
  FUNC_4(VAR_4);
 return VAR_7;
}
