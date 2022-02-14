
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; struct file_operations const* i_fop; int * i_op; void* i_private; int i_ctime; int i_mtime; int i_atime; int i_sb; } ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dentry*,struct inode*) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_5, struct dentry *VAR_6,
    int VAR_7, const struct file_operations *VAR_8,
    void *VAR_9)
{
 int VAR_10;
 struct inode *VAR_11 = FUNC_2(VAR_5->i_sb);

 if (!VAR_11) {
  VAR_10 = -VAR_1;
  goto bail;
 }

 VAR_11->i_mode = VAR_7;
 VAR_11->i_atime = VAR_11->i_mtime = VAR_11->i_ctime = VAR_0;
 VAR_11->i_private = VAR_9;
 if ((VAR_7 & VAR_3) == VAR_2) {
  VAR_11->i_op = &VAR_4;
  FUNC_1(VAR_11);
  FUNC_1(VAR_5);
 }

 VAR_11->i_fop = VAR_8;

 FUNC_0(VAR_6, VAR_11);
 VAR_10 = 0;

bail:
 return VAR_10;
}
