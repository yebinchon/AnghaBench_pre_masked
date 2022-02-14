
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode {int dummy; } ;
typedef int kauth_filesec_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct vnode*) ;
 int FUNC_1 (struct vnode*,void*,int *,int,int ,int ) ;
 int FUNC_2 (struct vnode*,int *,int,int ) ;

int
FUNC_3(struct vnode *VAR_3, void *VAR_4, kauth_filesec_t *VAR_5, int VAR_6, vfs_context_t VAR_7)
{
 int VAR_8;
 if ((VAR_8 = FUNC_2(VAR_3, ((void*)0), VAR_0 | VAR_1, VAR_7)) != 0)
  return(VAR_8);


 return(FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_2));
}
