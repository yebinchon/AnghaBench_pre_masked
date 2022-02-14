
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fuse_conn {int lock; int processing; int pending; scalar_t__ connected; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct fuse_conn*,int *) ;
 int FUNC_1 (struct fuse_conn*) ;
 struct fuse_conn* FUNC_2 (struct file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct inode *VAR_0, struct file *VAR_1)
{
 struct fuse_conn *VAR_2 = FUNC_2(VAR_1);
 if (VAR_2) {
  FUNC_3(&VAR_2->lock);
  VAR_2->connected = 0;
  FUNC_0(VAR_2, &VAR_2->pending);
  FUNC_0(VAR_2, &VAR_2->processing);
  FUNC_4(&VAR_2->lock);
  FUNC_1(VAR_2);
 }

 return 0;
}
