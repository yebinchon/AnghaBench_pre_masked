
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef scalar_t__ user_ssize_t ;
typedef int * uio_t ;
typedef int uio_buf ;
struct flistxattr_args {int options; scalar_t__ bufsize; int fd; int namebuf; } ;
typedef int proc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int * FUNC_5 (int,int ,int,int ,char*,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *,size_t*,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

int
FUNC_11(proc_t VAR_7, struct flistxattr_args *VAR_8, user_ssize_t *VAR_9)
{
 vnode_t VAR_10;
 uio_t VAR_11 = ((void*)0);
 int VAR_12 = FUNC_3(VAR_7) ? VAR_3 : VAR_2;
 size_t VAR_13 = 0;
 int VAR_14;
 char VAR_15[ FUNC_0(1) ];

 if (VAR_8->options & (VAR_5 | VAR_6 | VAR_4))
  return (VAR_0);

 if ( (VAR_14 = FUNC_2(VAR_8->fd, &VAR_10)) ) {
  return (VAR_14);
 }
 if ( (VAR_14 = FUNC_9(VAR_10)) ) {
  FUNC_1(VAR_8->fd);
  return(VAR_14);
 }
 if (VAR_8->namebuf != 0 && VAR_8->bufsize > 0) {
  VAR_11 = FUNC_5(1, 0, VAR_12,
             VAR_1, &VAR_15[0], sizeof(VAR_15));
  FUNC_4(VAR_11, VAR_8->namebuf, VAR_8->bufsize);
 }

 VAR_14 = FUNC_8(VAR_10, VAR_11, &VAR_13, VAR_8->options, FUNC_7());

 FUNC_10(VAR_10);
 FUNC_1(VAR_8->fd);
 if (VAR_11) {
  *VAR_9 = (user_ssize_t)VAR_8->bufsize - FUNC_6(VAR_11);
 } else {
  *VAR_9 = (user_ssize_t)VAR_13;
 }
 return (VAR_14);
}
