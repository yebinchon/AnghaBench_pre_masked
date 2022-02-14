
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int * uio_t ;
typedef int uio_buf ;
struct fsetxattr_args {int options; int fd; int size; int value; int position; int attrname; } ;
typedef int proc_t ;
typedef int attrname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,char*,int,size_t*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int * FUNC_7 (int,int ,int,int ,char*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,char*,int *,int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (char*) ;

int
FUNC_13(proc_t VAR_13, struct fsetxattr_args *VAR_14, int *VAR_15)
{
 vnode_t VAR_16;
 char VAR_17[VAR_9+1];
 uio_t VAR_18 = ((void*)0);
 int VAR_19 = FUNC_0(VAR_13) ? VAR_7 : VAR_6;
 size_t VAR_20;
 int VAR_21;
 char VAR_22[ FUNC_1(1) ];




 if (VAR_14->options & (VAR_11 | VAR_12 | VAR_10))
  return (VAR_0);

 VAR_21 = FUNC_3(VAR_14->attrname, VAR_17, sizeof(VAR_17), &VAR_20);
 if (VAR_21 != 0) {
  if (VAR_21 == VAR_2) {

   return (VAR_1);
  }

  return VAR_21;
 }
 if (FUNC_12(VAR_17))
  return(VAR_2);
 if (VAR_14->size != 0 && VAR_14->value == 0) {
  return (VAR_0);
 }
 if ( (VAR_21 = FUNC_5(VAR_14->fd, &VAR_16)) ) {
  return (VAR_21);
 }
 if ( (VAR_21 = FUNC_10(VAR_16)) ) {
  FUNC_4(VAR_14->fd);
  return(VAR_21);
 }
 VAR_18 = FUNC_7(1, VAR_14->position, VAR_19, VAR_8,
                             &VAR_22[0], sizeof(VAR_22));
 FUNC_6(VAR_18, VAR_14->value, VAR_14->size);

 VAR_21 = FUNC_9(VAR_16, VAR_17, VAR_18, VAR_14->options, FUNC_8());







 FUNC_11(VAR_16);
 FUNC_4(VAR_14->fd);
 *VAR_15 = 0;
 return (VAR_21);
}
