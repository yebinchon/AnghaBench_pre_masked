
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnfs_layoutdriver_type {int dummy; } ;
struct nfs_client {int dummy; } ;
struct nfs4_deviceid_node {TYPE_1__* ld; int ref; int node; } ;
struct nfs4_deviceid {int dummy; } ;
struct TYPE_2__ {int (* free_deviceid_node ) (struct nfs4_deviceid_node*) ;} ;


 struct nfs4_deviceid_node* FUNC_0 (struct pnfs_layoutdriver_type const*,struct nfs_client const*,struct nfs4_deviceid const*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfs4_deviceid const*) ;
 int VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nfs4_deviceid_node*) ;
 int FUNC_9 () ;

void
FUNC_10(const struct pnfs_layoutdriver_type *VAR_1,
    const struct nfs_client *VAR_2, const struct nfs4_deviceid *VAR_3)
{
 struct nfs4_deviceid_node *VAR_4;

 FUNC_6(&VAR_0);
 FUNC_4();
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3, FUNC_3(VAR_3));
 FUNC_5();
 if (!VAR_4) {
  FUNC_7(&VAR_0);
  return;
 }
 FUNC_2(&VAR_4->node);
 FUNC_7(&VAR_0);
 FUNC_9();


 if (FUNC_1(&VAR_4->ref))
  VAR_4->ld->free_deviceid_node(VAR_4);
}
