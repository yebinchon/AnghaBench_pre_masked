
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int raid_disks; int persistent; int major_version; int recovery_cp; scalar_t__ external; int disks; } ;
struct raid_set {TYPE_4__* ti; TYPE_3__ md; TYPE_2__* dev; } ;
struct TYPE_10__ {int bdev; } ;
struct TYPE_9__ {char* error; int table; } ;
struct TYPE_6__ {int raid_disk; int flags; int same_set; int bdev; int meta_bdev; int recovery_offset; int sb_page; TYPE_3__* mddev; scalar_t__ data_offset; } ;
struct TYPE_7__ {TYPE_1__ rdev; TYPE_5__* data_dev; TYPE_5__* meta_dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,char*,int ,TYPE_5__**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct raid_set *VAR_4, char **VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_4->md.raid_disks; VAR_6++, VAR_5 += 2) {
  VAR_4->dev[VAR_6].rdev.raid_disk = VAR_6;

  VAR_4->dev[VAR_6].meta_dev = ((void*)0);
  VAR_4->dev[VAR_6].data_dev = ((void*)0);





  VAR_4->dev[VAR_6].rdev.data_offset = 0;
  VAR_4->dev[VAR_6].rdev.mddev = &VAR_4->md;

  if (FUNC_5(VAR_5[0], "-")) {
   VAR_9 = FUNC_2(VAR_4->ti, VAR_5[0],
         FUNC_3(VAR_4->ti->table),
         &VAR_4->dev[VAR_6].meta_dev);
   VAR_4->ti->error = "RAID metadata device lookup failure";
   if (VAR_9)
    return VAR_9;

   VAR_4->dev[VAR_6].rdev.sb_page = FUNC_1(VAR_2);
   if (!VAR_4->dev[VAR_6].rdev.sb_page)
    return -VAR_1;
  }

  if (!FUNC_5(VAR_5[1], "-")) {
   if (!FUNC_6(VAR_3, &VAR_4->dev[VAR_6].rdev.flags) &&
       (!VAR_4->dev[VAR_6].rdev.recovery_offset)) {
    VAR_4->ti->error = "Drive designated for rebuild not specified";
    return -VAR_0;
   }

   VAR_4->ti->error = "No data device supplied with metadata device";
   if (VAR_4->dev[VAR_6].meta_dev)
    return -VAR_0;

   continue;
  }

  VAR_9 = FUNC_2(VAR_4->ti, VAR_5[1],
        FUNC_3(VAR_4->ti->table),
        &VAR_4->dev[VAR_6].data_dev);
  if (VAR_9) {
   VAR_4->ti->error = "RAID device lookup failure";
   return VAR_9;
  }

  if (VAR_4->dev[VAR_6].meta_dev) {
   VAR_8 = 1;
   VAR_4->dev[VAR_6].rdev.meta_bdev = VAR_4->dev[VAR_6].meta_dev->bdev;
  }
  VAR_4->dev[VAR_6].rdev.bdev = VAR_4->dev[VAR_6].data_dev->bdev;
  FUNC_4(&VAR_4->dev[VAR_6].rdev.same_set, &VAR_4->md.disks);
  if (!FUNC_6(VAR_3, &VAR_4->dev[VAR_6].rdev.flags))
   VAR_7++;
 }

 if (VAR_8) {
  VAR_4->md.external = 0;
  VAR_4->md.persistent = 1;
  VAR_4->md.major_version = 2;
 } else if (VAR_7 && !VAR_4->md.recovery_cp) {
  FUNC_0("Unable to rebuild drive while array is not in-sync");
  VAR_4->ti->error = "RAID device lookup failure";
  return -VAR_0;
 }

 return 0;
}
