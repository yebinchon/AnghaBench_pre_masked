
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int raid_disks; int dev_sectors; } ;
struct raid_set {TYPE_1__ md; TYPE_2__* dev; } ;
struct dm_target {struct raid_set* private; } ;
typedef int (* iterate_devices_callout_fn ) (struct dm_target*,scalar_t__,int ,int ,void*) ;
struct TYPE_4__ {scalar_t__ data_dev; } ;



__attribute__((used)) static int FUNC_0(struct dm_target *VAR_0,
    iterate_devices_callout_fn VAR_1, void *VAR_2)
{
 struct raid_set *VAR_3 = VAR_0->private;
 unsigned VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0; !VAR_5 && VAR_4 < VAR_3->md.raid_disks; VAR_4++)
  if (VAR_3->dev[VAR_4].data_dev)
   VAR_5 = VAR_1(VAR_0,
     VAR_3->dev[VAR_4].data_dev,
     0,
     VAR_3->md.dev_sectors,
     VAR_2);

 return VAR_5;
}
