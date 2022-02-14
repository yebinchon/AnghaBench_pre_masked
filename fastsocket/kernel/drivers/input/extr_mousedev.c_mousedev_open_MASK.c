
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mousedev_client {int pos_x; int pos_y; struct mousedev* mousedev; int packet_lock; } ;
struct mousedev {int dev; } ;
struct inode {int dummy; } ;
struct file {struct mousedev_client* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct mousedev_client*) ;
 struct mousedev_client* FUNC_4 (int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct mousedev*,struct mousedev_client*) ;
 int FUNC_7 (struct mousedev*,struct mousedev_client*) ;
 int FUNC_8 (struct mousedev*) ;
 struct mousedev** VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_11, struct file *VAR_12)
{
 struct mousedev_client *VAR_13;
 struct mousedev *VAR_14;
 int VAR_15;
 int VAR_16;






  VAR_16 = FUNC_2(VAR_11) - VAR_5;

 if (VAR_16 >= VAR_4)
  return -VAR_0;

 FUNC_5();
 VAR_15 = FUNC_9(&VAR_8);
 if (VAR_15) {
  FUNC_13();
  return VAR_15;
 }
 VAR_14 = VAR_7[VAR_16];
 if (VAR_14)
  FUNC_0(&VAR_14->dev);
 FUNC_10(&VAR_8);

 if (!VAR_14) {
  FUNC_13();
  return -VAR_0;
 }

 VAR_13 = FUNC_4(sizeof(struct mousedev_client), VAR_2);
 if (!VAR_13) {
  VAR_15 = -VAR_1;
  goto err_put_mousedev;
 }

 FUNC_12(&VAR_13->packet_lock);
 VAR_13->pos_x = VAR_9 / 2;
 VAR_13->pos_y = VAR_10 / 2;
 VAR_13->mousedev = VAR_14;
 FUNC_6(VAR_14, VAR_13);

 VAR_15 = FUNC_8(VAR_14);
 if (VAR_15)
  goto err_free_client;

 VAR_12->private_data = VAR_13;
 FUNC_13();
 return 0;

 err_free_client:
 FUNC_7(VAR_14, VAR_13);
 FUNC_3(VAR_13);
 err_put_mousedev:
 FUNC_11(&VAR_14->dev);
 FUNC_13();
 return VAR_15;
}
