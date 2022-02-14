
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qeth_card {unsigned long thread_allowed_mask; unsigned long thread_start_mask; int wait_q; int thread_mask_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct qeth_card *VAR_0, unsigned long VAR_1,
    int VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(&VAR_0->thread_mask_lock, VAR_3);
 VAR_0->thread_allowed_mask = VAR_1;
 if (VAR_2)
  VAR_0->thread_start_mask &= VAR_1;
 FUNC_1(&VAR_0->thread_mask_lock, VAR_3);
 FUNC_2(&VAR_0->wait_q);
}
