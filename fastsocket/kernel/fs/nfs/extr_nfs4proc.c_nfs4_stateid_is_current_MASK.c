
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_open_context {int dummy; } ;
struct nfs_lock_context {int dummy; } ;
typedef int nfs4_stateid ;
typedef int fmode_t ;


 scalar_t__ FUNC_0 (int *,struct nfs_open_context const*,struct nfs_lock_context const*,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static bool FUNC_2(nfs4_stateid *VAR_0,
  const struct nfs_open_context *VAR_1,
  const struct nfs_lock_context *VAR_2,
  fmode_t VAR_3)
{
 nfs4_stateid VAR_4;

 if (FUNC_0(&VAR_4, VAR_1, VAR_2, VAR_3))
  return 0;
 return FUNC_1(VAR_0, &VAR_4);
}
