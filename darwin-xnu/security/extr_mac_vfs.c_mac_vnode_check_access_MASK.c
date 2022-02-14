
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode {int v_label; } ;
typedef int kauth_cred_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,struct vnode*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;

int
FUNC_4(vfs_context_t VAR_2, struct vnode *VAR_3,
    int VAR_4)
{
 kauth_cred_t VAR_5;
 int VAR_6;
 int VAR_7;






 VAR_5 = FUNC_3(VAR_2);
 if (!FUNC_2(VAR_5))
  return (0);

 VAR_7 = FUNC_0(VAR_4);
 FUNC_1(VAR_1, VAR_5, VAR_3, VAR_3->v_label, VAR_7);
 return (VAR_6);
 }
