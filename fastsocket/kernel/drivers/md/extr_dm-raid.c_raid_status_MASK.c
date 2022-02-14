
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int chunksize; int max_write_behind; int daemon_sleep; } ;
struct TYPE_14__ {int raid_disks; int layout; TYPE_1__ bitmap_info; struct r5conf* private; int sync_speed_max; int sync_speed_min; scalar_t__ recovery_cp; int chunk_sectors; int resync_mismatches; int last_sync_action; scalar_t__ resync_max_sectors; int recovery; scalar_t__ curr_resync_completed; } ;
struct raid_set {int print_flags; TYPE_5__* dev; TYPE_7__ md; TYPE_6__* raid_type; } ;
struct r5conf {int max_nr_stripes; } ;
struct dm_target {struct raid_set* private; } ;
typedef int status_type_t ;
typedef scalar_t__ sector_t ;
struct TYPE_13__ {int name; } ;
struct TYPE_11__ {int flags; } ;
struct TYPE_12__ {TYPE_3__* data_dev; TYPE_2__* meta_dev; TYPE_4__ rdev; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {int name; } ;


 int DMEMIT (char*,...) ;
 int DMPF_DAEMON_SLEEP ;
 int DMPF_MAX_RECOVERY_RATE ;
 int DMPF_MAX_WRITE_BEHIND ;
 int DMPF_MIN_RECOVERY_RATE ;
 int DMPF_NOSYNC ;
 int DMPF_RAID10_COPIES ;
 int DMPF_RAID10_FORMAT ;
 int DMPF_REBUILD ;
 int DMPF_REGION_SIZE ;
 int DMPF_STRIPE_CACHE ;
 int DMPF_SYNC ;
 int Faulty ;
 int In_sync ;
 int MD_RECOVERY_REQUESTED ;
 int MD_RECOVERY_RUNNING ;
 scalar_t__ MaxSector ;


 int WriteMostly ;
 scalar_t__ atomic64_read (int *) ;
 int decipher_sync_action (TYPE_7__*) ;
 int hweight32 (int) ;
 int raid10_md_layout_to_copies (int ) ;
 int strcmp (int ,char*) ;
 int test_bit (int ,int *) ;

__attribute__((used)) static int raid_status(struct dm_target *ti, status_type_t type,
         char *result, unsigned maxlen)
{
 struct raid_set *rs = ti->private;
 unsigned raid_param_cnt = 1;
 unsigned sz = 0;
 int i, array_in_sync = 0;
 sector_t sync;

 switch (type) {
 case 129:
  DMEMIT("%s %d ", rs->raid_type->name, rs->md.raid_disks);

  if (test_bit(MD_RECOVERY_RUNNING, &rs->md.recovery))
   sync = rs->md.curr_resync_completed;
  else
   sync = rs->md.recovery_cp;

  if (sync >= rs->md.resync_max_sectors) {



   array_in_sync = 1;
   sync = rs->md.resync_max_sectors;
  } else if (test_bit(MD_RECOVERY_REQUESTED, &rs->md.recovery)) {





   array_in_sync = 1;
  } else {






   for (i = 0; i < rs->md.raid_disks; i++)
    if (!test_bit(In_sync, &rs->dev[i].rdev.flags))
     array_in_sync = 1;
  }







  for (i = 0; i < rs->md.raid_disks; i++) {
   if (test_bit(Faulty, &rs->dev[i].rdev.flags))
    DMEMIT("D");
   else if (!array_in_sync ||
     !test_bit(In_sync, &rs->dev[i].rdev.flags))
    DMEMIT("a");
   else
    DMEMIT("A");
  }
  DMEMIT(" %llu/%llu",
         (unsigned long long) sync,
         (unsigned long long) rs->md.resync_max_sectors);






  DMEMIT(" %s", decipher_sync_action(&rs->md));






  DMEMIT(" %llu",
         (strcmp(rs->md.last_sync_action, "check")) ? 0 :
         (unsigned long long)
         atomic64_read(&rs->md.resync_mismatches));
  break;
 case 128:

  for (i = 0; i < rs->md.raid_disks; i++) {
   if ((rs->print_flags & DMPF_REBUILD) &&
       rs->dev[i].data_dev &&
       !test_bit(In_sync, &rs->dev[i].rdev.flags))
    raid_param_cnt += 2;
   if (rs->dev[i].data_dev &&
       test_bit(WriteMostly, &rs->dev[i].rdev.flags))
    raid_param_cnt += 2;
  }

  raid_param_cnt += (hweight32(rs->print_flags & ~DMPF_REBUILD) * 2);
  if (rs->print_flags & (DMPF_SYNC | DMPF_NOSYNC))
   raid_param_cnt--;

  DMEMIT("%s %u %u", rs->raid_type->name,
         raid_param_cnt, rs->md.chunk_sectors);

  if ((rs->print_flags & DMPF_SYNC) &&
      (rs->md.recovery_cp == MaxSector))
   DMEMIT(" sync");
  if (rs->print_flags & DMPF_NOSYNC)
   DMEMIT(" nosync");

  for (i = 0; i < rs->md.raid_disks; i++)
   if ((rs->print_flags & DMPF_REBUILD) &&
       rs->dev[i].data_dev &&
       !test_bit(In_sync, &rs->dev[i].rdev.flags))
    DMEMIT(" rebuild %u", i);

  if (rs->print_flags & DMPF_DAEMON_SLEEP)
   DMEMIT(" daemon_sleep %lu",
          rs->md.bitmap_info.daemon_sleep);

  if (rs->print_flags & DMPF_MIN_RECOVERY_RATE)
   DMEMIT(" min_recovery_rate %d", rs->md.sync_speed_min);

  if (rs->print_flags & DMPF_MAX_RECOVERY_RATE)
   DMEMIT(" max_recovery_rate %d", rs->md.sync_speed_max);

  for (i = 0; i < rs->md.raid_disks; i++)
   if (rs->dev[i].data_dev &&
       test_bit(WriteMostly, &rs->dev[i].rdev.flags))
    DMEMIT(" write_mostly %u", i);

  if (rs->print_flags & DMPF_MAX_WRITE_BEHIND)
   DMEMIT(" max_write_behind %lu",
          rs->md.bitmap_info.max_write_behind);

  if (rs->print_flags & DMPF_STRIPE_CACHE) {
   struct r5conf *conf = rs->md.private;


   DMEMIT(" stripe_cache %d",
          conf ? conf->max_nr_stripes * 2 : 0);
  }

  if (rs->print_flags & DMPF_REGION_SIZE)
   DMEMIT(" region_size %lu",
          rs->md.bitmap_info.chunksize >> 9);

  if (rs->print_flags & DMPF_RAID10_COPIES)
   DMEMIT(" raid10_copies %u",
          raid10_md_layout_to_copies(rs->md.layout));

  if (rs->print_flags & DMPF_RAID10_FORMAT)
   DMEMIT(" raid10_format near");

  DMEMIT(" %d", rs->md.raid_disks);
  for (i = 0; i < rs->md.raid_disks; i++) {
   if (rs->dev[i].meta_dev)
    DMEMIT(" %s", rs->dev[i].meta_dev->name);
   else
    DMEMIT(" -");

   if (rs->dev[i].data_dev)
    DMEMIT(" %s", rs->dev[i].data_dev->name);
   else
    DMEMIT(" -");
  }
 }

 return 0;
}
