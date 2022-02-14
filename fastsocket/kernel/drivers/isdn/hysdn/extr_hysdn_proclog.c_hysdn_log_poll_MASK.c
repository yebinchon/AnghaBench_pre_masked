
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct procdata {int rd_queue; struct proc_dir_entry* log; } ;
struct proc_dir_entry {int dummy; } ;
struct log_data {int dummy; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct file {int f_mode; scalar_t__ private_data; TYPE_2__ f_path; } ;
typedef int poll_table ;
struct TYPE_7__ {struct TYPE_7__* next; struct procdata* proclog; } ;
typedef TYPE_3__ hysdn_card ;
struct TYPE_5__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct proc_dir_entry* FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int
FUNC_2(struct file *VAR_5, poll_table * VAR_6)
{
 unsigned int VAR_7 = 0;
 struct proc_dir_entry *VAR_8 = FUNC_0(VAR_5->f_path.dentry->d_inode);
 hysdn_card *VAR_9;
 struct procdata *VAR_10 = ((void*)0);

 if ((VAR_5->f_mode & (VAR_0 | VAR_1)) == VAR_1)
  return (VAR_7);


 VAR_9 = VAR_4;
 while (VAR_9) {
  VAR_10 = VAR_9->proclog;
  if (VAR_10->log == VAR_8)
   break;
  VAR_9 = VAR_9->next;
 }
 if (!VAR_9)
  return (VAR_7);

 FUNC_1(VAR_5, &(VAR_10->rd_queue), VAR_6);

 if (*((struct log_data **) VAR_5->private_data))
  VAR_7 |= VAR_2 | VAR_3;

 return VAR_7;
}
