
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct fuse_conn {scalar_t__ no_lock; } ;
struct file_lock {scalar_t__ fl_owner; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
typedef scalar_t__ fl_owner_t ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int FUNC_0 (struct file*,struct file_lock*) ;
 int FUNC_1 (struct file*,struct file_lock*,int) ;
 struct fuse_conn* FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, int VAR_1, struct file_lock *VAR_2)
{
 struct inode *VAR_3 = VAR_0->f_path.dentry->d_inode;
 struct fuse_conn *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 if (VAR_4->no_lock) {
  VAR_5 = FUNC_0(VAR_0, VAR_2);
 } else {

  VAR_2->fl_owner = (fl_owner_t) VAR_0;
  VAR_5 = FUNC_1(VAR_0, VAR_2, 1);
 }

 return VAR_5;
}
