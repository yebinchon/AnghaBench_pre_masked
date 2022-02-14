
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_mutex; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {int f_pos; TYPE_3__* f_op; TYPE_2__ f_path; } ;
struct coda_file_info {scalar_t__ cfi_magic; struct file* cfi_container; } ;
typedef int filldir_t ;
struct TYPE_6__ {int (* readdir ) (struct file*,void*,int ) ;} ;
struct TYPE_4__ {struct inode* d_inode; } ;


 int FUNC_0 (int) ;
 struct coda_file_info* FUNC_1 (struct file*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct file*,void*,int ) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct file*,void*,int ) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_3, void *VAR_4, filldir_t VAR_5)
{
 struct coda_file_info *VAR_6;
 struct file *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_1(VAR_3);
 FUNC_0(!VAR_6 || VAR_6->cfi_magic != VAR_0);
 VAR_7 = VAR_6->cfi_container;

 if (!VAR_7->f_op)
  return -VAR_2;

 if (VAR_7->f_op->readdir)
 {




  struct inode *VAR_9 = VAR_7->f_path.dentry->d_inode;

  FUNC_5(&VAR_9->i_mutex);
  VAR_7->f_pos = VAR_3->f_pos;

  VAR_8 = -VAR_1;
  if (!FUNC_2(VAR_9)) {
   VAR_8 = VAR_7->f_op->readdir(VAR_7, VAR_4, VAR_5);
   FUNC_4(VAR_7);
  }

  VAR_3->f_pos = VAR_7->f_pos;
  FUNC_6(&VAR_9->i_mutex);
 }
 else
  VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_5);

 return VAR_8;
}
