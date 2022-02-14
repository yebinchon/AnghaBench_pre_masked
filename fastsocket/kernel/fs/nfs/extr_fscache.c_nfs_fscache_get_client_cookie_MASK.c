
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_client {int fscache; } ;
struct TYPE_2__ {int primary_index; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct nfs_client*,int ) ;
 int FUNC_1 (int ,int *,struct nfs_client*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

void FUNC_2(struct nfs_client *VAR_3)
{

 VAR_3->fscache = FUNC_1(VAR_1.primary_index,
           &VAR_2,
           VAR_3);
 FUNC_0(VAR_0, "NFS: get client cookie (0x%p/0x%p)\n",
   VAR_3, VAR_3->fscache);
}
