
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {struct idmap* cl_idmap; } ;
struct idmap {int idmap_group_hash; int idmap_user_hash; int idmap_dentry; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct idmap*) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct nfs_client *VAR_0)
{
 struct idmap *VAR_1 = VAR_0->cl_idmap;

 if (!VAR_1)
  return;
 FUNC_2(VAR_1->idmap_dentry);
 VAR_0->cl_idmap = ((void*)0);
 FUNC_0(&VAR_1->idmap_user_hash);
 FUNC_0(&VAR_1->idmap_group_hash);
 FUNC_1(VAR_1);
}
