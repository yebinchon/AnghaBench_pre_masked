
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layoutdriver_type {int dummy; } ;
struct nfs_client {int dummy; } ;
struct nfs4_deviceid_node {int dummy; } ;
struct nfs4_deviceid {int dummy; } ;


 struct nfs4_deviceid_node* FUNC_0 (struct pnfs_layoutdriver_type const*,struct nfs_client const*,struct nfs4_deviceid const*,int ) ;
 int FUNC_1 (struct nfs4_deviceid const*) ;

struct nfs4_deviceid_node *
FUNC_2(const struct pnfs_layoutdriver_type *VAR_0,
         const struct nfs_client *VAR_1, const struct nfs4_deviceid *VAR_2)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, FUNC_1(VAR_2));
}
