
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct evdev_client* private_data; } ;
struct evdev_client {struct evdev* evdev; } ;
struct evdev {int mutex; int handle; int exist; } ;
typedef int fl_owner_t ;


 int VAR_0 ;
 int FUNC_0 (int *,struct file*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, fl_owner_t VAR_2)
{
 struct evdev_client *VAR_3 = VAR_1->private_data;
 struct evdev *VAR_4 = VAR_3->evdev;
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_4->mutex);
 if (VAR_5)
  return VAR_5;

 if (!VAR_4->exist)
  VAR_5 = -VAR_0;
 else
  VAR_5 = FUNC_0(&VAR_4->handle, VAR_1);

 FUNC_2(&VAR_4->mutex);
 return VAR_5;
}
