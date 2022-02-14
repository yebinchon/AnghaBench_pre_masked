
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef scalar_t__ user_ssize_t ;
typedef int * uio_t ;
typedef int uio_buf ;
struct fgetxattr_args {int options; scalar_t__ size; int fd; int value; int position; int attrname; } ;
typedef int proc_t ;
typedef int attrname ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*,int,size_t*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int * FUNC_6 (int,int ,int,int ,char*,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*,int *,size_t*,int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (char*) ;

int
FUNC_13(proc_t VAR_9, struct fgetxattr_args *VAR_10, user_ssize_t *VAR_11)
{
 vnode_t VAR_12;
 char VAR_13[VAR_5+1];
 uio_t VAR_14 = ((void*)0);
 int VAR_15 = FUNC_0(VAR_9) ? VAR_4 : VAR_3;
 size_t VAR_16 = 0;
 size_t VAR_17;
 int VAR_18;
 char VAR_19[ FUNC_1(1) ];

 if (VAR_10->options & (VAR_7 | VAR_8 | VAR_6))
  return (VAR_0);

 if ( (VAR_18 = FUNC_4(VAR_10->fd, &VAR_12)) ) {
  return (VAR_18);
 }
 if ( (VAR_18 = FUNC_10(VAR_12)) ) {
  FUNC_3(VAR_10->fd);
  return(VAR_18);
 }
 VAR_18 = FUNC_2(VAR_10->attrname, VAR_13, sizeof(VAR_13), &VAR_17);
 if (VAR_18 != 0) {
  goto out;
 }
 if (FUNC_12(VAR_13)) {
  VAR_18 = VAR_1;
  goto out;
 }
 if (VAR_10->value && VAR_10->size > 0) {
  VAR_14 = FUNC_6(1, VAR_10->position, VAR_15, VAR_2,
                              &VAR_19[0], sizeof(VAR_19));
  FUNC_5(VAR_14, VAR_10->value, VAR_10->size);
 }

 VAR_18 = FUNC_9(VAR_12, VAR_13, VAR_14, &VAR_16, VAR_10->options, FUNC_8());
out:
 (void)FUNC_11(VAR_12);
 FUNC_3(VAR_10->fd);

 if (VAR_14) {
  *VAR_11 = VAR_10->size - FUNC_7(VAR_14);
 } else {
  *VAR_11 = (user_ssize_t)VAR_16;
 }
 return (VAR_18);
}
