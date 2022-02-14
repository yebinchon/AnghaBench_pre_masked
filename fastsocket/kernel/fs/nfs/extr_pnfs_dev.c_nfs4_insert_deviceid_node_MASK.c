
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs4_deviceid_node {int ref; int node; int deviceid; int nfs_client; int ld; } ;


 struct nfs4_deviceid_node* FUNC_0 (int ,int ,int *,long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int * VAR_0 ;
 long FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct nfs4_deviceid_node *
FUNC_6(struct nfs4_deviceid_node *VAR_2)
{
 struct nfs4_deviceid_node *VAR_3;
 long VAR_4;

 FUNC_4(&VAR_1);
 VAR_4 = FUNC_3(&VAR_2->deviceid);
 VAR_3 = FUNC_0(VAR_2->ld, VAR_2->nfs_client, &VAR_2->deviceid, VAR_4);
 if (VAR_3) {
  FUNC_5(&VAR_1);
  return VAR_3;
 }

 FUNC_2(&VAR_2->node, &VAR_0[VAR_4]);
 FUNC_5(&VAR_1);
 FUNC_1(&VAR_2->ref);

 return VAR_2;
}
