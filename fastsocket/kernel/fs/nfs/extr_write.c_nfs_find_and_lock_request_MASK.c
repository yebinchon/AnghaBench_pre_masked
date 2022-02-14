
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct nfs_page {int dummy; } ;
struct inode {int i_lock; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 struct nfs_page* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nfs_page*) ;
 struct nfs_page* FUNC_2 (struct page*) ;
 int FUNC_3 (struct nfs_page*) ;
 int FUNC_4 (struct nfs_page*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct nfs_page *FUNC_7(struct page *VAR_1, bool VAR_2)
{
 struct inode *VAR_3 = VAR_1->mapping->host;
 struct nfs_page *VAR_4;
 int VAR_5;

 FUNC_5(&VAR_3->i_lock);
 for (;;) {
  VAR_4 = FUNC_2(VAR_1);
  if (VAR_4 == ((void*)0))
   break;
  if (FUNC_1(VAR_4))
   break;





  FUNC_6(&VAR_3->i_lock);
  if (!VAR_2)
   VAR_5 = FUNC_4(VAR_4);
  else
   VAR_5 = -VAR_0;
  FUNC_3(VAR_4);
  if (VAR_5 != 0)
   return FUNC_0(VAR_5);
  FUNC_5(&VAR_3->i_lock);
 }
 FUNC_6(&VAR_3->i_lock);
 return VAR_4;
}
