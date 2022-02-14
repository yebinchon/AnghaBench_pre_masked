
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {TYPE_1__* nfs_client; } ;
struct nfs_inode {struct fscache_cookie* fscache; } ;
struct inode {int dummy; } ;
struct fscache_cookie {int dummy; } ;
struct TYPE_2__ {int fscache; } ;


 int VAR_0 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,char*,struct nfs_server*,struct nfs_inode*,struct fscache_cookie*,struct fscache_cookie*) ;
 struct fscache_cookie* FUNC_3 (int ,int *,struct nfs_inode*) ;
 int FUNC_4 (struct fscache_cookie*,int) ;
 int FUNC_5 (struct inode*) ;
 int VAR_1 ;
 int FUNC_6 (struct inode*) ;

void FUNC_7(struct inode *VAR_2)
{
 struct nfs_inode *VAR_3 = FUNC_0(VAR_2);
 struct nfs_server *VAR_4 = FUNC_1(VAR_2);
 struct fscache_cookie *VAR_5 = VAR_3->fscache;

 FUNC_5(VAR_2);
 if (VAR_3->fscache) {

  FUNC_4(VAR_3->fscache, 1);

  VAR_3->fscache = FUNC_3(
   VAR_4->nfs_client->fscache,
   &VAR_1,
   VAR_3);

  FUNC_2(VAR_0,
    "NFS: revalidation new cookie (0x%p/0x%p/0x%p/0x%p)\n",
    VAR_4, VAR_3, VAR_5, VAR_3->fscache);
 }
 FUNC_6(VAR_2);
}
