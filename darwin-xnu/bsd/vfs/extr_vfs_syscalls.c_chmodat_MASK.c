
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
typedef int user_addr_t ;
struct vnode_attr {int dummy; } ;
struct nameidata {int ni_vp; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nameidata*,int ,int ,int,int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,struct vnode_attr*) ;
 int FUNC_2 (struct nameidata*,int) ;
 int FUNC_3 (struct nameidata*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(vfs_context_t VAR_6, user_addr_t VAR_7, struct vnode_attr *VAR_8,
    int VAR_9, int VAR_10, enum uio_seg VAR_11)
{
 struct nameidata VAR_12;
 int VAR_13, VAR_14;

 VAR_13 = (VAR_10 & VAR_0) ? VAR_4 : VAR_2;
 FUNC_0(&VAR_12, VAR_3, VAR_5, VAR_13 | VAR_1,
     VAR_11, VAR_7, VAR_6);
 if ((VAR_14 = FUNC_2(&VAR_12, VAR_9)))
  return (VAR_14);
 VAR_14 = FUNC_1(VAR_6, VAR_12.ni_vp, VAR_8);
 FUNC_4(VAR_12.ni_vp);
 FUNC_3(&VAR_12);
 return(VAR_14);
}
