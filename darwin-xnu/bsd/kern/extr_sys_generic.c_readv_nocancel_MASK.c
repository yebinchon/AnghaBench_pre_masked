
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_ssize_t ;
typedef int * uio_t ;
struct user_iovec {int dummy; } ;
struct readv_nocancel_args {scalar_t__ iovcnt; int fd; int iovp; } ;
struct proc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct proc*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,scalar_t__,struct user_iovec*) ;
 int FUNC_2 (struct proc*,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (scalar_t__,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 struct user_iovec* FUNC_6 (int *) ;

int
FUNC_7(struct proc *VAR_6, struct readv_nocancel_args *VAR_7, user_ssize_t *VAR_8)
{
 uio_t VAR_9 = ((void*)0);
 int VAR_10;
 struct user_iovec *VAR_11;


 if (VAR_7->iovcnt <= 0 || VAR_7->iovcnt > VAR_2)
  return (VAR_0);


 VAR_9 = FUNC_4(VAR_7->iovcnt, 0,
      (FUNC_0(VAR_6) ? VAR_5 : VAR_4),
      VAR_3);




 VAR_11 = FUNC_6(VAR_9);
 if (VAR_11 == ((void*)0)) {
  VAR_10 = VAR_1;
  goto ExitThisRoutine;
 }
 VAR_10 = FUNC_1(VAR_7->iovp,
  FUNC_0(VAR_6) ? VAR_5 : VAR_4,
  VAR_7->iovcnt, VAR_11);
 if (VAR_10) {
  goto ExitThisRoutine;
 }



 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10) {
  goto ExitThisRoutine;
 }
 VAR_10 = FUNC_2(VAR_6, VAR_7->fd, VAR_9, VAR_8);

ExitThisRoutine:
 if (VAR_9 != ((void*)0)) {
  FUNC_5(VAR_9);
 }
 return (VAR_10);
}
