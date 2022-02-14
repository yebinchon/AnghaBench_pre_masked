
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layoutdriver_type {int dummy; } ;
struct nfs_client {int dummy; } ;
struct nfs4_deviceid {int dummy; } ;
struct nfs4_deviceid_node {int ref; struct nfs4_deviceid deviceid; scalar_t__ flags; struct nfs_client const* nfs_client; struct pnfs_layoutdriver_type const* ld; int tmpnode; int node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

void
FUNC_2(struct nfs4_deviceid_node *VAR_0,
   const struct pnfs_layoutdriver_type *VAR_1,
   const struct nfs_client *VAR_2,
   const struct nfs4_deviceid *VAR_3)
{
 FUNC_0(&VAR_0->node);
 FUNC_0(&VAR_0->tmpnode);
 VAR_0->ld = VAR_1;
 VAR_0->nfs_client = VAR_2;
 VAR_0->flags = 0;
 VAR_0->deviceid = *VAR_3;
 FUNC_1(&VAR_0->ref, 1);
}
