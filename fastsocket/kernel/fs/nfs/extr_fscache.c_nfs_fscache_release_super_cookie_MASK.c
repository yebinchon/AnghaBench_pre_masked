
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nfs_server {TYPE_1__* fscache_key; int * fscache; } ;
struct TYPE_2__ {int node; } ;


 int VAR_0 ;
 struct nfs_server* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ,char*,struct nfs_server*,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct super_block *VAR_3)
{
 struct nfs_server *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_0, "NFS: releasing superblock cookie (0x%p/0x%p)\n",
   VAR_4, VAR_4->fscache);

 FUNC_2(VAR_4->fscache, 0);
 VAR_4->fscache = ((void*)0);

 if (VAR_4->fscache_key) {
  FUNC_5(&VAR_2);
  FUNC_4(&VAR_4->fscache_key->node, &VAR_1);
  FUNC_6(&VAR_2);
  FUNC_3(VAR_4->fscache_key);
  VAR_4->fscache_key = ((void*)0);
 }
}
