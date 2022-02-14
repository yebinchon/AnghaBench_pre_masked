
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
typedef int user_addr_t ;
struct vnode_attr {int dummy; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;


 int VAR_0 ;
 int FUNC_0 (struct vnode_attr*) ;
 int FUNC_1 (struct vnode_attr*,int ,int) ;
 int FUNC_2 (int ,int ,struct vnode_attr*,int,int,int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(vfs_context_t VAR_2, user_addr_t VAR_3, int VAR_4, int VAR_5,
    int VAR_6, enum uio_seg VAR_7)
{
 struct vnode_attr VAR_8;

 FUNC_0(&VAR_8);
 FUNC_1(&VAR_8, VAR_1, VAR_4 & VAR_0);

 return (FUNC_2(VAR_2, VAR_3, &VAR_8, VAR_5, VAR_6, VAR_7));
}
