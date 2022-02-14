
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int user_addr_t ;
typedef int uid_t ;
struct vnode_attr {int dummy; } ;
struct nameidata {int ni_vp; } ;
typedef scalar_t__ kauth_action_t ;
typedef int gid_t ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct nameidata*,int ,int ,int,int,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct vnode_attr*) ;
 int FUNC_3 (struct vnode_attr*,int ,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (struct nameidata*,int) ;
 int FUNC_7 (struct nameidata*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int ,struct vnode_attr*,scalar_t__*,int ) ;
 int FUNC_9 (int ,int *,scalar_t__,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,struct vnode_attr*,int ) ;

__attribute__((used)) static int
FUNC_12(vfs_context_t VAR_12, int VAR_13, user_addr_t VAR_14, uid_t VAR_15,
   gid_t VAR_16, int VAR_17, enum uio_seg VAR_18)
{
 vnode_t VAR_19;
 struct vnode_attr VAR_20;
 int VAR_21;
 struct nameidata VAR_22;
 int VAR_23;
 kauth_action_t VAR_24;

 FUNC_0(VAR_9, VAR_15, VAR_16);

 VAR_23 = (VAR_17 & VAR_0) ? VAR_6 : VAR_4;
 FUNC_1(&VAR_22, VAR_5, VAR_7, VAR_23 | VAR_1, VAR_18,
     VAR_14, VAR_12);
 VAR_21 = FUNC_6(&VAR_22, VAR_13);
 if (VAR_21)
  return (VAR_21);
 VAR_19 = VAR_22.ni_vp;

 FUNC_7(&VAR_22);

 FUNC_2(&VAR_20);
 if (VAR_15 != (uid_t)VAR_8)
  FUNC_3(&VAR_20, VAR_11, VAR_15);
 if (VAR_16 != (gid_t)VAR_8)
  FUNC_3(&VAR_20, VAR_10, VAR_16);
 if ((VAR_21 = FUNC_8(VAR_19, &VAR_20, &VAR_24, VAR_12)) != 0)
  goto out;
 if (VAR_24 && ((VAR_21 = FUNC_9(VAR_19, ((void*)0), VAR_24, VAR_12)) != 0))
  goto out;
 VAR_21 = FUNC_11(VAR_19, &VAR_20, VAR_12);






out:




 if (VAR_21 == VAR_2)
  VAR_21 = VAR_3;

 FUNC_10(VAR_19);
 return (VAR_21);
}
