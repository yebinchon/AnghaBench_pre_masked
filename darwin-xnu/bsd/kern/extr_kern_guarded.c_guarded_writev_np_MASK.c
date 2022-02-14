
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_ssize_t ;
typedef int * uio_t ;
typedef int uguard ;
struct user_iovec {int dummy; } ;
struct proc {int dummy; } ;
struct guarded_writev_np_args {scalar_t__ iovcnt; int fd; int guard; int iovp; } ;
struct guarded_fileproc {int dummy; } ;
struct fileproc {int f_flag; } ;
typedef int guardid_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct fileproc* FUNC_1 (struct guarded_fileproc*) ;
 scalar_t__ FUNC_2 (struct proc*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int ,scalar_t__,struct user_iovec*) ;
 int VAR_8 ;
 int FUNC_5 (struct proc*,int ,struct fileproc*,int ) ;
 int FUNC_6 (struct proc*,int ,struct fileproc*) ;
 int FUNC_7 (struct proc*,int ,int ,struct guarded_fileproc**,int ) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (scalar_t__,int ,int ,int ) ;
 int FUNC_10 (int *) ;
 struct user_iovec* FUNC_11 (int *) ;
 int FUNC_12 (struct proc*,struct fileproc*,int *,scalar_t__*) ;

int
FUNC_13(struct proc *VAR_9, struct guarded_writev_np_args *VAR_10, user_ssize_t *VAR_11)
{
 uio_t VAR_12 = ((void*)0);
 int VAR_13;
 struct fileproc *VAR_14;
 struct user_iovec *VAR_15;
 guardid_t VAR_16;
 struct guarded_fileproc *VAR_17;
 bool VAR_18 = 0;

 FUNC_0(VAR_8, VAR_10->fd);


 if (VAR_10->iovcnt <= 0 || VAR_10->iovcnt > VAR_4)
  return (VAR_1);


 VAR_12 = FUNC_9(VAR_10->iovcnt, 0,
      (FUNC_2(VAR_9) ? VAR_6 : VAR_5),
      VAR_7);




 VAR_15 = FUNC_11(VAR_12);
 if (VAR_15 == ((void*)0)) {
  VAR_13 = VAR_2;
  goto ExitThisRoutine;
 }
 VAR_13 = FUNC_4(VAR_10->iovp,
  FUNC_2(VAR_9) ? VAR_6 : VAR_5,
  VAR_10->iovcnt, VAR_15);
 if (VAR_13) {
  goto ExitThisRoutine;
 }



 VAR_13 = FUNC_8(VAR_12);
 if (VAR_13) {
  goto ExitThisRoutine;
 }

 if ((VAR_13 = FUNC_3(VAR_10->guard, &VAR_16, sizeof (VAR_16))) != 0)
  goto ExitThisRoutine;

 VAR_13 = FUNC_7(VAR_9, VAR_10->fd, VAR_16, &VAR_17, 0);
 if (VAR_13)
  goto ExitThisRoutine;

 VAR_14 = FUNC_1(VAR_17);
 if ((VAR_14->f_flag & VAR_3) == 0) {
  VAR_13 = VAR_0;
 } else {
  VAR_13 = FUNC_12(VAR_9, VAR_14, VAR_12, VAR_11);
  VAR_18 = *VAR_11 > 0;
 }

 if (VAR_18)
         FUNC_6(VAR_9, VAR_10->fd, VAR_14);
 else
         FUNC_5(VAR_9, VAR_10->fd, VAR_14, 0);
ExitThisRoutine:
 if (VAR_12 != ((void*)0)) {
  FUNC_10(VAR_12);
 }
 return (VAR_13);
}
