
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_mutex; TYPE_2__* i_sb; int i_size; } ;
struct file {scalar_t__ f_pos; scalar_t__ f_version; TYPE_1__* f_mapping; } ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {scalar_t__ s_maxbytes; } ;
struct TYPE_3__ {struct inode* host; } ;


 scalar_t__ VAR_0 ;


 scalar_t__ FUNC_0 (struct file*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

loff_t FUNC_5(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 struct inode *VAR_4 = VAR_1->f_mapping->host;
 loff_t VAR_5 = -VAR_0;
 int VAR_6 = FUNC_1(VAR_4);

 FUNC_2(&VAR_4->i_mutex);





 switch (VAR_3) {
 case 128:
  if (FUNC_4(VAR_2 > 0))
   goto out_err;



  if (VAR_6)
   VAR_2 += FUNC_0(VAR_1);
  else
   VAR_2 += VAR_4->i_size;
  break;
 case 129:






  if (VAR_2 == 0) {
   VAR_2 = VAR_1->f_pos;
   goto out_ok;
  }

  VAR_2 += VAR_1->f_pos;
  break;
 }

 if (FUNC_4(VAR_2 < 0))
  goto out_err;

 if (!VAR_6) {
  if (VAR_2 > VAR_4->i_sb->s_maxbytes)
   goto out_err;
 } else if (VAR_2 > FUNC_0(VAR_1))
  goto out_err;


 if (VAR_2 != VAR_1->f_pos) {
  VAR_1->f_pos = VAR_2;
  VAR_1->f_version = 0;
 }

out_ok:
 VAR_5 = VAR_2;
out_err:
 FUNC_3(&VAR_4->i_mutex);

 return VAR_5;
}
