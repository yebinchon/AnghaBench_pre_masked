
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_page {int wb_kref; int wb_page; int wb_flags; } ;
struct nfs_inode {int npages; int change_attr; } ;
struct inode {int i_lock; } ;


 int VAR_0 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct nfs_page*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct inode *VAR_2, struct nfs_page *VAR_3)
{
 struct nfs_inode *VAR_4 = FUNC_0(VAR_2);


 FUNC_4(VAR_3);

 FUNC_7(&VAR_2->i_lock);
 if (!VAR_4->npages && FUNC_3(VAR_2, VAR_0))
  VAR_4->change_attr++;
 FUNC_5(VAR_1, &VAR_3->wb_flags);
 FUNC_1(VAR_3->wb_page);
 FUNC_6(VAR_3->wb_page, (unsigned long)VAR_3);
 VAR_4->npages++;
 FUNC_2(&VAR_3->wb_kref);
 FUNC_8(&VAR_2->i_lock);
}
