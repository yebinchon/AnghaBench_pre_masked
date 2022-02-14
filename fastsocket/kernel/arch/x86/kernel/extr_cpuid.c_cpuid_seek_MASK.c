
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mutex; } ;
struct file {int f_pos; TYPE_1__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static loff_t FUNC_2(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 loff_t VAR_4;
 struct inode *VAR_5 = VAR_1->f_mapping->host;

 FUNC_0(&VAR_5->i_mutex);
 switch (VAR_3) {
 case 0:
  VAR_1->f_pos = VAR_2;
  VAR_4 = VAR_1->f_pos;
  break;
 case 1:
  VAR_1->f_pos += VAR_2;
  VAR_4 = VAR_1->f_pos;
  break;
 default:
  VAR_4 = -VAR_0;
 }
 FUNC_1(&VAR_5->i_mutex);
 return VAR_4;
}
