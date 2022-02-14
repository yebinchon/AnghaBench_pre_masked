
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_device {int in_use; } ;
struct inode {int dummy; } ;
struct file {struct sep_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,struct sep_device*) ;
 int VAR_2 ;
 int FUNC_2 (struct sep_device*,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 struct sep_device *VAR_5 = VAR_4->private_data;
 FUNC_0(0, &VAR_5->in_use);
 FUNC_3(&VAR_2);
 return 0;
}
