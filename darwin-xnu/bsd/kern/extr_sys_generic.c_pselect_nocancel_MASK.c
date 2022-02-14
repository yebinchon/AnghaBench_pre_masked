
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int ts64 ;
typedef int ts32 ;
struct uthread {int uu_oldmask; int uu_sigmask; int uu_flag; } ;
struct user64_timespec {int tv_nsec; int tv_sec; } ;
struct user32_timespec {int tv_nsec; int tv_sec; } ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct select_nocancel_args {int dummy; } ;
struct pselect_nocancel_args {scalar_t__ ts; scalar_t__ mask; } ;
struct proc {int dummy; } ;
typedef int sigset_t ;
typedef int int32_t ;
typedef int* caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct proc*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (scalar_t__,int*,int) ;
 int FUNC_3 () ;
 struct uthread* FUNC_4 (int ) ;
 int FUNC_5 (struct proc*,struct select_nocancel_args*,int ,int *) ;
 int VAR_4 ;
 int FUNC_6 (struct timespec*) ;
 int FUNC_7 (struct timespec*) ;

int
FUNC_8(struct proc *VAR_5, struct pselect_nocancel_args *VAR_6, int32_t *VAR_7)
{
 int VAR_8;
 struct uthread *VAR_9;
 uint64_t VAR_10 = 0;

 if (VAR_6->ts) {
  struct timespec VAR_11;

  if (FUNC_0(VAR_5)) {
   struct user64_timespec VAR_12;
   VAR_8 = FUNC_2(VAR_6->ts, (caddr_t)&VAR_12, sizeof(VAR_12));
   VAR_11.tv_sec = VAR_12;
   VAR_11.tv_nsec = VAR_12;
  } else {
   struct user32_timespec VAR_13;
   VAR_8 = FUNC_2(VAR_6->ts, (caddr_t)&VAR_13, sizeof(VAR_13));
   VAR_11.tv_sec = VAR_13;
   VAR_11.tv_nsec = VAR_13;
  }
  if (VAR_8) {
   return VAR_8;
  }

  if (!FUNC_6(&VAR_11)) {
   return VAR_1;
  }
  FUNC_1(FUNC_7(&VAR_11), &VAR_10);
 }

 VAR_9 = FUNC_4(FUNC_3());

 if (VAR_6->mask != VAR_2) {

  sigset_t VAR_14;
  VAR_8 = FUNC_2(VAR_6->mask, &VAR_14, sizeof(sigset_t));
  if (VAR_8) {
   return VAR_8;
  }
  VAR_9->uu_oldmask = VAR_9->uu_sigmask;
  VAR_9->uu_flag |= VAR_3;
  VAR_9->uu_sigmask = (VAR_14 & ~VAR_4);
 }

 VAR_8 = FUNC_5(VAR_5, (struct select_nocancel_args *)VAR_6, VAR_10, VAR_7);

 if (VAR_8 != VAR_0 && VAR_9->uu_flag & VAR_3) {






  VAR_9->uu_sigmask = VAR_9->uu_oldmask;
  VAR_9->uu_oldmask = 0;
  VAR_9->uu_flag &= ~VAR_3;
 }

 return VAR_8;
}
