
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
struct turnstile {int dummy; } ;
struct proc {struct filedesc* p_fd; } ;
struct TYPE_2__ {int kqr_state; } ;
struct kqworkq {scalar_t__ kqwl_retains; int kqwl_statelock; int * kqwl_turnstile; TYPE_1__ kqwl_request; } ;
struct kqworkloop {scalar_t__ kqwl_retains; int kqwl_statelock; int * kqwl_turnstile; TYPE_1__ kqwl_request; } ;
struct kqueue {int kq_state; int kq_reqlock; int kq_lock; int kq_wqs; struct proc* kq_p; } ;
struct kqfile {scalar_t__ kqwl_retains; int kqwl_statelock; int * kqwl_turnstile; TYPE_1__ kqwl_request; } ;
struct knote {int dummy; } ;
struct filedesc {int fd_knlistsize; scalar_t__ fd_knhashmask; int * fd_knhash; int * fd_knlist; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct knote* FUNC_1 (int *) ;
 struct knote* FUNC_2 (struct knote*,int ) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (struct proc*) ;
 int VAR_5 ;
 int FUNC_6 (struct kqueue*,struct knote*,int *) ;
 struct kqueue* FUNC_7 (struct knote*) ;
 scalar_t__ FUNC_8 (struct kqueue*,struct knote*,int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct kqueue*) ;
 scalar_t__ FUNC_10 (struct kqworkq*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct proc*) ;
 int FUNC_14 (struct proc*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 () ;
 int FUNC_17 (uintptr_t,int **,struct turnstile**) ;
 int FUNC_18 (struct turnstile*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int ,struct kqworkq*) ;

void
FUNC_21(struct kqueue *VAR_10)
{
 struct proc *VAR_11;
 struct filedesc *VAR_12;
 struct knote *VAR_13;
 int VAR_14;

 if (VAR_10 == ((void*)0))
  return;

 VAR_11 = VAR_10->kq_p;
 VAR_12 = VAR_11->p_fd;





 if ((VAR_10->kq_state & VAR_2) == 0) {
  FUNC_0(VAR_5);

  FUNC_13(VAR_11);
  for (VAR_14 = 0; VAR_14 < VAR_12->fd_knlistsize; VAR_14++) {
   VAR_13 = FUNC_1(&VAR_12->fd_knlist[VAR_14]);
   while (VAR_13 != ((void*)0)) {
    if (VAR_10 == FUNC_7(VAR_13)) {
     FUNC_9(VAR_10);
     FUNC_14(VAR_11);
     if (FUNC_8(VAR_10, VAR_13, &VAR_5, VAR_0)) {
      FUNC_6(VAR_10, VAR_13, &VAR_5);
     }
     FUNC_13(VAR_11);

     VAR_13 = FUNC_1(&VAR_12->fd_knlist[VAR_14]);
     continue;
    }
    VAR_13 = FUNC_2(VAR_13, VAR_4);
   }
  }

  FUNC_4(VAR_11);
  FUNC_14(VAR_11);

  if (VAR_12->fd_knhashmask != 0) {
   for (VAR_14 = 0; VAR_14 < (int)VAR_12->fd_knhashmask + 1; VAR_14++) {
    VAR_13 = FUNC_1(&VAR_12->fd_knhash[VAR_14]);
    while (VAR_13 != ((void*)0)) {
     if (VAR_10 == FUNC_7(VAR_13)) {
      FUNC_9(VAR_10);
      FUNC_5(VAR_11);
      if (FUNC_8(VAR_10, VAR_13, &VAR_5, VAR_0)) {
       FUNC_6(VAR_10, VAR_13, &VAR_5);
      }
      FUNC_4(VAR_11);

      VAR_13 = FUNC_1(&VAR_12->fd_knhash[VAR_14]);
      continue;
     }
     VAR_13 = FUNC_2(VAR_13, VAR_4);
    }
   }
  }
  FUNC_5(VAR_11);
 }

 if (VAR_10->kq_state & VAR_2) {
  struct kqworkloop *VAR_15 = (struct kqworkloop *)VAR_10;
  thread_t VAR_16 = FUNC_10(VAR_15);

  if (VAR_16) FUNC_15(VAR_16);

  if (VAR_15->kqwl_request.kqr_state & VAR_1) {
   struct turnstile *VAR_17;
   FUNC_17((uintptr_t)VAR_15, &VAR_15->kqwl_turnstile, &VAR_17);
   FUNC_16();
   FUNC_18(VAR_17);
  } else {
   FUNC_3(VAR_15->kqwl_turnstile == ((void*)0));
  }
 }





 FUNC_19(&VAR_10->kq_wqs);
 FUNC_12(&VAR_10->kq_lock, VAR_6);
 FUNC_12(&VAR_10->kq_reqlock, VAR_6);

 if (VAR_10->kq_state & VAR_3) {
  FUNC_20(VAR_9, (struct kqworkq *)VAR_10);
 } else if (VAR_10->kq_state & VAR_2) {
  struct kqworkloop *VAR_18 = (struct kqworkloop *)VAR_10;

  FUNC_3(VAR_18->kqwl_retains == 0);
  FUNC_11(&VAR_18->kqwl_statelock, VAR_6);
  FUNC_20(VAR_8, VAR_18);
 } else {
  FUNC_20(VAR_7, (struct kqfile *)VAR_10);
 }
}
