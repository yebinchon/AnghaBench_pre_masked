
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int * private_data; } ;
struct capidev {int dummy; } ;


 int FUNC_0 (struct capidev*) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct capidev *VAR_2 = (struct capidev *)VAR_1->private_data;

 FUNC_0(VAR_2);
 VAR_1->private_data = ((void*)0);

 return 0;
}
