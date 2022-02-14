
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kstat {int ino; int mode; } ;
struct inode {int dummy; } ;
struct fuse_inode {scalar_t__ i_time; int orig_ino; int orig_i_mode; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct inode*,struct kstat*,struct file*) ;
 int FUNC_1 (struct inode*,struct kstat*) ;
 struct fuse_inode* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 () ;

int FUNC_4(struct inode *VAR_0, struct kstat *VAR_1,
      struct file *VAR_2, bool *VAR_3)
{
 struct fuse_inode *VAR_4 = FUNC_2(VAR_0);
 int VAR_5;
 bool VAR_6;

 if (VAR_4->i_time < FUNC_3()) {
  VAR_6 = 1;
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2);
 } else {
  VAR_6 = 0;
  VAR_5 = 0;
  if (VAR_1) {
   FUNC_1(VAR_0, VAR_1);
   VAR_1->mode = VAR_4->orig_i_mode;
   VAR_1->ino = VAR_4->orig_ino;
  }
 }

 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_6;

 return VAR_5;
}
