
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_mutex; TYPE_1__* i_sb; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {int f_pos; scalar_t__ f_version; TYPE_3__ f_path; } ;
typedef int loff_t ;
struct TYPE_5__ {struct inode* d_inode; } ;
struct TYPE_4__ {int s_maxbytes; } ;


 int VAR_0 ;


 int FUNC_0 (struct inode*,int *,struct file*,int *) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static loff_t FUNC_4(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 loff_t VAR_4;
 struct inode *VAR_5 = VAR_1->f_path.dentry->d_inode;

 FUNC_2(&VAR_5->i_mutex);
 switch (VAR_3) {
 case 128:
  VAR_4 = FUNC_0(VAR_5, ((void*)0), VAR_1, ((void*)0));
  if (VAR_4)
   goto exit;
  VAR_2 += FUNC_1(VAR_5);
  break;
 case 129:
  VAR_2 += VAR_1->f_pos;
 }
 VAR_4 = -VAR_0;
 if (VAR_2 >= 0 && VAR_2 <= VAR_5->i_sb->s_maxbytes) {
  if (VAR_2 != VAR_1->f_pos) {
   VAR_1->f_pos = VAR_2;
   VAR_1->f_version = 0;
  }
  VAR_4 = VAR_2;
 }
exit:
 FUNC_3(&VAR_5->i_mutex);
 return VAR_4;
}
