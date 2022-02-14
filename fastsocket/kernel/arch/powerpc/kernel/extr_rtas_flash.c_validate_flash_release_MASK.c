
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtas_validate_flash_t {scalar_t__ status; int buf_size; } ;
struct proc_dir_entry {int count; scalar_t__ data; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {int d_inode; } ;


 struct proc_dir_entry* FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rtas_validate_flash_t*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct proc_dir_entry *VAR_4 = FUNC_0(VAR_3->f_path.dentry->d_inode);
 struct rtas_validate_flash_t *VAR_5;

 VAR_5 = (struct rtas_validate_flash_t *) VAR_4->data;

 if (VAR_5->status == VAR_1) {
  VAR_5->buf_size = VAR_0;
  FUNC_2(VAR_5);
 }


 FUNC_1(&VAR_4->count);

 return 0;
}
