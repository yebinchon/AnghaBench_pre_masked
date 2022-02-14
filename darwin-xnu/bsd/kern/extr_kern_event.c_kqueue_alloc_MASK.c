
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proc {struct filedesc* p_fd; } ;
struct kqueue {struct proc* kq_p; int kq_reqlock; int kq_lock; int kq_wqs; } ;
struct TYPE_4__ {int kqr_suppressed; int kqr_state; } ;
struct kqworkq {int kqwl_state; int kqwl_retains; int kqf_suppressed; int kqf_queue; struct kqueue kqf_kqueue; int kqwl_statelock; TYPE_2__ kqwl_request; int * kqwl_queue; struct kqueue kqwl_kqueue; TYPE_1__* kqwq_request; int * kqwq_queue; int kqwq_state; struct kqueue kqwq_kqueue; } ;
struct kqworkloop {int kqwl_state; int kqwl_retains; int kqf_suppressed; int kqf_queue; struct kqueue kqf_kqueue; int kqwl_statelock; TYPE_2__ kqwl_request; int * kqwl_queue; struct kqueue kqwl_kqueue; TYPE_1__* kqwq_request; int * kqwq_queue; int kqwq_state; struct kqueue kqwq_kqueue; } ;
struct kqfile {int kqwl_state; int kqwl_retains; int kqf_suppressed; int kqf_queue; struct kqueue kqf_kqueue; int kqwl_statelock; TYPE_2__ kqwl_request; int * kqwl_queue; struct kqueue kqwl_kqueue; TYPE_1__* kqwq_request; int * kqwq_queue; int kqwq_state; struct kqueue kqwq_kqueue; } ;
struct filedesc {scalar_t__ fd_knlistsize; } ;
struct TYPE_3__ {int kqr_qos_index; int kqr_suppressed; int kqr_state; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct kqworkq*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;
 int FUNC_6 (int *,int,int *,void*) ;
 scalar_t__ FUNC_7 (int ) ;

struct kqueue *
FUNC_8(struct proc *VAR_17, unsigned int VAR_18)
{
 struct filedesc *VAR_19 = VAR_17->p_fd;
 struct kqueue *VAR_20 = ((void*)0);
 int VAR_21;
 void *VAR_22 = ((void*)0);

 if (VAR_18 & VAR_1) {
  struct kqworkq *VAR_23;
  int VAR_24;

  VAR_23 = (struct kqworkq *)FUNC_7(VAR_16);
  if (VAR_23 == ((void*)0))
   return ((void*)0);

  VAR_20 = &VAR_23->kqwq_kqueue;
  FUNC_1(VAR_23, sizeof (struct kqworkq));

  VAR_23->kqwq_state = VAR_9;

  for (VAR_24 = 0; VAR_24 < VAR_5; VAR_24++) {
   FUNC_0(&VAR_23->kqwq_queue[VAR_24]);
  }
  for (VAR_24 = 0; VAR_24 < VAR_5; VAR_24++) {
   if (VAR_24 != VAR_6) {
    VAR_23->kqwq_request[VAR_24].kqr_state |= VAR_2;
   }
   VAR_23->kqwq_request[VAR_24].kqr_qos_index = VAR_24;
   FUNC_0(&VAR_23->kqwq_request[VAR_24].kqr_suppressed);
  }

  VAR_21 = VAR_10;
  VAR_22 = (void *)VAR_23;
 } else if (VAR_18 & VAR_0) {
  struct kqworkloop *VAR_25;
  int VAR_26;

  VAR_25 = (struct kqworkloop *)FUNC_7(VAR_15);
  if (VAR_25 == ((void*)0))
   return ((void*)0);

  FUNC_1(VAR_25, sizeof (struct kqworkloop));

  VAR_25->kqwl_state = VAR_8 | VAR_7;
  VAR_25->kqwl_retains = 1;
  VAR_25->kqwl_request.kqr_state = VAR_3;

  VAR_20 = &VAR_25->kqwl_kqueue;
  for (VAR_26 = 0; VAR_26 < VAR_4; VAR_26++) {
   FUNC_0(&VAR_25->kqwl_queue[VAR_26]);
  }
  FUNC_0(&VAR_25->kqwl_request.kqr_suppressed);

  FUNC_2(&VAR_25->kqwl_statelock, VAR_13, VAR_12);

  VAR_21 = VAR_10;
  VAR_22 = (void *)VAR_25;
 } else {
  struct kqfile *VAR_27;

  VAR_27 = (struct kqfile *)FUNC_7(VAR_14);
  if (VAR_27 == ((void*)0))
   return ((void*)0);

  VAR_20 = &VAR_27->kqf_kqueue;
  FUNC_1(VAR_27, sizeof (struct kqfile));
  FUNC_0(&VAR_27->kqf_queue);
  FUNC_0(&VAR_27->kqf_suppressed);

  VAR_21 = VAR_10 | VAR_11;
 }

 FUNC_6(&VAR_20->kq_wqs, VAR_21, ((void*)0), VAR_22);
 FUNC_3(&VAR_20->kq_lock, VAR_13, VAR_12);
 FUNC_3(&VAR_20->kq_reqlock, VAR_13, VAR_12);
 VAR_20->kq_p = VAR_17;

 if (VAR_19->fd_knlistsize < 0) {
  FUNC_4(VAR_17);
  if (VAR_19->fd_knlistsize < 0)
   VAR_19->fd_knlistsize = 0;
  FUNC_5(VAR_17);
 }

 return (VAR_20);
}
