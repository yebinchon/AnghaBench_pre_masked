
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct null_mount {struct vnode* nullm_secondvp; struct vnode* nullm_rootvp; } ;


 struct null_mount* FUNC_0 (int ) ;
 int FUNC_1 (struct vnode*) ;

__attribute__((used)) static int
FUNC_2(struct vnode * VAR_0)
{
 struct null_mount * VAR_1;

 VAR_1 = FUNC_0(FUNC_1(VAR_0));



 if (VAR_0 && (VAR_0 == VAR_1->nullm_rootvp || VAR_0 == VAR_1->nullm_secondvp)) {
  return 1;
 }
 return 0;
}
