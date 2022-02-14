
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int raid_devs; } ;
struct raid_set {struct raid_dev* dev; TYPE_1__ set; } ;
struct raid_dev {TYPE_2__* dev; } ;
struct TYPE_4__ {int bdev; } ;


 scalar_t__ FUNC_0 (struct raid_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct raid_set *VAR_0)
{
 struct raid_dev *VAR_1 = VAR_0->dev + VAR_0->set.raid_devs;

 while (VAR_1-- > VAR_0->dev) {

  if (FUNC_0(VAR_1))
   FUNC_2(FUNC_1(VAR_1->dev->bdev));
 }
}
