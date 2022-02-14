
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_pos; } ;


 int FUNC_0 (struct inode*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 FUNC_1();
 FUNC_0(VAR_0, &VAR_1->f_pos);

 FUNC_2();
 return 0;
}
