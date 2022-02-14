
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mutex; } ;
struct file {scalar_t__ f_pos; TYPE_1__* f_mapping; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static loff_t FUNC_3(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 struct inode *VAR_4 = VAR_1->f_mapping->host;
 loff_t VAR_5;
 loff_t VAR_6;

 FUNC_1(&VAR_4->i_mutex);
 VAR_5 = FUNC_0(VAR_4);

 switch (VAR_3) {
  case 2:
   VAR_2 += VAR_5;
   break;
  case 1:
   VAR_2 += VAR_1->f_pos;
 }
 VAR_6 = -VAR_0;
 if (VAR_2 >= 0 && VAR_2 <= VAR_5) {
  if (VAR_2 != VAR_1->f_pos) {
   VAR_1->f_pos = VAR_2;
  }
  VAR_6 = VAR_2;
 }
 FUNC_2(&VAR_4->i_mutex);
 return VAR_6;
}
