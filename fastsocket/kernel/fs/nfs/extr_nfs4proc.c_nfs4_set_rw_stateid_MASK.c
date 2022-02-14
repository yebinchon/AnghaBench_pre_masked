
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int state; } ;
struct nfs_lockowner {int dummy; } ;
struct nfs_lock_context {struct nfs_lockowner lockowner; } ;
typedef int nfs4_stateid ;
typedef int fmode_t ;


 int FUNC_0 (int *,int ,int ,struct nfs_lockowner const*) ;

int FUNC_1(nfs4_stateid *VAR_0,
  const struct nfs_open_context *VAR_1,
  const struct nfs_lock_context *VAR_2,
  fmode_t VAR_3)
{
 const struct nfs_lockowner *VAR_4 = ((void*)0);

 if (VAR_2 != ((void*)0))
  VAR_4 = &VAR_2->lockowner;
 return FUNC_0(VAR_0, VAR_1->state, VAR_3, VAR_4);
}
