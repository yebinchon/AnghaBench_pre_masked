
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_client {TYPE_1__* cl_mvops; } ;
struct TYPE_2__ {int reboot_recovery_ops; } ;


 int FUNC_0 (struct nfs_client*,int ) ;
 int FUNC_1 (struct nfs_client*) ;

__attribute__((used)) static void FUNC_2(struct nfs_client *VAR_0)
{
 if (!FUNC_1(VAR_0))
  return;
 FUNC_0(VAR_0, VAR_0->cl_mvops->reboot_recovery_ops);
}
