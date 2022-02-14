
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct evdev_client* private_data; } ;
struct evdev_client {struct evdev* evdev; int buffer_lock; } ;
struct evdev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct evdev*,struct evdev_client*) ;
 int FUNC_1 (struct evdev*,struct evdev_client*) ;
 int FUNC_2 (struct evdev*) ;
 struct evdev** VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct evdev_client*) ;
 struct evdev_client* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_7, struct file *VAR_8)
{
 struct evdev *VAR_9;
 struct evdev_client *VAR_10;
 int VAR_11 = FUNC_4(VAR_7) - VAR_3;
 int VAR_12;

 if (VAR_11 >= VAR_2)
  return -VAR_0;

 VAR_12 = FUNC_7(&VAR_6);
 if (VAR_12)
  return VAR_12;
 VAR_9 = VAR_5[VAR_11];
 if (VAR_9)
  FUNC_3(&VAR_9->dev);
 FUNC_8(&VAR_6);

 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_6(sizeof(struct evdev_client), VAR_4);
 if (!VAR_10) {
  VAR_12 = -VAR_1;
  goto err_put_evdev;
 }

 FUNC_10(&VAR_10->buffer_lock);
 VAR_10->evdev = VAR_9;
 FUNC_0(VAR_9, VAR_10);

 VAR_12 = FUNC_2(VAR_9);
 if (VAR_12)
  goto err_free_client;

 VAR_8->private_data = VAR_10;
 return 0;

 err_free_client:
 FUNC_1(VAR_9, VAR_10);
 FUNC_5(VAR_10);
 err_put_evdev:
 FUNC_9(&VAR_9->dev);
 return VAR_12;
}
