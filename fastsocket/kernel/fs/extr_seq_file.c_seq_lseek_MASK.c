
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int lock; int version; int read_pos; int count; int index; } ;
struct file {int f_version; int f_pos; scalar_t__ private_data; } ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct seq_file*,int ) ;

loff_t FUNC_3(struct file *VAR_2, loff_t VAR_3, int VAR_4)
{
 struct seq_file *VAR_5 = (struct seq_file *)VAR_2->private_data;
 loff_t VAR_6 = -VAR_1;

 FUNC_0(&VAR_5->lock);
 VAR_5->version = VAR_2->f_version;
 switch (VAR_4) {
  case 1:
   VAR_3 += VAR_2->f_pos;
  case 0:
   if (VAR_3 < 0)
    break;
   VAR_6 = VAR_3;
   if (VAR_3 != VAR_5->read_pos) {
    while ((VAR_6=FUNC_2(VAR_5, VAR_3)) == -VAR_0)
     ;
    if (VAR_6) {

     VAR_2->f_pos = 0;
     VAR_5->read_pos = 0;
     VAR_5->version = 0;
     VAR_5->index = 0;
     VAR_5->count = 0;
    } else {
     VAR_5->read_pos = VAR_3;
     VAR_6 = VAR_2->f_pos = VAR_3;
    }
   }
 }
 VAR_2->f_version = VAR_5->version;
 FUNC_1(&VAR_5->lock);
 return VAR_6;
}
