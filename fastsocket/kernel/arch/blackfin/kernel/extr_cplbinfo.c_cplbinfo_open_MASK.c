
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct cplbinfo_data* private; } ;
struct proc_dir_entry {scalar_t__ data; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {struct seq_file* private_data; TYPE_2__ f_path; } ;
struct cplbinfo_data {char cplb_type; scalar_t__ pos; } ;
struct TYPE_3__ {int d_inode; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct proc_dir_entry* FUNC_0 (int ) ;
 int FUNC_1 (struct cplbinfo_data*,unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (struct file*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 struct proc_dir_entry *VAR_5 = FUNC_0(VAR_4->f_path.dentry->d_inode);
 char VAR_6;
 unsigned int VAR_7;
 int VAR_8;
 struct seq_file *VAR_9;
 struct cplbinfo_data *VAR_10;

 VAR_7 = (unsigned int)VAR_5->data;
 VAR_6 = VAR_7 & VAR_0 ? 'D' : 'I';
 VAR_7 &= ~VAR_0;

 if (!FUNC_2(VAR_7))
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_4, &VAR_2, sizeof(*VAR_10));
 if (VAR_8)
  return VAR_8;
 VAR_9 = VAR_4->private_data;
 VAR_10 = VAR_9->private;

 VAR_10->pos = 0;
 VAR_10->cplb_type = VAR_6;
 FUNC_1(VAR_10, VAR_7);

 return 0;
}
