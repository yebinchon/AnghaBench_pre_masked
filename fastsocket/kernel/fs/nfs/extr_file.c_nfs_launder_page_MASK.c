
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct nfs_inode {int dummy; } ;
struct inode {int i_ino; } ;
struct TYPE_2__ {struct inode* host; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,long long) ;
 int FUNC_2 (struct nfs_inode*,struct page*) ;
 int FUNC_3 (struct inode*,struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;

__attribute__((used)) static int FUNC_5(struct page *VAR_1)
{
 struct inode *VAR_2 = VAR_1->mapping->host;
 struct nfs_inode *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_0, "NFS: launder_page(%ld, %llu)\n",
  VAR_2->i_ino, (long long)FUNC_4(VAR_1));

 FUNC_2(VAR_3, VAR_1);
 return FUNC_3(VAR_2, VAR_1);
}
