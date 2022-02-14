
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int open_mutex; int openers; TYPE_1__* gendisk; } ;
struct block_device {TYPE_1__* bd_disk; int bd_dev; } ;
typedef int fmode_t ;
struct TYPE_2__ {struct mddev* private_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 struct mddev* FUNC_4 (int ) ;
 int FUNC_5 (struct mddev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct block_device *VAR_3, fmode_t VAR_4)
{




 struct mddev *VAR_5 = FUNC_4(VAR_3->bd_dev);
 int VAR_6;

 if (!VAR_5)
  return -VAR_0;

 if (VAR_5->gendisk != VAR_3->bd_disk) {



  FUNC_5(VAR_5);

  FUNC_3(VAR_2);

  return -VAR_1;
 }
 FUNC_0(VAR_5 != VAR_3->bd_disk->private_data);

 if ((VAR_6 = FUNC_6(&VAR_5->open_mutex)))
  goto out;

 VAR_6 = 0;
 FUNC_1(&VAR_5->openers);
 FUNC_7(&VAR_5->open_mutex);

 FUNC_2(VAR_3);
 out:
 return VAR_6;
}
