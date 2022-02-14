
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r10conf {int wait_barrier; int resync_lock; int nr_pending; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct r10conf *VAR_0)
{
 unsigned long VAR_1;
 FUNC_0(&VAR_0->resync_lock, VAR_1);
 VAR_0->nr_pending--;
 FUNC_1(&VAR_0->resync_lock, VAR_1);
 FUNC_2(&VAR_0->wait_barrier);
}
