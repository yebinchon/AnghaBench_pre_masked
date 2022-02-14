
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; int i_size; } ;
struct file {scalar_t__ f_pos; scalar_t__ f_version; TYPE_2__* f_mapping; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {struct inode* host; } ;
struct TYPE_3__ {scalar_t__ s_maxbytes; } ;


 scalar_t__ VAR_0 ;



loff_t
FUNC_0(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 struct inode *VAR_4 = VAR_1->f_mapping->host;

 switch (VAR_3) {
 case 128:
  VAR_2 += VAR_4->i_size;
  break;
 case 129:






  if (VAR_2 == 0)
   return VAR_1->f_pos;
  VAR_2 += VAR_1->f_pos;
  break;
 }

 if (VAR_2 < 0 || VAR_2 > VAR_4->i_sb->s_maxbytes)
  return -VAR_0;


 if (VAR_2 != VAR_1->f_pos) {
  VAR_1->f_pos = VAR_2;
  VAR_1->f_version = 0;
 }

 return VAR_2;
}
