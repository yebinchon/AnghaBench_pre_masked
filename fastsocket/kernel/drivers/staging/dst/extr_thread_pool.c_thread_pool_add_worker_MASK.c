
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_pool_worker {void (* cleanup ) (void*) ;unsigned int id; void* thread; int worker_entry; void* private; int wait; struct thread_pool* pool; } ;
struct thread_pool {int thread_lock; int thread_num; int ready_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct thread_pool_worker*) ;
 void* FUNC_4 (int ,struct thread_pool_worker*,char*,char*) ;
 int FUNC_5 (void*) ;
 struct thread_pool_worker* FUNC_6 (int,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_2 ;

int FUNC_10(struct thread_pool *VAR_3,
  char *VAR_4,
  unsigned int VAR_5,
  void *(* VAR_6)(void *VAR_7),
  void (* VAR_8)(void *VAR_9),
  void *VAR_10)
{
 struct thread_pool_worker *VAR_11;
 int VAR_12 = -VAR_0;

 VAR_11 = FUNC_6(sizeof(struct thread_pool_worker), VAR_1);
 if (!VAR_11)
  goto err_out_exit;

 VAR_11->pool = VAR_3;
 FUNC_2(&VAR_11->wait);
 VAR_11->cleanup = VAR_8;
 VAR_11->id = VAR_5;

 VAR_11->thread = FUNC_4(VAR_2, VAR_11, "%s", VAR_4);
 if (FUNC_0(VAR_11->thread)) {
  VAR_12 = FUNC_1(VAR_11->thread);
  goto err_out_free;
 }

 VAR_11->private = VAR_6(VAR_10);
 if (FUNC_0(VAR_11->private)) {
  VAR_12 = FUNC_1(VAR_11->private);
  goto err_out_stop_thread;
 }

 FUNC_8(&VAR_3->thread_lock);
 FUNC_7(&VAR_11->worker_entry, &VAR_3->ready_list);
 VAR_3->thread_num++;
 FUNC_9(&VAR_3->thread_lock);

 return 0;

err_out_stop_thread:
 FUNC_5(VAR_11->thread);
err_out_free:
 FUNC_3(VAR_11);
err_out_exit:
 return VAR_12;
}
