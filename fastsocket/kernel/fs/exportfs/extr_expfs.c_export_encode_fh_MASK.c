
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_generation; int i_ino; int i_mode; } ;
struct TYPE_4__ {int parent_gen; int parent_ino; int gen; int ino; } ;
struct fid {TYPE_2__ i32; } ;
struct dentry {int d_lock; TYPE_1__* d_parent; struct inode* d_inode; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_2, struct fid *VAR_3,
  int *VAR_4, int VAR_5)
{
 struct inode * VAR_6 = VAR_2->d_inode;
 int VAR_7 = *VAR_4;
 int VAR_8 = VAR_0;

 if (VAR_7 < 2 || (VAR_5 && VAR_7 < 4))
  return 255;

 VAR_7 = 2;
 VAR_3->i32.ino = VAR_6->i_ino;
 VAR_3->i32.gen = VAR_6->i_generation;
 if (VAR_5 && !FUNC_0(VAR_6->i_mode)) {
  struct inode *VAR_9;

  FUNC_1(&VAR_2->d_lock);
  VAR_9 = VAR_2->d_parent->d_inode;
  VAR_3->i32.parent_ino = VAR_9->i_ino;
  VAR_3->i32.parent_gen = VAR_9->i_generation;
  FUNC_2(&VAR_2->d_lock);
  VAR_7 = 4;
  VAR_8 = VAR_1;
 }
 *VAR_4 = VAR_7;
 return VAR_8;
}
