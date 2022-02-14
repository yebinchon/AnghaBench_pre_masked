
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file_operations {int (* fsync ) (struct file*,struct dentry*,int) ;} ;
struct file {struct file_operations* f_op; struct address_space* f_mapping; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct address_space {TYPE_2__* host; } ;
typedef int loff_t ;
struct TYPE_4__ {int i_mutex; } ;
struct TYPE_3__ {struct file_operations* i_fop; struct address_space* i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct address_space*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct file*,struct dentry*,int) ;

int FUNC_4(struct file *VAR_2, struct dentry *VAR_3, loff_t VAR_4,
      loff_t VAR_5, int VAR_6)
{
 const struct file_operations *VAR_7;
 struct address_space *VAR_8;
 int VAR_9, VAR_10;






 if (VAR_2) {
  VAR_8 = VAR_2->f_mapping;
  VAR_7 = VAR_2->f_op;
 } else {
  VAR_8 = VAR_3->d_inode->i_mapping;
  VAR_7 = VAR_3->d_inode->i_fop;
 }

 if (!VAR_7 || !VAR_7->fsync) {
  VAR_10 = -VAR_0;
  goto out;
 }

 VAR_10 = FUNC_0(VAR_8, VAR_4, VAR_5);





 FUNC_1(&VAR_8->host->i_mutex);
 VAR_9 = VAR_7->fsync(VAR_2, VAR_3, VAR_6);
 if (!VAR_10 || (VAR_9 && VAR_10 == -VAR_1))
  VAR_10 = VAR_9;
 FUNC_2(&VAR_8->host->i_mutex);

out:
 return VAR_10;
}
