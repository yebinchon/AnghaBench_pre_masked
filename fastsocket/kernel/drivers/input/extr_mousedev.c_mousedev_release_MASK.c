
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mousedev_client {struct mousedev* mousedev; } ;
struct mousedev {int dev; } ;
struct inode {int dummy; } ;
struct file {struct mousedev_client* private_data; } ;


 int FUNC_0 (struct mousedev_client*) ;
 int FUNC_1 (struct mousedev*) ;
 int FUNC_2 (struct mousedev*,struct mousedev_client*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct mousedev_client *VAR_2 = VAR_1->private_data;
 struct mousedev *VAR_3 = VAR_2->mousedev;

 FUNC_2(VAR_3, VAR_2);
 FUNC_0(VAR_2);

 FUNC_1(VAR_3);
 FUNC_3(&VAR_3->dev);

 return 0;
}
