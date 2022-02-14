
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ user_ssize_t ;
typedef int * uio_t ;
struct writev_nocancel_args {scalar_t__ iovcnt; int fd; int iovp; } ;
struct user_iovec {int dummy; } ;
struct proc {int dummy; } ;
struct fileproc {int f_flag; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct fileproc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct proc*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,scalar_t__,struct user_iovec*) ;
 int VAR_9 ;
 int FUNC_4 (struct proc*,int ,struct fileproc*,int ) ;
 int FUNC_5 (struct proc*,int ,struct fileproc*) ;
 int FUNC_6 (struct proc*,int ,struct fileproc*,int ) ;
 int FUNC_7 (struct proc*,int ,struct fileproc**,int ) ;
 int VAR_10 ;
 int FUNC_8 (struct proc*) ;
 int FUNC_9 (struct proc*) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (scalar_t__,int ,int ,int ) ;
 int FUNC_12 (int *) ;
 struct user_iovec* FUNC_13 (int *) ;
 int FUNC_14 (struct proc*,struct fileproc*,int *,scalar_t__*) ;

int
FUNC_15(struct proc *VAR_11, struct writev_nocancel_args *VAR_12, user_ssize_t *VAR_13)
{
 uio_t VAR_14 = ((void*)0);
 int VAR_15;
 struct fileproc *VAR_16;
 struct user_iovec *VAR_17;
 bool VAR_18 = 0;

 FUNC_0(VAR_9, VAR_12->fd);


 if (VAR_12->iovcnt <= 0 || VAR_12->iovcnt > VAR_5)
  return (VAR_1);


 VAR_14 = FUNC_11(VAR_12->iovcnt, 0,
      (FUNC_2(VAR_11) ? VAR_7 : VAR_6),
      VAR_8);




 VAR_17 = FUNC_13(VAR_14);
 if (VAR_17 == ((void*)0)) {
  VAR_15 = VAR_2;
  goto ExitThisRoutine;
 }
 VAR_15 = FUNC_3(VAR_12->iovp,
  FUNC_2(VAR_11) ? VAR_7 : VAR_6,
  VAR_12->iovcnt, VAR_17);
 if (VAR_15) {
  goto ExitThisRoutine;
 }



 VAR_15 = FUNC_10(VAR_14);
 if (VAR_15) {
  goto ExitThisRoutine;
 }

 VAR_15 = FUNC_7(VAR_11, VAR_12->fd, &VAR_16, 0);
 if (VAR_15)
  goto ExitThisRoutine;

 if ((VAR_16->f_flag & VAR_3) == 0) {
  VAR_15 = VAR_0;
 } else if (FUNC_1(VAR_16, VAR_4)) {
  FUNC_8(VAR_11);
  VAR_15 = FUNC_6(VAR_11, VAR_12->fd, VAR_16, VAR_10);
  FUNC_9(VAR_11);
 } else {
  VAR_15 = FUNC_14(VAR_11, VAR_16, VAR_14, VAR_13);
  VAR_18 = *VAR_13 > 0;
 }

 if (VAR_18)
         FUNC_5(VAR_11, VAR_12->fd, VAR_16);
 else
         FUNC_4(VAR_11, VAR_12->fd, VAR_16, 0);

ExitThisRoutine:
 if (VAR_14 != ((void*)0)) {
  FUNC_12(VAR_14);
 }
 return (VAR_15);
}
