
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layoutdriver_type {int dummy; } ;
struct nfs_client {int dummy; } ;
struct nfs4_deviceid_node {int ref; } ;
struct nfs4_deviceid {int dummy; } ;


 struct nfs4_deviceid_node* FUNC_0 (struct pnfs_layoutdriver_type const*,struct nfs_client const*,struct nfs4_deviceid const*,long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct nfs4_deviceid_node *
FUNC_4(const struct pnfs_layoutdriver_type *VAR_0,
     const struct nfs_client *VAR_1, const struct nfs4_deviceid *VAR_2,
     long VAR_3)
{
 struct nfs4_deviceid_node *VAR_4;

 FUNC_2();
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 if (VAR_4 != ((void*)0))
  FUNC_1(&VAR_4->ref);
 FUNC_3();
 return VAR_4;
}
