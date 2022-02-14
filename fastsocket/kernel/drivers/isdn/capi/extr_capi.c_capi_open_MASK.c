
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int * private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct inode*,struct file*) ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4;

 FUNC_1();
 if (VAR_3->private_data)
  VAR_4 = -VAR_0;
 else if ((VAR_3->private_data = FUNC_0()) == ((void*)0))
  VAR_4 = -VAR_1;
 else
  VAR_4 = FUNC_2(VAR_2, VAR_3);
 FUNC_3();
 return VAR_4;
}
