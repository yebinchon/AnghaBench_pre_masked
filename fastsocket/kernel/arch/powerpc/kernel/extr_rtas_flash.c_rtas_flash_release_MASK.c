
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtas_update_flash_t {scalar_t__ status; int * flist; } ;
struct proc_dir_entry {int count; scalar_t__ data; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {int d_inode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct proc_dir_entry* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * VAR_2 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 struct proc_dir_entry *VAR_5 = FUNC_0(VAR_4->f_path.dentry->d_inode);
 struct rtas_update_flash_t *VAR_6;

 VAR_6 = (struct rtas_update_flash_t *) VAR_5->data;
 if (VAR_6->flist) {


  if (VAR_2) {
   FUNC_3(VAR_2);
   VAR_2 = ((void*)0);
  }

  if (VAR_6->status != VAR_0)
   VAR_6->status = FUNC_2(VAR_6->flist);

  if (VAR_6->status == VAR_1)
   VAR_2 = VAR_6->flist;
  else
   FUNC_3(VAR_6->flist);

  VAR_6->flist = ((void*)0);
 }

 FUNC_1(&VAR_5->count);
 return 0;
}
