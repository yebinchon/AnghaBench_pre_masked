
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_conn {scalar_t__ no_lock; } ;
struct file_lock {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*,struct file_lock*) ;
 int FUNC_1 (struct file*,struct file_lock*,int ) ;
 struct fuse_conn* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct file*,struct file_lock*,int *) ;
 int FUNC_4 (struct file*,struct file_lock*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, int VAR_3, struct file_lock *VAR_4)
{
 struct inode *VAR_5 = VAR_2->f_path.dentry->d_inode;
 struct fuse_conn *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;

 if (VAR_3 == VAR_0) {
  VAR_7 = 0;
 } else if (VAR_3 == VAR_1) {
  if (VAR_6->no_lock) {
   FUNC_4(VAR_2, VAR_4);
   VAR_7 = 0;
  } else
   VAR_7 = FUNC_0(VAR_2, VAR_4);
 } else {
  if (VAR_6->no_lock)
   VAR_7 = FUNC_3(VAR_2, VAR_4, ((void*)0));
  else
   VAR_7 = FUNC_1(VAR_2, VAR_4, 0);
 }
 return VAR_7;
}
