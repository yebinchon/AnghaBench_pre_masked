
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode {struct label* v_label; } ;
struct label {int dummy; } ;
typedef int kauth_cred_t ;


 int FUNC_0 (int ,int ,struct vnode*,struct label*,struct label*) ;
 struct label* FUNC_1 () ;
 int FUNC_2 (struct label*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;

void
FUNC_6(vfs_context_t VAR_1, struct vnode *VAR_2, struct label *VAR_3)
{
 kauth_cred_t VAR_4 = FUNC_3(VAR_1);
 struct label *VAR_5 = ((void*)0);

 if (VAR_2->v_label == ((void*)0))
  VAR_5 = FUNC_1();

 FUNC_4(VAR_2);


 if (VAR_2->v_label == ((void*)0)) {
  VAR_2->v_label = VAR_5;
  VAR_5 = ((void*)0);
 }

 FUNC_0(VAR_0, VAR_4, VAR_2, VAR_2->v_label, VAR_3);
 FUNC_5(VAR_2);

 if (VAR_5 != ((void*)0))
  FUNC_2(VAR_5);
}
