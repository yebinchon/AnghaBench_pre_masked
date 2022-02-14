
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct nfs_inode {struct fscache_cookie* fscache; } ;
struct fscache_cookie {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct nfs_inode* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (int ,char*,struct fscache_cookie*,struct page*,struct nfs_inode*) ;
 int FUNC_4 (struct fscache_cookie*,struct page*,int ) ;
 int FUNC_5 (int ,int ,int) ;

int FUNC_6(struct page *VAR_2, gfp_t VAR_3)
{
 if (FUNC_2(VAR_2)) {
  struct nfs_inode *VAR_4 = FUNC_1(VAR_2->mapping->host);
  struct fscache_cookie *VAR_5 = VAR_4->fscache;

  FUNC_0(!VAR_5);
  FUNC_3(VAR_0, "NFS: fscache releasepage (0x%p/0x%p/0x%p)\n",
    VAR_5, VAR_2, VAR_4);

  if (!FUNC_4(VAR_5, VAR_2, VAR_3))
   return 0;

  FUNC_5(VAR_2->mapping->host,
          VAR_1, 1);
 }

 return 1;
}
