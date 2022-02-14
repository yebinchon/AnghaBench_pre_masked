
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int raid_devs; int sectors_per_dev; } ;
struct raid_set {TYPE_1__ set; struct raid_dev* dev; } ;
struct raid_dev {int start; int dev; } ;
struct dm_target {struct raid_set* private; } ;
typedef int sector_t ;
typedef int (* iterate_devices_callout_fn ) (struct dm_target*,int ,int ,int ,void*) ;



__attribute__((used)) static int FUNC_0(struct dm_target *VAR_0,
    iterate_devices_callout_fn VAR_1, void *VAR_2)
{
 int VAR_3;
 struct raid_set *VAR_4 = VAR_0->private;
 struct raid_dev *VAR_5;
 sector_t VAR_6 = VAR_4->set.sectors_per_dev;

 for (VAR_5 = VAR_4->dev, VAR_3 = 0;
      !VAR_3 && VAR_5 < VAR_4->dev + VAR_4->set.raid_devs; VAR_5++)
  VAR_3 = VAR_1(VAR_0, VAR_5->dev, VAR_5->start, VAR_6, VAR_2);

 return VAR_3;
}
