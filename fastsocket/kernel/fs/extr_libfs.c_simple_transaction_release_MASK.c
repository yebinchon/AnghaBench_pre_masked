
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;


 int FUNC_0 (unsigned long) ;

int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 FUNC_0((unsigned long)VAR_1->private_data);
 return 0;
}
