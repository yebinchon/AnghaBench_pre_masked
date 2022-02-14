
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct nfs_page {int dummy; } ;
struct inode {int i_lock; } ;
struct TYPE_2__ {struct inode* host; } ;


 struct nfs_page* FUNC_0 (struct page*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct nfs_page *FUNC_3(struct page *VAR_0)
{
 struct inode *VAR_1 = VAR_0->mapping->host;
 struct nfs_page *VAR_2 = ((void*)0);

 FUNC_1(&VAR_1->i_lock);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_2(&VAR_1->i_lock);
 return VAR_2;
}
