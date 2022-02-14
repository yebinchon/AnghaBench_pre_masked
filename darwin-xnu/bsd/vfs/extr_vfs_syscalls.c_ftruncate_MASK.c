
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
typedef int vfs_context_t ;
struct vnode_attr {int dummy; } ;
struct ftruncate_args {int fd; scalar_t__ length; } ;
struct fileproc {TYPE_1__* f_fglob; } ;
typedef int proc_t ;
typedef int int32_t ;
struct TYPE_2__ {int fg_flag; int fg_cred; scalar_t__ fg_data; } ;


 int VAR_0 ;
 int FUNC_0 (int,int,...) ;


 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (struct vnode_attr*) ;
 int FUNC_3 (struct vnode_attr*,int ,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int,struct fileproc**,int ) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (int ,struct fileproc*,int,scalar_t__,int *) ;
 int VAR_3 ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,struct vnode_attr*,int ) ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_13(proc_t VAR_6, struct ftruncate_args *VAR_7, int32_t *VAR_8)
{
 vfs_context_t VAR_9 = FUNC_9();
 struct vnode_attr VAR_10;
 vnode_t VAR_11;
 struct fileproc *VAR_12;
 int VAR_13 ;
 int VAR_14 = VAR_7->fd;

 FUNC_0(VAR_14, VAR_7->fd);
 if (VAR_7->length < 0)
  return(VAR_1);

 if ( (VAR_13 = FUNC_5(VAR_6,VAR_14,&VAR_12,0)) ) {
  return(VAR_13);
 }

 switch (FUNC_1(VAR_12->f_fglob)) {
 case 129:
  VAR_13 = FUNC_8(VAR_6, VAR_12, VAR_7->fd, VAR_7->length, VAR_8);
  goto out;
 case 128:
  break;
 default:
  VAR_13 = VAR_1;
  goto out;
 }

 VAR_11 = (vnode_t)VAR_12->f_fglob->fg_data;

 if ((VAR_12->f_fglob->fg_flag & VAR_2) == 0) {
  FUNC_0(VAR_5, VAR_11, VAR_0);
  VAR_13 = VAR_1;
  goto out;
 }

 if ((VAR_13 = FUNC_10(VAR_11)) != 0) {
  goto out;
 }

 FUNC_0(VAR_4, VAR_11, VAR_0);
 FUNC_2(&VAR_10);
 FUNC_3(&VAR_10, VAR_3, VAR_7->length);
 VAR_13 = FUNC_12(VAR_11, &VAR_10, VAR_9);






 (void)FUNC_11(VAR_11);
out:
 FUNC_4(VAR_14);
 return (VAR_13);
}
