
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode_attr {int dummy; } ;
struct attrlist {int dummy; } ;
typedef int ssize_t ;
typedef enum vtype { ____Placeholder_vtype } vtype ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct attrlist*,struct vnode_attr*,int,int *,int ,int) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct attrlist *VAR_0, struct vnode_attr *VAR_1,
    enum vtype VAR_2, ssize_t *VAR_3, vfs_context_t VAR_4)
{


 return (FUNC_1(VAR_0, VAR_1, VAR_2,
     VAR_3, FUNC_0(FUNC_2(VAR_4)), 1));
}
