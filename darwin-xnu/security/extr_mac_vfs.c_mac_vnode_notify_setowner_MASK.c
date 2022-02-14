
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
typedef int uid_t ;
struct vnode {int v_label; } ;
typedef int kauth_cred_t ;
typedef int gid_t ;


 int FUNC_0 (int ,int ,struct vnode*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

void
FUNC_3(vfs_context_t VAR_2, struct vnode *VAR_3, uid_t VAR_4, gid_t VAR_5)
{
 kauth_cred_t VAR_6;






 VAR_6 = FUNC_2(VAR_2);
 if (!FUNC_1(VAR_6))
  return;
 FUNC_0(VAR_1, VAR_6, VAR_3, VAR_3->v_label, VAR_4, VAR_5);
}
