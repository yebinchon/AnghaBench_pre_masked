
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
struct timespec {int dummy; } ;
struct vnode_attr {struct timespec va_modify_time; } ;
typedef int errno_t ;


 int FUNC_0 (struct vnode_attr*) ;
 int FUNC_1 (struct vnode_attr*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,struct vnode_attr*,int ) ;

errno_t
FUNC_3(vnode_t VAR_1, struct timespec *VAR_2, vfs_context_t VAR_3)
{
 struct vnode_attr VAR_4;
 int VAR_5;

 FUNC_0(&VAR_4);
 FUNC_1(&VAR_4, VAR_0);
 VAR_5 = FUNC_2(VAR_1, &VAR_4, VAR_3);
 if (!VAR_5)
  *VAR_2 = VAR_4.va_modify_time;
 return VAR_5;
}
