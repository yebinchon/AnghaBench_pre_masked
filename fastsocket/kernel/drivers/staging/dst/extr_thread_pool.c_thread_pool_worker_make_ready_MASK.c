
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_pool_worker {int worker_entry; scalar_t__ has_data; int need_exit; struct thread_pool* pool; } ;
struct thread_pool {int thread_lock; int thread_num; int wait; int ready_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct thread_pool_worker*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct thread_pool_worker *VAR_0)
{
 struct thread_pool *VAR_1 = VAR_0->pool;

 FUNC_2(&VAR_1->thread_lock);

 if (!VAR_0->need_exit) {
  FUNC_1(&VAR_0->worker_entry, &VAR_1->ready_list);
  VAR_0->has_data = 0;
  FUNC_3(&VAR_1->thread_lock);

  FUNC_5(&VAR_1->wait);
 } else {
  VAR_1->thread_num--;
  FUNC_0(&VAR_0->worker_entry);
  FUNC_3(&VAR_1->thread_lock);

  FUNC_4(VAR_0);
 }
}
