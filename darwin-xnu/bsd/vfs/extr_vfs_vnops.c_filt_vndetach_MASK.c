
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct vnode {int v_knotes; } ;
struct knote {int kn_hookid; scalar_t__ kn_hook; } ;


 int FUNC_0 (int *,struct knote*) ;
 int VAR_0 ;
 int FUNC_1 (struct vnode*,int ,int ,void*,int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct vnode*,int ) ;
 int FUNC_4 (struct vnode*) ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*) ;

__attribute__((used)) static void
FUNC_7(struct knote *VAR_1)
{
 vfs_context_t VAR_2 = FUNC_2();
 struct vnode *VAR_3;
 VAR_3 = (struct vnode *)VAR_1->kn_hook;
 if (FUNC_3(VAR_3, VAR_1->kn_hookid))
  return;

 FUNC_4(VAR_3);
 FUNC_0(&VAR_3->v_knotes, VAR_1);
 FUNC_6(VAR_3);






 FUNC_1(VAR_3, 0, VAR_0, (void*)VAR_1, VAR_2);
 FUNC_5(VAR_3);
}
