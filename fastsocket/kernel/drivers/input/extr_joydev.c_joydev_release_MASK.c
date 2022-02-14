
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct joydev_client {struct joydev* joydev; } ;
struct joydev {int dev; } ;
struct inode {int dummy; } ;
struct file {struct joydev_client* private_data; } ;


 int FUNC_0 (struct joydev*) ;
 int FUNC_1 (struct joydev*,struct joydev_client*) ;
 int FUNC_2 (struct joydev_client*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct joydev_client *VAR_2 = VAR_1->private_data;
 struct joydev *VAR_3 = VAR_2->joydev;

 FUNC_1(VAR_3, VAR_2);
 FUNC_2(VAR_2);

 FUNC_0(VAR_3);
 FUNC_3(&VAR_3->dev);

 return 0;
}
