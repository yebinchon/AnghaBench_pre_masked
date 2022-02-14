
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {TYPE_1__* nfs_client; } ;
struct idmap {int idmap_group_hash; } ;
typedef int __u32 ;
struct TYPE_2__ {struct idmap* cl_idmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct idmap*,int *,char const*,size_t,int *) ;
 int FUNC_1 (char const*,size_t,char*,int *) ;
 scalar_t__ FUNC_2 (char const*,size_t,int *) ;

int FUNC_3(const struct nfs_server *VAR_1, const char *VAR_2, size_t VAR_3, __u32 *VAR_4)
{
 struct idmap *VAR_5 = VAR_1->nfs_client->cl_idmap;
 int VAR_6 = -VAR_0;

 if (FUNC_2(VAR_2, VAR_3, VAR_4))
  return 0;
 VAR_6 = FUNC_1(VAR_2, VAR_3, "gid", VAR_4);
 if (VAR_6 < 0)
  VAR_6 = FUNC_0(VAR_5, &VAR_5->idmap_group_hash, VAR_2, VAR_3, VAR_4);
 return VAR_6;
}
