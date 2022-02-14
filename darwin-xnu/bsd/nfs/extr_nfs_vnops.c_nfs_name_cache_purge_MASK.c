
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct nfsmount {scalar_t__ nm_vers; } ;
struct componentname {int dummy; } ;
typedef int nfsnode_t ;


 struct nfsmount* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct nfsmount*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,struct componentname*,int ,int) ;

void
FUNC_5(nfsnode_t VAR_2, nfsnode_t VAR_3, struct componentname *VAR_4, vfs_context_t VAR_5)
{
 struct nfsmount *VAR_6 = FUNC_0(VAR_2);

 FUNC_3(FUNC_1(VAR_3));
 if (VAR_6 && (VAR_6->nm_vers > VAR_0) && FUNC_2(VAR_6, VAR_1))
  FUNC_4(VAR_2, ((void*)0), VAR_4, VAR_5, 1);
}
