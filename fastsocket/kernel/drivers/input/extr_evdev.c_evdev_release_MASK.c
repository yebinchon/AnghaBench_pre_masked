
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct evdev_client* private_data; } ;
struct evdev_client {struct evdev* evdev; } ;
struct evdev {int dev; int mutex; struct evdev_client* grab; } ;


 int FUNC_0 (struct evdev*) ;
 int FUNC_1 (struct evdev*,struct evdev_client*) ;
 int FUNC_2 (struct evdev*,struct evdev_client*) ;
 int FUNC_3 (struct evdev_client*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_0, struct file *VAR_1)
{
 struct evdev_client *VAR_2 = VAR_1->private_data;
 struct evdev *VAR_3 = VAR_2->evdev;

 FUNC_4(&VAR_3->mutex);
 if (VAR_3->grab == VAR_2)
  FUNC_2(VAR_3, VAR_2);
 FUNC_5(&VAR_3->mutex);

 FUNC_1(VAR_3, VAR_2);
 FUNC_3(VAR_2);

 FUNC_0(VAR_3);
 FUNC_6(&VAR_3->dev);

 return 0;
}
