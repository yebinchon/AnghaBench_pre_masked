
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_lock {int kill_takers; int signal; scalar_t__ flags; scalar_t__ rw; int queue; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ttm_lock *VAR_1)
{
 FUNC_1(&VAR_1->lock);
 FUNC_0(&VAR_1->queue);
 VAR_1->rw = 0;
 VAR_1->flags = 0;
 VAR_1->kill_takers = 0;
 VAR_1->signal = VAR_0;
}
