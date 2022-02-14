
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsxx_cardinfo {int size8; int bdev_attached; int dev_lock; int gendisk; scalar_t__ config_valid; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(struct rsxx_cardinfo *VAR_1)
{
 FUNC_1(&VAR_1->dev_lock);


 if (VAR_0) {
  if (VAR_1->config_valid)
   FUNC_3(VAR_1->gendisk, VAR_1->size8 >> 9);
  else
   FUNC_3(VAR_1->gendisk, 0);
  FUNC_0(VAR_1->gendisk);

  VAR_1->bdev_attached = 1;
 }

 FUNC_2(&VAR_1->dev_lock);

 return 0;
}
