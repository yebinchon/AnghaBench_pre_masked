
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vfs_context_t ;
struct nfs_vattr {int dummy; } ;
typedef int nfsnode_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct nfs_vattr*,int ,int) ;
 int FUNC_1 (int ,int ) ;

int
FUNC_2(nfsnode_t VAR_1, struct nfs_vattr *VAR_2, vfs_context_t VAR_3, int VAR_4)
{
 int VAR_5;

retry:
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 == VAR_0) {
  VAR_5 = FUNC_1(VAR_1, VAR_3);
  if (!VAR_5)
   goto retry;
 }
 return (VAR_5);
}
