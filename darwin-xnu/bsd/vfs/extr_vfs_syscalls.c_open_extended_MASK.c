
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vnode_attr {int dummy; } ;
struct open_extended_args {scalar_t__ xsecurity; int mode; int flags; int path; int * gid; int * uid; } ;
struct nameidata {int dummy; } ;
struct filedesc {int fd_cmask; } ;
typedef TYPE_1__* proc_t ;
typedef TYPE_2__* kauth_filesec_t ;
typedef int int32_t ;
struct TYPE_7__ {int fsec_acl; } ;
struct TYPE_6__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct nameidata*,int ,int ,int,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct vnode_attr*) ;
 int FUNC_3 (struct vnode_attr*,int ,int) ;
 int VAR_10 ;
 int FUNC_4 (scalar_t__,TYPE_2__**) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,struct nameidata*,int ,struct vnode_attr*,int ,int *,int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_7 () ;

int
FUNC_8(proc_t VAR_16, struct open_extended_args *VAR_17, int32_t *VAR_18)
{
 struct filedesc *VAR_19 = VAR_16->p_fd;
 int VAR_20;
 kauth_filesec_t VAR_21;
 struct vnode_attr VAR_22;
 struct nameidata VAR_23;
 int VAR_24;

 FUNC_0(VAR_11, VAR_17->uid, VAR_17->gid);

 VAR_21 = ((void*)0);
 if ((VAR_17->xsecurity != VAR_9) &&
     ((VAR_20 = FUNC_4(VAR_17->xsecurity, &VAR_21)) != 0))
  return VAR_20;

 FUNC_2(&VAR_22);
 VAR_24 = ((VAR_17->mode &~ VAR_19->fd_cmask) & VAR_0) & ~VAR_7;
 FUNC_3(&VAR_22, VAR_14, VAR_24);
 if (VAR_17->uid != VAR_4)
  FUNC_3(&VAR_22, VAR_15, *VAR_17->uid);
 if (VAR_17->gid != VAR_3)
  FUNC_3(&VAR_22, VAR_13, *VAR_17->gid);
 if (VAR_21 != ((void*)0))
  FUNC_3(&VAR_22, VAR_12, VAR_21->fsec_acl);

 FUNC_1(&VAR_23, VAR_5, VAR_6, VAR_2 | VAR_1, VAR_8,
        VAR_17->path, FUNC_7());

 VAR_20 = FUNC_6(FUNC_7(), &VAR_23, VAR_17->flags, &VAR_22,
    VAR_10, ((void*)0), VAR_18);
 if (VAR_21 != ((void*)0))
  FUNC_5(VAR_21);

 return VAR_20;
}
