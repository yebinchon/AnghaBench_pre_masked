
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode {int v_label; } ;
struct timespec {int dummy; } ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ,int ,struct vnode*,int ,struct timespec,struct timespec) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;

int
FUNC_3(vfs_context_t VAR_2, struct vnode *VAR_3,
    struct timespec VAR_4, struct timespec VAR_5)
{
 kauth_cred_t VAR_6;
 int VAR_7;






 VAR_6 = FUNC_2(VAR_2);
 if (!FUNC_1(VAR_6))
  return (0);
 FUNC_0(VAR_1, VAR_6, VAR_3, VAR_3->v_label, VAR_4,
     VAR_5);
 return (VAR_7);
}
