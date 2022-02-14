
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
struct vnode_attr {int dummy; } ;
typedef int kauth_action_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vnode_attr*) ;
 int FUNC_1 (struct vnode_attr*,int ) ;
 int FUNC_2 (struct vnode_attr*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_5 (int ,struct vnode_attr*,int*,int ) ;
 int FUNC_6 (int ,int *,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct vnode_attr*,int ) ;

__attribute__((used)) static int
FUNC_9(vnode_t VAR_3, int VAR_4, vfs_context_t VAR_5)
{
 struct vnode_attr VAR_6;
  kauth_action_t VAR_7;
 int VAR_8;

 FUNC_0(&VAR_6);
 FUNC_2(&VAR_6, VAR_2, VAR_4);
  if ((VAR_8 = FUNC_5(VAR_3, &VAR_6, &VAR_7, VAR_5)) != 0)
  goto out;





 if (VAR_7 && ((VAR_8 = FUNC_6(VAR_3, ((void*)0), VAR_7 | VAR_1, VAR_5)) != 0))
  goto out;
 VAR_8 = FUNC_8(VAR_3, &VAR_6, VAR_5);






 if ((VAR_8 == 0) && !FUNC_1(&VAR_6, VAR_2)) {
  VAR_8 = VAR_0;
 }
out:
 FUNC_7(VAR_3);
 return(VAR_8);
}
