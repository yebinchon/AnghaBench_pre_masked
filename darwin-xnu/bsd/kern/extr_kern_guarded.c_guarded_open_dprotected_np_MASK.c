
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vfs_context_t ;
struct vnode_attr {int dummy; } ;
struct nameidata {int dummy; } ;
struct guarded_open_dprotected_np_args {int flags; int guardflags; int mode; int dpclass; int dpflags; int path; int guard; } ;
struct gfp_crarg {int gca_attrs; scalar_t__ gca_guard; } ;
struct filedesc {int fd_cmask; } ;
typedef TYPE_1__* proc_t ;
typedef int int32_t ;
struct TYPE_3__ {struct filedesc* p_fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nameidata*,int ,int ,int,int ,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct vnode_attr*) ;
 int FUNC_2 (struct vnode_attr*,int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int ,scalar_t__*,int) ;
 int VAR_20 ;
 int FUNC_4 (int ,struct nameidata*,int,struct vnode_attr*,int ,struct gfp_crarg*,int *) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_5 () ;

int
FUNC_6(proc_t VAR_24, struct guarded_open_dprotected_np_args *VAR_25, int32_t *VAR_26)
{
 if ((VAR_25->flags & VAR_9) == 0)
  return (VAR_3);

 if (((VAR_25->guardflags & VAR_6) != VAR_6) ||
     ((VAR_25->guardflags & ~VAR_5) != 0))
  return (VAR_3);

 int VAR_27;
 struct gfp_crarg VAR_28 = {
  .gca_attrs = VAR_25->guardflags
 };

 if ((VAR_27 = FUNC_3(VAR_25->guard,
     &(VAR_28.gca_guard), sizeof (VAR_28.gca_guard))) != 0)
  return (VAR_27);




 if (VAR_28.gca_guard == 0)
  return (VAR_3);

 struct filedesc *VAR_29 = VAR_24->p_fd;
 struct vnode_attr VAR_30;
 struct nameidata VAR_31;
 vfs_context_t VAR_32 = FUNC_5();
 int VAR_33;

 FUNC_1(&VAR_30);
 VAR_33 = ((VAR_25->mode & ~VAR_29->fd_cmask) & VAR_1) & ~VAR_16;
 FUNC_2(&VAR_30, VAR_23, VAR_33 & VAR_0);

 FUNC_0(&VAR_31, VAR_7, VAR_8, VAR_4 | VAR_2, VAR_17,
        VAR_25->path, VAR_32);







 if (VAR_25->flags & VAR_11) {
  FUNC_2(&VAR_30, VAR_21, VAR_25->dpclass);
 }

 if (VAR_25->dpflags & (VAR_12|VAR_13)) {
  if ( VAR_25->flags & (VAR_14 | VAR_15)) {

   return VAR_3;
  }
  if (VAR_25->dpflags & VAR_12) {
      FUNC_2(&VAR_30, VAR_22, VAR_18);
  }
  if (VAR_25->dpflags & VAR_13) {
      FUNC_2(&VAR_30, VAR_22, VAR_19);
  }
 }

 return (FUNC_4(VAR_32, &VAR_31, VAR_25->flags | VAR_10, &VAR_30,
     VAR_20, &VAR_28, VAR_26));
}
