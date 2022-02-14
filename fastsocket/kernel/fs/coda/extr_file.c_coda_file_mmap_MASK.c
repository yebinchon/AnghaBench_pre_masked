
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct inode {int * i_mapping; int i_data; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {TYPE_3__* f_op; int f_mapping; TYPE_2__ f_path; } ;
struct coda_inode_info {int c_mapcount; } ;
struct coda_file_info {scalar_t__ cfi_magic; int cfi_mapcount; struct file* cfi_container; } ;
struct TYPE_6__ {int (* mmap ) (struct file*,struct vm_area_struct*) ;} ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int FUNC_0 (int) ;
 struct coda_file_info* FUNC_1 (struct file*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct coda_inode_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct file*,struct vm_area_struct*) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_3, struct vm_area_struct *VAR_4)
{
 struct coda_file_info *VAR_5;
 struct coda_inode_info *VAR_6;
 struct file *VAR_7;
 struct inode *VAR_8, *VAR_9;

 VAR_5 = FUNC_1(VAR_3);
 FUNC_0(!VAR_5 || VAR_5->cfi_magic != VAR_0);
 VAR_7 = VAR_5->cfi_container;

 if (!VAR_7->f_op || !VAR_7->f_op->mmap)
  return -VAR_2;

 VAR_8 = VAR_3->f_path.dentry->d_inode;
 VAR_9 = VAR_7->f_path.dentry->d_inode;
 VAR_3->f_mapping = VAR_7->f_mapping;
 if (VAR_8->i_mapping == &VAR_8->i_data)
  VAR_8->i_mapping = VAR_9->i_mapping;



 else if (VAR_8->i_mapping != VAR_9->i_mapping)
  return -VAR_1;


 VAR_6 = FUNC_2(VAR_8);
 VAR_6->c_mapcount++;
 VAR_5->cfi_mapcount++;

 return VAR_7->f_op->mmap(VAR_7, VAR_4);
}
