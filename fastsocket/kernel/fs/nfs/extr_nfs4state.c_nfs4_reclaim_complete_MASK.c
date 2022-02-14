
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {int dummy; } ;
struct nfs4_state_recovery_ops {int (* reclaim_complete ) (struct nfs_client*) ;} ;


 int FUNC_0 (struct nfs_client*) ;

__attribute__((used)) static void FUNC_1(struct nfs_client *VAR_0,
     const struct nfs4_state_recovery_ops *VAR_1)
{

 if (VAR_1->reclaim_complete)
  (void)VAR_1->reclaim_complete(VAR_0);
}
