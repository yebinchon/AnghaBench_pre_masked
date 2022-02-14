
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mutex; } ;
struct fuse_inode {scalar_t__ writectr; int page_waitq; } ;
struct fuse_conn {int lock; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 struct fuse_conn* FUNC_1 (struct inode*) ;
 struct fuse_inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;

void FUNC_7(struct inode *VAR_1)
{
 struct fuse_conn *VAR_2 = FUNC_1(VAR_1);
 struct fuse_inode *VAR_3 = FUNC_2(VAR_1);

 FUNC_0(!FUNC_3(&VAR_1->i_mutex));

 FUNC_4(&VAR_2->lock);
 FUNC_0(VAR_3->writectr < 0);
 VAR_3->writectr += VAR_0;
 FUNC_5(&VAR_2->lock);
 FUNC_6(VAR_3->page_waitq, VAR_3->writectr == VAR_0);
}
