
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int * private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct inode*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_2);

 FUNC_0();
 if (VAR_4 != VAR_0) return -VAR_1;

 VAR_3->private_data = ((void*)0);
 return 0;
}
