
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int * private_data; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 if (VAR_2->private_data) {
  FUNC_1(0, VAR_2->private_data);
  VAR_2->private_data = ((void*)0);
 }


 FUNC_0(0, &VAR_0);

 return (0);
}
