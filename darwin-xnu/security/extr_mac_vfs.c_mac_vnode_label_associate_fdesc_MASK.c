
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vfs_context_t ;
struct vnode {int v_label; } ;
struct socket {int so_label; } ;
struct proc {int dummy; } ;
struct pipe {int pipe_label; } ;
struct mount {int mnt_mntlabel; } ;
struct fileproc {TYPE_1__* f_fglob; } ;
struct fdescnode {int fd_fd; } ;
typedef int socket_t ;
struct TYPE_2__ {int * fg_label; scalar_t__ fg_data; } ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,...) ;
 int FUNC_2 (struct pipe*) ;
 int FUNC_3 (struct pipe*) ;
 int FUNC_4 (struct proc*,int,struct fileproc*,int ) ;
 int FUNC_5 (struct proc*,int,struct fileproc**,int ) ;
 int FUNC_6 (struct fileproc*,struct vnode*,int ) ;
 int FUNC_7 (struct fileproc*,struct vnode*,int ) ;
 int FUNC_8 (struct socket*,int) ;
 int FUNC_9 (struct socket*,int) ;
 struct proc* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct vnode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (struct vnode*) ;

int
FUNC_14(struct mount *VAR_6, struct fdescnode *VAR_7,
    struct vnode *VAR_8, vfs_context_t VAR_9)
{
 struct fileproc *VAR_10;



 struct pipe *VAR_11;
 struct vnode *VAR_12;
 struct proc *VAR_13;
 int VAR_14;

 VAR_14 = 0;




 if (VAR_7->fd_fd == -1) {
  FUNC_1(VAR_2, FUNC_11(VAR_9),
      VAR_6, VAR_6->mnt_mntlabel, ((void*)0), ((void*)0), VAR_8, VAR_8->v_label);
  return (0);
 }

 VAR_13 = FUNC_10(VAR_9);
 VAR_14 = FUNC_5(VAR_13, VAR_7->fd_fd, &VAR_10, 0);
 if (VAR_14)
  return (VAR_14);

 if (VAR_10->f_fglob == ((void*)0)) {
  VAR_14 = VAR_0;
  goto out;
 }

 switch (FUNC_0(VAR_10->f_fglob)) {
 case 128:
  VAR_12 = (struct vnode *)VAR_10->f_fglob->fg_data;
  if ((VAR_14 = FUNC_12(VAR_12)))
   goto out;
  FUNC_1(VAR_5, VAR_12->v_label, VAR_8->v_label);
  (void)FUNC_13(VAR_12);
  break;
 case 130:
  FUNC_7(VAR_10, VAR_8, VAR_9);
  break;
 case 131:
  FUNC_6(VAR_10, VAR_8, VAR_9);
  break;
 case 132:
  VAR_11 = (struct pipe *)VAR_10->f_fglob->fg_data;

  if (VAR_11 == (struct pipe *)-1) {
   VAR_14 = VAR_1;
   goto out;
  }
  FUNC_2(VAR_11);
  FUNC_1(VAR_3, FUNC_11(VAR_9),
      VAR_11, VAR_11->pipe_label, VAR_8, VAR_8->v_label);
  FUNC_3(VAR_11);
  break;
 case 134:
 case 135:
 case 136:
 case 133:
 default:
  FUNC_1(VAR_2, FUNC_11(VAR_9),
      VAR_6, VAR_6->mnt_mntlabel, VAR_10->f_fglob, VAR_10->f_fglob->fg_label,
      VAR_8, VAR_8->v_label);
  break;
 }
out:
 FUNC_4(VAR_13, VAR_7->fd_fd, VAR_10, 0);
 return (VAR_14);
}
