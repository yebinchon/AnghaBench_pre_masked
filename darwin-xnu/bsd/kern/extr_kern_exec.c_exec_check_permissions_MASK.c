
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ user_size_t ;
struct vnode_attr {int va_mode; scalar_t__ va_data_size; } ;
struct vnode {scalar_t__ v_writecount; TYPE_1__* v_mount; } ;
struct image_params {scalar_t__ ip_arch_size; int ip_flags; int ip_vfs_context; scalar_t__ ip_arch_offset; struct vnode_attr* ip_vattr; struct vnode* ip_vp; } ;
typedef TYPE_2__* proc_t ;
typedef int kauth_action_t ;
struct TYPE_5__ {int p_lflag; } ;
struct TYPE_4__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct vnode_attr*) ;
 int FUNC_1 (struct vnode_attr*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,struct vnode*,struct image_params*) ;
 int FUNC_3 (char*,struct vnode*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int ) ;
 int FUNC_6 (struct vnode*,int *,int ,int ) ;
 int FUNC_7 (struct vnode*,struct vnode_attr*,int ) ;
 int FUNC_8 (struct vnode*) ;
 int FUNC_9 (struct vnode*) ;
 int FUNC_10 (struct vnode*) ;
 int FUNC_11 (struct vnode*) ;

__attribute__((used)) static int
FUNC_12(struct image_params *VAR_21)
{
 struct vnode *VAR_22 = VAR_21->ip_vp;
 struct vnode_attr *VAR_23 = VAR_21->ip_vattr;
 proc_t VAR_24 = FUNC_5(VAR_21->ip_vfs_context);
 int VAR_25;
 kauth_action_t VAR_26;


 if (!FUNC_8(VAR_22))
  return (VAR_0);


 FUNC_0(VAR_23);
 FUNC_1(VAR_23, VAR_20);
 FUNC_1(VAR_23, VAR_18);
 FUNC_1(VAR_23, VAR_19);
 FUNC_1(VAR_23, VAR_16);
 FUNC_1(VAR_23, VAR_17);
 FUNC_1(VAR_23, VAR_15);
 FUNC_1(VAR_23, VAR_14);
 if ((VAR_25 = FUNC_7(VAR_22, VAR_23, VAR_21->ip_vfs_context)) != 0)
  return (VAR_25);






 if (!FUNC_4(FUNC_10(VAR_22)) && ((VAR_23->va_mode & (VAR_11 | VAR_9 | VAR_10)) == 0))
  return (VAR_0);


 if (VAR_23->va_data_size == 0)
  return (VAR_1);

 VAR_21->ip_arch_offset = (user_size_t)0;
 VAR_21->ip_arch_size = VAR_23->va_data_size;


 if ((VAR_22->v_mount->mnt_flag & VAR_7) || (VAR_24->p_lflag & VAR_8))
  VAR_23->va_mode &= ~(VAR_13 | VAR_12);





 if (VAR_23->va_mode & (VAR_13 | VAR_12))
  VAR_21->ip_flags &= ~(VAR_3 | VAR_4);
  VAR_26 = VAR_5;

  if (VAR_24->p_lflag & VAR_8)
   VAR_26 |= VAR_6;
  if ((VAR_25 = FUNC_6(VAR_22, ((void*)0), VAR_26, VAR_21->ip_vfs_context)) != 0)
  return (VAR_25);
 return (VAR_25);
}
