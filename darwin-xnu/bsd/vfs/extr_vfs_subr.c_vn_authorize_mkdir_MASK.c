
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
struct vnode_attr {int dummy; } ;
struct componentname {int * cn_ndp; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,struct componentname*,struct vnode_attr*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

int
FUNC_5(vnode_t VAR_1, struct componentname *VAR_2, struct vnode_attr *VAR_3, vfs_context_t VAR_4, void *VAR_5)
{

#pragma unused(vap)

 int VAR_6;

 if (VAR_5 != ((void*)0)) {
  FUNC_2("reserved not NULL in vn_authorize_mkdir()");
 }


 if (VAR_2->cn_ndp == ((void*)0)) {
  return 0;
 }

 if (FUNC_4(VAR_1)) {
  VAR_6 = FUNC_0(VAR_2->cn_ndp);
  if (VAR_6)
   goto out;
 }
   if ((VAR_6 = FUNC_3(VAR_1, ((void*)0), VAR_0, VAR_4)) != 0)
    goto out;

out:
 return VAR_6;
}
