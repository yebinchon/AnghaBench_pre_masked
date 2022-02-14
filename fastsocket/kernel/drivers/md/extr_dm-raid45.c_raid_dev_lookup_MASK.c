
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int raid_devs; } ;
struct raid_set {TYPE_1__ set; struct raid_dev* dev; } ;
struct raid_dev {TYPE_2__* dev; } ;
struct TYPE_6__ {scalar_t__ bd_dev; } ;
struct TYPE_5__ {TYPE_3__* bdev; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct raid_set *VAR_1, struct raid_dev *VAR_2)
{
 unsigned VAR_3;
 struct raid_dev *VAR_4;





 for (VAR_4 = VAR_1->dev, VAR_3 = 0;
      VAR_4->dev && VAR_3 < VAR_1->set.raid_devs;
      VAR_4++, VAR_3++) {
  if (VAR_2->dev->bdev->bd_dev == VAR_4->dev->bdev->bd_dev)
   return VAR_3;
 }

 return -VAR_0;
}
