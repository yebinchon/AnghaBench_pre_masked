
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode_attr {int dummy; } ;
struct nameidata {int dummy; } ;


 int FUNC_0 (struct vnode_attr*) ;
 int FUNC_1 (struct vnode_attr*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct nameidata*,int*,struct vnode_attr*) ;

int
FUNC_3(struct nameidata *VAR_1, int *VAR_2, int VAR_3)
{
 struct vnode_attr VAR_4;

 FUNC_0(&VAR_4);
 FUNC_1(&VAR_4, VAR_0, VAR_3);

 return(FUNC_2(VAR_1, VAR_2, &VAR_4));
}
