
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int user_addr_t ;
struct vnode_attr {int dummy; } ;
struct nameidata {int dummy; } ;
struct filedesc {int fd_cmask; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
struct TYPE_2__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nameidata*,int ,int ,int,int,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct vnode_attr*) ;
 int FUNC_2 (struct vnode_attr*,int ,int) ;
 int VAR_7 ;
 int FUNC_3 (int ,struct nameidata*,int,struct vnode_attr*,int ,int *,int*,int) ;
 int VAR_8 ;
 TYPE_1__* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(vfs_context_t VAR_9, user_addr_t VAR_10, int VAR_11, int VAR_12,
    int VAR_13, enum uio_seg VAR_14, int *VAR_15)
{
 struct filedesc *VAR_16 = (FUNC_4(VAR_9))->p_fd;
 struct vnode_attr VAR_17;
 struct nameidata VAR_18;
 int VAR_19;

 FUNC_1(&VAR_17);

 VAR_19 = ((VAR_12 &~ VAR_16->fd_cmask) & VAR_1) & ~VAR_6;
 FUNC_2(&VAR_17, VAR_8, VAR_19 & VAR_0);

 FUNC_0(&VAR_18, VAR_4, VAR_5, VAR_3 | VAR_2,
     VAR_14, VAR_10, VAR_9);

 return (FUNC_3(VAR_9, &VAR_18, VAR_11, &VAR_17, VAR_7, ((void*)0),
     VAR_15, VAR_13));
}
