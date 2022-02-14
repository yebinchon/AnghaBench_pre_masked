
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vhost_work_fn_t ;
struct vhost_work {scalar_t__ done_seq; scalar_t__ queue_seq; scalar_t__ flushing; int done; int fn; int node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct vhost_work *VAR_0, vhost_work_fn_t VAR_1)
{
 FUNC_0(&VAR_0->node);
 VAR_0->fn = VAR_1;
 FUNC_1(&VAR_0->done);
 VAR_0->flushing = 0;
 VAR_0->queue_seq = VAR_0->done_seq = 0;
}
