
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proc_dir_entry {scalar_t__ size; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {scalar_t__ f_pos; TYPE_2__ f_path; } ;
typedef scalar_t__ loff_t ;
struct TYPE_3__ {int d_inode; } ;


 scalar_t__ VAR_0 ;
 struct proc_dir_entry* FUNC_0 (int ) ;

__attribute__((used)) static loff_t FUNC_1( struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 loff_t VAR_4;
 struct proc_dir_entry *VAR_5 = FUNC_0(VAR_1->f_path.dentry->d_inode);

 switch(VAR_3) {
 case 0:
  VAR_4 = VAR_2;
  break;
 case 1:
  VAR_4 = VAR_1->f_pos + VAR_2;
  break;
 case 2:
  VAR_4 = VAR_5->size + VAR_2;
  break;
 default:
  return -VAR_0;
 }
 if ( VAR_4 < 0 || VAR_4 > VAR_5->size )
  return -VAR_0;
 return (VAR_1->f_pos = VAR_4);
}
