
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
struct vnode_attr {int dummy; } ;
struct componentname {TYPE_1__* cn_ndp; } ;
struct TYPE_2__ {int ni_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,struct componentname*,struct vnode_attr*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,int ,int ) ;

int
FUNC_4(vnode_t VAR_2, struct componentname *VAR_3, struct vnode_attr *VAR_4, vfs_context_t VAR_5, void *VAR_6)
{

#pragma unused(vap)


 int VAR_7;

 if (VAR_3->cn_ndp == ((void*)0)) {
  FUNC_2("NULL cn_ndp");
 }
 if (VAR_6 != ((void*)0)) {
  FUNC_2("reserved not NULL.");
 }


 if (VAR_3->cn_ndp->ni_flag & VAR_1) {
  VAR_7 = FUNC_0(VAR_3->cn_ndp);
  if (VAR_7)
   return (VAR_7);
 }







 return (FUNC_3(VAR_2, ((void*)0), VAR_0, VAR_5));
}
