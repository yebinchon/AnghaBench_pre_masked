
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; int i_mode; } ;
struct TYPE_2__ {int dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {struct inode* d_inode; } ;
struct coda_file_info {scalar_t__ cfi_magic; struct file* cfi_container; } ;


 int FUNC_0 (int) ;
 struct coda_file_info* FUNC_1 (struct file*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct file*,int ,int) ;

int FUNC_10(struct file *VAR_2, struct dentry *VAR_3, int VAR_4)
{
 struct file *VAR_5;
 struct inode *VAR_6 = VAR_3->d_inode;
 struct coda_file_info *VAR_7;
 int VAR_8 = 0;

 if (!(FUNC_4(VAR_6->i_mode) || FUNC_2(VAR_6->i_mode) ||
       FUNC_3(VAR_6->i_mode)))
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_2);
 FUNC_0(!VAR_7 || VAR_7->cfi_magic != VAR_0);
 VAR_5 = VAR_7->cfi_container;

 VAR_8 = FUNC_9(VAR_5, VAR_5->f_path.dentry, VAR_4);
 if ( !VAR_8 && !VAR_4 ) {
  FUNC_6();
  VAR_8 = FUNC_8(VAR_6->i_sb, FUNC_5(VAR_6));
  FUNC_7();
 }

 return VAR_8;
}
