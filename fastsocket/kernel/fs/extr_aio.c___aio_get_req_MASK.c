
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ring_pages; } ;
struct kioctx {scalar_t__ reqs_active; int ctx_lock; int active_reqs; TYPE_1__ ring_info; } ;
struct kiocb {int ki_users; int ki_list; int * ki_eventfd; int ki_run_list; int * ki_iovec; int * private; int * ki_dtor; int * ki_retry; int * ki_cancel; struct kioctx* ki_ctx; scalar_t__ ki_key; scalar_t__ ki_flags; } ;
struct aio_ring {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,struct aio_ring*) ;
 int VAR_2 ;
 struct aio_ring* FUNC_2 (int ,int ) ;
 struct kiocb* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct kiocb*) ;
 int FUNC_5 (struct aio_ring*,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static struct kiocb *FUNC_10(struct kioctx *VAR_3)
{
 struct kiocb *VAR_4 = ((void*)0);
 struct aio_ring *VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_3(VAR_2, VAR_0);
 if (FUNC_9(!VAR_4))
  return ((void*)0);

 VAR_4->ki_flags = 0;
 VAR_4->ki_users = 2;
 VAR_4->ki_key = 0;
 VAR_4->ki_ctx = VAR_3;
 VAR_4->ki_cancel = ((void*)0);
 VAR_4->ki_retry = ((void*)0);
 VAR_4->ki_dtor = ((void*)0);
 VAR_4->private = ((void*)0);
 VAR_4->ki_iovec = ((void*)0);
 FUNC_0(&VAR_4->ki_run_list);
 VAR_4->ki_eventfd = ((void*)0);




 FUNC_7(&VAR_3->ctx_lock);
 VAR_5 = FUNC_2(VAR_3->ring_info.ring_pages[0], VAR_1);
 if (VAR_3->reqs_active < FUNC_1(&VAR_3->ring_info, VAR_5)) {
  FUNC_6(&VAR_4->ki_list, &VAR_3->active_reqs);
  VAR_3->reqs_active++;
  VAR_6 = 1;
 }
 FUNC_5(VAR_5, VAR_1);
 FUNC_8(&VAR_3->ctx_lock);

 if (!VAR_6) {
  FUNC_4(VAR_2, VAR_4);
  VAR_4 = ((void*)0);
 }

 return VAR_4;
}
