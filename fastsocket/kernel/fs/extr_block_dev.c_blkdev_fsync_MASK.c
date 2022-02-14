
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mutex; } ;
struct file {TYPE_1__* f_mapping; } ;
struct dentry {int dummy; } ;
struct block_device {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 struct block_device* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct block_device*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct file *VAR_1, struct dentry *VAR_2, int VAR_3)
{
 struct inode *VAR_4 = VAR_1->f_mapping->host;
 struct block_device *VAR_5 = FUNC_0(VAR_4);
 int VAR_6;






 FUNC_3(&VAR_4->i_mutex);

 VAR_6 = FUNC_1(VAR_5, ((void*)0));
 if (VAR_6 == -VAR_0)
  VAR_6 = 0;

 FUNC_2(&VAR_4->i_mutex);

 return VAR_6;
}
