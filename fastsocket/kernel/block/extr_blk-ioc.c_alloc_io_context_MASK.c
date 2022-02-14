
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_context {scalar_t__ cgroup_changed; int * ioc_data; int cic_list; int radix_root; int * aic; scalar_t__ nr_batch_requests; int last_waited; scalar_t__ ioprio; scalar_t__ ioprio_changed; int lock; int nr_tasks; int refcount; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct io_context* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *) ;

struct io_context *FUNC_6(gfp_t VAR_4, int VAR_5)
{
 struct io_context *VAR_6;

 VAR_6 = FUNC_4(VAR_2, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_2(&VAR_6->refcount, 1);
  FUNC_3(&VAR_6->nr_tasks, 1);
  FUNC_5(&VAR_6->lock);
  VAR_6->ioprio_changed = 0;
  VAR_6->ioprio = 0;
  VAR_6->last_waited = VAR_3;
  VAR_6->nr_batch_requests = 0;
  VAR_6->aic = ((void*)0);
  FUNC_1(&VAR_6->radix_root, VAR_0 | VAR_1);
  FUNC_0(&VAR_6->cic_list);
  VAR_6->ioc_data = ((void*)0);



 }

 return VAR_6;
}
