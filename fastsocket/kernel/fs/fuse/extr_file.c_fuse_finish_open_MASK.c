
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; int i_mapping; } ;
struct fuse_inode {int write_files; } ;
struct fuse_file {int open_flags; int write_entry; } ;
struct fuse_conn {int lock; } ;
struct file {int f_mode; int * f_op; struct fuse_file* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 struct fuse_conn* FUNC_1 (struct inode*) ;
 struct fuse_inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct inode*,struct file*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct inode *VAR_5, struct file *VAR_6)
{
 struct fuse_file *VAR_7 = VAR_6->private_data;
 struct fuse_conn *VAR_8 = FUNC_1(VAR_5);
 struct fuse_inode *VAR_9 = FUNC_2(VAR_5);

 if (VAR_7->open_flags & VAR_1)
  VAR_6->f_op = &VAR_4;
 if (!(VAR_7->open_flags & VAR_2))
  FUNC_3(VAR_5->i_mapping);
 if (VAR_7->open_flags & VAR_3)
  FUNC_5(VAR_5, VAR_6);


 FUNC_6(&VAR_8->lock);
 if (FUNC_0(VAR_5->i_mode) && (VAR_6->f_mode & VAR_0))
  FUNC_4(&VAR_7->write_entry, &VAR_9->write_files);
 FUNC_7(&VAR_8->lock);
}
