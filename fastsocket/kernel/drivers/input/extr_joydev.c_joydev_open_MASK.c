
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct joydev_client {struct joydev* joydev; int buffer_lock; } ;
struct joydev {int dev; } ;
struct inode {int dummy; } ;
struct file {struct joydev_client* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct joydev*,struct joydev_client*) ;
 int FUNC_3 (struct joydev*,struct joydev_client*) ;
 int FUNC_4 (struct joydev*) ;
 struct joydev** VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct joydev_client*) ;
 struct joydev_client* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_7, struct file *VAR_8)
{
 struct joydev_client *VAR_9;
 struct joydev *VAR_10;
 int VAR_11 = FUNC_1(VAR_7) - VAR_4;
 int VAR_12;

 if (VAR_11 >= VAR_3)
  return -VAR_0;

 VAR_12 = FUNC_7(&VAR_6);
 if (VAR_12)
  return VAR_12;
 VAR_10 = VAR_5[VAR_11];
 if (VAR_10)
  FUNC_0(&VAR_10->dev);
 FUNC_8(&VAR_6);

 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_6(sizeof(struct joydev_client), VAR_2);
 if (!VAR_9) {
  VAR_12 = -VAR_1;
  goto err_put_joydev;
 }

 FUNC_10(&VAR_9->buffer_lock);
 VAR_9->joydev = VAR_10;
 FUNC_2(VAR_10, VAR_9);

 VAR_12 = FUNC_4(VAR_10);
 if (VAR_12)
  goto err_free_client;

 VAR_8->private_data = VAR_9;
 return 0;

 err_free_client:
 FUNC_3(VAR_10, VAR_9);
 FUNC_5(VAR_9);
 err_put_joydev:
 FUNC_9(&VAR_10->dev);
 return VAR_12;
}
