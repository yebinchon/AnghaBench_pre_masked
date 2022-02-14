
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
struct vnode_attr {int va_vaflags; } ;
typedef int off_t ;
typedef int errno_t ;


 int FUNC_0 (struct vnode_attr*) ;
 int FUNC_1 (struct vnode_attr*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct vnode_attr*,int ) ;

errno_t
FUNC_3(vnode_t VAR_1, off_t VAR_2, int VAR_3, vfs_context_t VAR_4)
{
 struct vnode_attr VAR_5;

 FUNC_0(&VAR_5);
 FUNC_1(&VAR_5, VAR_0, VAR_2);
 VAR_5.va_vaflags = VAR_3 & 0xffff;
 return(FUNC_2(VAR_1, &VAR_5, VAR_4));
}
