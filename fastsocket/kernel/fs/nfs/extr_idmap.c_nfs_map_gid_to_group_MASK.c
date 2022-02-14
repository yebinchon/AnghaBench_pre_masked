
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {int caps; TYPE_1__* nfs_client; } ;
struct idmap {int idmap_group_hash; } ;
typedef int __u32 ;
struct TYPE_2__ {struct idmap* cl_idmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*,size_t) ;
 int FUNC_1 (struct idmap*,int *,int ,char*) ;
 int FUNC_2 (int ,char*,size_t) ;

int FUNC_3(const struct nfs_server *VAR_2, __u32 VAR_3, char *VAR_4, size_t VAR_5)
{
 struct idmap *VAR_6 = VAR_2->nfs_client->cl_idmap;
 int VAR_7 = -VAR_0;

 if (!(VAR_2->caps & VAR_1)) {
  VAR_7 = FUNC_0(VAR_3, "group", VAR_4, VAR_5);
  if (VAR_7 < 0)
   VAR_7 = FUNC_1(VAR_6, &VAR_6->idmap_group_hash, VAR_3, VAR_4);
 }
 if (VAR_7 < 0)
  VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5);
 return VAR_7;
}
