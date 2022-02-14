
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int * private_data; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct inode*,struct file*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 int VAR_4;

 FUNC_0();


 if (FUNC_2(0, &VAR_1))
  VAR_4 = -VAR_0;
 else {
  VAR_3->private_data = ((void*)0);
  VAR_4 = FUNC_1(VAR_2, VAR_3);
 }
 FUNC_3();
 return VAR_4;
}
