
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct aio_ring_info {unsigned long tail; unsigned long nr; int * ring_pages; } ;
struct kioctx {int ctx_lock; int wait; struct aio_ring_info ring_info; } ;
struct TYPE_4__ {scalar_t__ user; int tsk; } ;
struct TYPE_5__ {scalar_t__ prev; } ;
struct kiocb {int ki_users; long ki_user_data; int * ki_eventfd; TYPE_1__ ki_obj; TYPE_2__ ki_run_list; struct kioctx* ki_ctx; } ;
struct io_event {long data; long res; long res2; scalar_t__ obj; } ;
struct aio_ring {unsigned long tail; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct kioctx*,struct kiocb*) ;
 struct io_event* FUNC_2 (struct aio_ring_info*,unsigned long,int ) ;
 int FUNC_3 (char*,struct kioctx*,unsigned long,struct kiocb*,scalar_t__,long,long,long) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (struct kiocb*) ;
 scalar_t__ FUNC_6 (struct kiocb*) ;
 struct aio_ring* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct aio_ring*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (char*,struct kiocb*,unsigned long) ;
 int FUNC_12 (struct io_event*,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int *,unsigned long) ;
 int FUNC_16 (int *,unsigned long) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int ) ;

int FUNC_20(struct kiocb *VAR_2, long VAR_3, long VAR_4)
{
 struct kioctx *VAR_5 = VAR_2->ki_ctx;
 struct aio_ring_info *VAR_6;
 struct aio_ring *VAR_7;
 struct io_event *VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 int VAR_11;
 if (FUNC_5(VAR_2)) {
  FUNC_0(VAR_2->ki_users != 1);
  VAR_2->ki_user_data = VAR_3;
  VAR_2->ki_users = 0;
  FUNC_19(VAR_2->ki_obj.tsk);
  return 1;
 }

 VAR_6 = &VAR_5->ring_info;







 FUNC_15(&VAR_5->ctx_lock, VAR_9);

 if (VAR_2->ki_run_list.prev && !FUNC_10(&VAR_2->ki_run_list))
  FUNC_9(&VAR_2->ki_run_list);





 if (FUNC_6(VAR_2))
  goto put_rq;

 VAR_7 = FUNC_7(VAR_6->ring_pages[0], VAR_1);

 VAR_10 = VAR_6->tail;
 VAR_8 = FUNC_2(VAR_6, VAR_10, VAR_0);
 if (++VAR_10 >= VAR_6->nr)
  VAR_10 = 0;

 VAR_8->obj = (u64)(unsigned long)VAR_2->ki_obj.user;
 VAR_8->data = VAR_2->ki_user_data;
 VAR_8->res = VAR_3;
 VAR_8->res2 = VAR_4;

 FUNC_3("aio_complete: %p[%lu]: %p: %p %Lx %lx %lx\n",
  VAR_5, VAR_10, VAR_2, VAR_2->ki_obj.user, VAR_2->ki_user_data,
  VAR_3, VAR_4);




 FUNC_14();

 VAR_6->tail = VAR_10;
 VAR_7->tail = VAR_10;

 FUNC_12(VAR_8, VAR_0);
 FUNC_8(VAR_7, VAR_1);

 FUNC_11("added to ring %p at [%lu]\n", VAR_2, VAR_10);






 if (VAR_2->ki_eventfd != ((void*)0))
  FUNC_4(VAR_2->ki_eventfd, 1);

put_rq:

 VAR_11 = FUNC_1(VAR_5, VAR_2);







 FUNC_13();

 if (FUNC_17(&VAR_5->wait))
  FUNC_18(&VAR_5->wait);

 FUNC_16(&VAR_5->ctx_lock, VAR_9);
 return VAR_11;
}
