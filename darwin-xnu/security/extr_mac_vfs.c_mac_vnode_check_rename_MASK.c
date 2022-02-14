
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode {int * v_label; } ;
struct componentname {int dummy; } ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ,int ,struct vnode*,int *,struct vnode*,int *,int,...) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_3(vfs_context_t VAR_4, struct vnode *VAR_5,
    struct vnode *VAR_6, struct componentname *VAR_7, struct vnode *VAR_8,
    struct vnode *VAR_9, struct componentname *VAR_10)
{
 kauth_cred_t VAR_11;
 int VAR_12;






 VAR_11 = FUNC_2(VAR_4);
 if (!FUNC_1(VAR_11))
  return (0);

 FUNC_0(VAR_2, VAR_11, VAR_5, VAR_5->v_label, VAR_6,
     VAR_6->v_label, VAR_7);
 if (VAR_12)
  return (VAR_12);

 FUNC_0(VAR_3, VAR_11, VAR_8, VAR_8->v_label, VAR_9,
     VAR_9 != ((void*)0) ? VAR_9->v_label : ((void*)0), VAR_5 == VAR_8, VAR_10);
 if (VAR_12)
  return (VAR_12);

 FUNC_0(VAR_1, VAR_11, VAR_5, VAR_5->v_label, VAR_6,
     VAR_6->v_label, VAR_7, VAR_8, VAR_8->v_label, VAR_9,
     VAR_9 != ((void*)0) ? VAR_9->v_label : ((void*)0), VAR_10);
 return (VAR_12);
}
