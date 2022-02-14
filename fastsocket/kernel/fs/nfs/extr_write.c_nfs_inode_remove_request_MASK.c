
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_page {int wb_flags; int wb_page; TYPE_2__* wb_context; } ;
struct nfs_inode {int npages; } ;
struct inode {int i_lock; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct nfs_inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct nfs_page*) ;
 int VAR_0 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct nfs_page*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct nfs_page *VAR_1)
{
 struct inode *VAR_2 = VAR_1->wb_context->dentry->d_inode;
 struct nfs_inode *VAR_3 = FUNC_2(VAR_2);

 FUNC_0 (!FUNC_3(VAR_1));

 FUNC_7(&VAR_2->i_lock);
 FUNC_6(VAR_1->wb_page, 0);
 FUNC_1(VAR_1->wb_page);
 FUNC_4(VAR_0, &VAR_1->wb_flags);
 VAR_3->npages--;
 FUNC_8(&VAR_2->i_lock);
 FUNC_5(VAR_1);
}
