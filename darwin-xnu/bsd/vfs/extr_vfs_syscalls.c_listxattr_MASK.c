
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
typedef scalar_t__ user_ssize_t ;
typedef int * uio_t ;
typedef int uio_buf ;
typedef int u_int32_t ;
struct nameidata {int ni_vp; } ;
struct listxattr_args {int options; scalar_t__ bufsize; int namebuf; int path; } ;
typedef int proc_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct nameidata*,int ,int ,int ,int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct nameidata*) ;
 int FUNC_4 (struct nameidata*) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int * FUNC_6 (int,int ,int,int ,char*,int) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *,size_t*,int,int ) ;
 int FUNC_10 (int ) ;

int
FUNC_11(proc_t VAR_10, struct listxattr_args *VAR_11, user_ssize_t *VAR_12)
{
 vnode_t VAR_13;
 struct nameidata VAR_14;
 vfs_context_t VAR_15 = FUNC_8();
 uio_t VAR_16 = ((void*)0);
 int VAR_17 = FUNC_0(VAR_10) ? VAR_6 : VAR_5;
 size_t VAR_18 = 0;
 u_int32_t VAR_19;
 int VAR_20;
 char VAR_21[ FUNC_2(1) ];

 if (VAR_11->options & (VAR_9 | VAR_7))
  return (VAR_0);

 VAR_19 = (VAR_11->options & VAR_8) ? 0 : VAR_1;
 FUNC_1(&VAR_14, VAR_2, VAR_3, VAR_19, VAR_17, VAR_11->path, VAR_15);
 if ((VAR_20 = FUNC_3(&VAR_14))) {
  return (VAR_20);
 }
 VAR_13 = VAR_14.ni_vp;
 FUNC_4(&VAR_14);
 if (VAR_11->namebuf != 0 && VAR_11->bufsize > 0) {
  VAR_16 = FUNC_6(1, 0, VAR_17, VAR_4,
                              &VAR_21[0], sizeof(VAR_21));
  FUNC_5(VAR_16, VAR_11->namebuf, VAR_11->bufsize);
 }

 VAR_20 = FUNC_9(VAR_13, VAR_16, &VAR_18, VAR_11->options, VAR_15);

 FUNC_10(VAR_13);
 if (VAR_16) {
  *VAR_12 = (user_ssize_t)VAR_11->bufsize - FUNC_7(VAR_16);
 } else {
  *VAR_12 = (user_ssize_t)VAR_18;
 }
 return (VAR_20);
}
