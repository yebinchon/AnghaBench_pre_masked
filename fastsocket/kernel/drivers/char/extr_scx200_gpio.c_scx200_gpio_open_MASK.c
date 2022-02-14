
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int * private_data; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 () ;
 unsigned int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,struct file*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3, struct file *VAR_4)
{
 unsigned VAR_5 = FUNC_1(VAR_3);
 VAR_4->private_data = &VAR_2;

 FUNC_0();
 if (VAR_5 >= VAR_1)
  return -VAR_0;
 return FUNC_2(VAR_3, VAR_4);
}
