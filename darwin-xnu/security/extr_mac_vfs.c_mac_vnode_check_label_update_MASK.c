
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode {int v_label; } ;
struct label {int dummy; } ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ,int ,struct vnode*,int ,struct label*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

int
FUNC_3(vfs_context_t VAR_2, struct vnode *VAR_3,
    struct label *VAR_4)
{
 kauth_cred_t VAR_5;
 int VAR_6;






 VAR_5 = FUNC_2(VAR_2);
 if (!FUNC_1(VAR_5))
  return (0);
 FUNC_0(VAR_1, VAR_5, VAR_3, VAR_3->v_label, VAR_4);

 return (VAR_6);
}
