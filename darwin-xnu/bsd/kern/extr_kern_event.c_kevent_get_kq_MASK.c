
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int trp_value; } ;
typedef TYPE_1__ workq_threadreq_param_t ;
typedef int thread_t ;
struct proc {struct filedesc* p_fd; } ;
struct kqworkloop {int kqwl_params; scalar_t__ kqwl_dynamicid; } ;
struct kqueue {int kq_state; } ;
struct fileproc {int dummy; } ;
struct filedesc {struct kqueue* fd_wqkqueue; } ;
typedef scalar_t__ kqueue_id_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct proc*,int,struct fileproc*,int ) ;
 int FUNC_3 (struct proc*,int,struct fileproc**,struct kqueue**) ;
 int FUNC_4 (int ) ;
 struct kqueue* FUNC_5 (int ) ;
 int FUNC_6 (struct kqueue*,unsigned int) ;
 int FUNC_7 (struct proc*) ;
 int FUNC_8 (struct proc*) ;
 int FUNC_9 (struct proc*) ;
 int FUNC_10 (struct proc*) ;
 struct kqueue* FUNC_11 (struct proc*,unsigned int) ;
 int FUNC_12 (struct kqueue*) ;
 int FUNC_13 (struct proc*) ;
 int FUNC_14 (struct proc*,scalar_t__,struct kqueue*) ;
 struct kqueue* FUNC_15 (struct proc*,scalar_t__) ;
 int FUNC_16 (struct kqueue*,int ) ;
 int FUNC_17 (struct kqueue*) ;

__attribute__((used)) static int
FUNC_18(struct proc *VAR_12, kqueue_id_t VAR_13, workq_threadreq_param_t *VAR_14,
  unsigned int VAR_15, struct fileproc **VAR_16, int *VAR_17,
  struct kqueue **VAR_18)
{
 struct filedesc *VAR_19 = VAR_12->p_fd;
 struct fileproc *VAR_20 = ((void*)0);
 struct kqueue *VAR_21 = ((void*)0);
 int VAR_22 = 0;
 int VAR_23 = 0;
 thread_t VAR_24 = FUNC_1();

 FUNC_0(!VAR_14 || (VAR_15 & VAR_8));


 if (VAR_15 & VAR_4) {
  FUNC_0(VAR_15 & VAR_8);
  FUNC_0(!VAR_14 || (VAR_15 & VAR_6));
  VAR_21 = FUNC_5(VAR_24);






  if (VAR_13 == (kqueue_id_t)-1 &&
      (VAR_15 & VAR_7) &&
      (VAR_15 & VAR_8)) {

   if (!FUNC_4(VAR_24) || !VAR_21) {
    return VAR_1;
   }

   FUNC_17(VAR_21);
   goto out;
  }

  if (VAR_13 == 0 || VAR_13 == (kqueue_id_t)-1) {
   return VAR_1;
  }


  if (VAR_21 != ((void*)0) && ((struct kqworkloop *)VAR_21)->kqwl_dynamicid == VAR_13) {

   if (VAR_15 & VAR_6) {
    return VAR_0;
   }


   FUNC_0(VAR_21->kq_state & VAR_11);
   FUNC_17(VAR_21);
   goto out;
  }


  FUNC_9(VAR_12);
  VAR_21 = FUNC_15(VAR_12, VAR_13);
  if (VAR_21 == ((void*)0)) {
   FUNC_10(VAR_12);

   if (VAR_15 & VAR_5) {
    return VAR_2;
   }

   struct kqueue *VAR_25;
   VAR_25 = FUNC_11(VAR_12, VAR_15);
   if (!VAR_25) {
    return VAR_3;
   }

   FUNC_9(VAR_12);
   FUNC_13(VAR_12);
   VAR_21 = FUNC_15(VAR_12, VAR_13);
   if (VAR_21 == ((void*)0)) {

    VAR_21 = VAR_25;
    if (VAR_14) {
     struct kqworkloop *VAR_26 = (struct kqworkloop *)VAR_21;
     VAR_26->kqwl_params = VAR_14->trp_value;
    }
    FUNC_14(VAR_12, VAR_13, VAR_21);
    FUNC_10(VAR_12);
   } else if (VAR_15 & VAR_6) {

    FUNC_10(VAR_12);
    FUNC_16(VAR_25, VAR_10);
    FUNC_12(VAR_25);
    return VAR_0;
   } else {

    FUNC_17(VAR_21);
    FUNC_10(VAR_12);
    FUNC_16(VAR_25, VAR_10);
    FUNC_12(VAR_25);
   }
  } else {

   if (VAR_15 & VAR_6) {
    FUNC_10(VAR_12);
    return VAR_0;
   }


   FUNC_0(VAR_21->kq_state & VAR_11);
   FUNC_17(VAR_21);
   FUNC_10(VAR_12);
  }

 } else if (VAR_15 & VAR_9) {

  if (VAR_15 & VAR_7) {
   FUNC_0(VAR_19->fd_wqkqueue != ((void*)0));
  }







  VAR_21 = VAR_19->fd_wqkqueue;
  if (VAR_21 == ((void*)0)) {
   struct kqueue *VAR_27 = FUNC_11(VAR_12, VAR_9);
   if (VAR_27 == ((void*)0)) {
    return VAR_3;
   }

   FUNC_7(VAR_12);
   if (VAR_19->fd_wqkqueue == ((void*)0)) {
    VAR_21 = VAR_19->fd_wqkqueue = VAR_27;
    FUNC_8(VAR_12);
   } else {
    FUNC_8(VAR_12);
    VAR_21 = VAR_19->fd_wqkqueue;
    FUNC_12(VAR_27);
   }
  }
 } else {

  VAR_22 = (int)VAR_13;
  if ((VAR_23 = FUNC_3(VAR_12, VAR_22, &VAR_20, &VAR_21)) != 0)
   return (VAR_23);
 }
 if ((VAR_23 = FUNC_6(VAR_21, VAR_15)) != 0) {

  if (VAR_20 != ((void*)0))
   FUNC_2(VAR_12, VAR_22, VAR_20, 0);
  return VAR_23;
 }

out:
 *VAR_16 = VAR_20;
 *VAR_17 = VAR_22;
 *VAR_18 = VAR_21;

 return VAR_23;
}
