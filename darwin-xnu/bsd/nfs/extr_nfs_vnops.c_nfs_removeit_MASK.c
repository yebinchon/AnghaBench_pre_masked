
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfsmount {TYPE_1__* nm_funcs; } ;
struct nfs_sillyrename {int nsr_cred; int nsr_namlen; int nsr_name; int nsr_dnp; } ;
struct TYPE_2__ {int (* nf_remove_rpc ) (int ,int ,int ,int *,int ) ;} ;


 int VAR_0 ;
 struct nfsmount* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct nfsmount*) ;
 int FUNC_2 (int ,int ,int ,int *,int ) ;

int
FUNC_3(struct nfs_sillyrename *VAR_1)
{
 struct nfsmount *VAR_2 = FUNC_0(VAR_1->nsr_dnp);
 if (FUNC_1(VAR_2))
  return (VAR_0);
 return VAR_2->nm_funcs->nf_remove_rpc(VAR_1->nsr_dnp, VAR_1->nsr_name, VAR_1->nsr_namlen, ((void*)0), VAR_1->nsr_cred);
}
