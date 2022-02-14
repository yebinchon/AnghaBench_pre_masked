
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file_lock {int fl_type; struct file* fl_file; struct file_lock* fl_next; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_6__ {struct file_lock* i_flock; } ;
struct TYPE_4__ {TYPE_3__* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct file_lock*) ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;

int FUNC_4(struct file *VAR_2)
{
 struct file_lock *VAR_3;
 int VAR_4 = VAR_1;

 FUNC_1();
 FUNC_2(VAR_2->f_path.dentry->d_inode);
 for (VAR_3 = VAR_2->f_path.dentry->d_inode->i_flock; VAR_3 && FUNC_0(VAR_3);
   VAR_3 = VAR_3->fl_next) {
  if (VAR_3->fl_file == VAR_2) {
   VAR_4 = VAR_3->fl_type & ~VAR_0;
   break;
  }
 }
 FUNC_3();
 return VAR_4;
}
