
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned long max_write_behind; unsigned long daemon_sleep; } ;
struct TYPE_11__ {unsigned long new_chunk_sectors; unsigned long chunk_sectors; unsigned int raid_disks; int sync_speed_min; int sync_speed_max; unsigned int dev_sectors; int external; scalar_t__ persistent; int layout; int new_layout; TYPE_1__ bitmap_info; void* recovery_cp; } ;
struct raid_set {TYPE_5__ md; TYPE_6__* ti; TYPE_2__* raid_type; int print_flags; TYPE_4__* dev; } ;
typedef unsigned int sector_t ;
struct TYPE_12__ {unsigned int len; char* error; } ;
struct TYPE_9__ {int flags; void* recovery_offset; } ;
struct TYPE_10__ {TYPE_3__ rdev; } ;
struct TYPE_8__ {int level; unsigned int parity_devs; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned long VAR_13 ;
 int VAR_14 ;
 unsigned long VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_6__*,unsigned int) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (char*,int,unsigned long*) ;
 int FUNC_5 (char*,unsigned int) ;
 scalar_t__ FUNC_6 (TYPE_5__*,int) ;
 scalar_t__ FUNC_7 (unsigned int,unsigned int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (char*,char*) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 scalar_t__ FUNC_11 (struct raid_set*,unsigned long) ;

__attribute__((used)) static int FUNC_12(struct raid_set *VAR_18, char **VAR_19,
        unsigned VAR_20)
{
 char *VAR_21 = "near";
 unsigned VAR_22 = 2;
 unsigned VAR_23;
 unsigned long VAR_24, VAR_25 = 0;
 sector_t VAR_26 = VAR_18->ti->len;
 sector_t VAR_27;
 char *VAR_28;





 if ((FUNC_4(VAR_19[0], 10, &VAR_24) < 0)) {
  VAR_18->ti->error = "Bad chunk size";
  return -VAR_12;
 } else if (VAR_18->raid_type->level == 1) {
  if (VAR_24)
   FUNC_0("Ignoring chunk size parameter for RAID 1");
  VAR_24 = 0;
 } else if (!FUNC_3(VAR_24)) {
  VAR_18->ti->error = "Chunk size must be a power of 2";
  return -VAR_12;
 } else if (VAR_24 < 8) {
  VAR_18->ti->error = "Chunk size value is too small";
  return -VAR_12;
 }

 VAR_18->md.new_chunk_sectors = VAR_18->md.chunk_sectors = VAR_24;
 VAR_19++;
 VAR_20--;
 for (VAR_23 = 0; VAR_23 < VAR_18->md.raid_disks; VAR_23++) {
  FUNC_8(VAR_14, &VAR_18->dev[VAR_23].rdev.flags);
  VAR_18->dev[VAR_23].rdev.recovery_offset = VAR_16;
 }




 for (VAR_23 = 0; VAR_23 < VAR_20; VAR_23++) {
  if (!FUNC_9(VAR_19[VAR_23], "nosync")) {
   VAR_18->md.recovery_cp = VAR_16;
   VAR_18->print_flags |= VAR_5;
   continue;
  }
  if (!FUNC_9(VAR_19[VAR_23], "sync")) {
   VAR_18->md.recovery_cp = 0;
   VAR_18->print_flags |= VAR_11;
   continue;
  }


  if ((VAR_23 + 1) >= VAR_20) {
   VAR_18->ti->error = "Wrong number of raid parameters given";
   return -VAR_12;
  }

  VAR_28 = VAR_19[VAR_23++];


  if (!FUNC_9(VAR_28, "raid10_format")) {
   if (VAR_18->raid_type->level != 10) {
    VAR_18->ti->error = "'raid10_format' is an invalid parameter for this RAID type";
    return -VAR_12;
   }
   if (FUNC_10("near", VAR_19[VAR_23])) {
    VAR_18->ti->error = "Invalid 'raid10_format' value given";
    return -VAR_12;
   }
   VAR_21 = VAR_19[VAR_23];
   VAR_18->print_flags |= VAR_7;
   continue;
  }

  if (FUNC_4(VAR_19[VAR_23], 10, &VAR_24) < 0) {
   VAR_18->ti->error = "Bad numerical argument given in raid params";
   return -VAR_12;
  }


  if (!FUNC_9(VAR_28, "rebuild")) {
   if (VAR_24 >= VAR_18->md.raid_disks) {
    VAR_18->ti->error = "Invalid rebuild index given";
    return -VAR_12;
   }
   FUNC_1(VAR_14, &VAR_18->dev[VAR_24].rdev.flags);
   VAR_18->dev[VAR_24].rdev.recovery_offset = 0;
   VAR_18->print_flags |= VAR_8;
  } else if (!FUNC_9(VAR_28, "write_mostly")) {
   if (VAR_18->raid_type->level != 1) {
    VAR_18->ti->error = "write_mostly option is only valid for RAID1";
    return -VAR_12;
   }
   if (VAR_24 >= VAR_18->md.raid_disks) {
    VAR_18->ti->error = "Invalid write_mostly drive index given";
    return -VAR_12;
   }
   FUNC_8(VAR_17, &VAR_18->dev[VAR_24].rdev.flags);
  } else if (!FUNC_9(VAR_28, "max_write_behind")) {
   if (VAR_18->raid_type->level != 1) {
    VAR_18->ti->error = "max_write_behind option is only valid for RAID1";
    return -VAR_12;
   }
   VAR_18->print_flags |= VAR_3;





   VAR_24 /= 2;
   if (VAR_24 > VAR_0) {
    VAR_18->ti->error = "Max write-behind limit out of range";
    return -VAR_12;
   }
   VAR_18->md.bitmap_info.max_write_behind = VAR_24;
  } else if (!FUNC_9(VAR_28, "daemon_sleep")) {
   VAR_18->print_flags |= VAR_1;
   if (!VAR_24 || (VAR_24 > VAR_15)) {
    VAR_18->ti->error = "daemon sleep period out of range";
    return -VAR_12;
   }
   VAR_18->md.bitmap_info.daemon_sleep = VAR_24;
  } else if (!FUNC_9(VAR_28, "stripe_cache")) {
   VAR_18->print_flags |= VAR_10;





   VAR_24 /= 2;

   if ((VAR_18->raid_type->level != 5) &&
       (VAR_18->raid_type->level != 6)) {
    VAR_18->ti->error = "Inappropriate argument: stripe_cache";
    return -VAR_12;
   }
   if (FUNC_6(&VAR_18->md, (int)VAR_24)) {
    VAR_18->ti->error = "Bad stripe_cache size";
    return -VAR_12;
   }
  } else if (!FUNC_9(VAR_28, "min_recovery_rate")) {
   VAR_18->print_flags |= VAR_4;
   if (VAR_24 > VAR_13) {
    VAR_18->ti->error = "min_recovery_rate out of range";
    return -VAR_12;
   }
   VAR_18->md.sync_speed_min = (int)VAR_24;
  } else if (!FUNC_9(VAR_28, "max_recovery_rate")) {
   VAR_18->print_flags |= VAR_2;
   if (VAR_24 > VAR_13) {
    VAR_18->ti->error = "max_recovery_rate out of range";
    return -VAR_12;
   }
   VAR_18->md.sync_speed_max = (int)VAR_24;
  } else if (!FUNC_9(VAR_28, "region_size")) {
   VAR_18->print_flags |= VAR_9;
   VAR_25 = VAR_24;
  } else if (!FUNC_9(VAR_28, "raid10_copies") &&
      (VAR_18->raid_type->level == 10)) {
   if ((VAR_24 < 2) || (VAR_24 > 0xFF)) {
    VAR_18->ti->error = "Bad value for 'raid10_copies'";
    return -VAR_12;
   }
   VAR_18->print_flags |= VAR_6;
   VAR_22 = VAR_24;
  } else {
   FUNC_0("Unable to parse RAID parameter: %s", VAR_28);
   VAR_18->ti->error = "Unable to parse RAID parameters";
   return -VAR_12;
  }
 }

 if (FUNC_11(VAR_18, VAR_25))
  return -VAR_12;

 if (VAR_18->md.chunk_sectors)
  VAR_27 = VAR_18->md.chunk_sectors;
 else
  VAR_27 = VAR_25;

 if (FUNC_2(VAR_18->ti, VAR_27))
  return -VAR_12;

 if (VAR_18->raid_type->level == 10) {
  if (VAR_22 > VAR_18->md.raid_disks) {
   VAR_18->ti->error = "Not enough devices to satisfy specification";
   return -VAR_12;
  }


  VAR_26 = VAR_18->ti->len * VAR_22;
  FUNC_7(VAR_26, VAR_18->md.raid_disks);

  VAR_18->md.layout = FUNC_5(VAR_21,
          VAR_22);
  VAR_18->md.new_layout = VAR_18->md.layout;
 } else if ((VAR_18->raid_type->level > 1) &&
     FUNC_7(VAR_26,
         (VAR_18->md.raid_disks - VAR_18->raid_type->parity_devs))) {
  VAR_18->ti->error = "Target length not divisible by number of data devices";
  return -VAR_12;
 }
 VAR_18->md.dev_sectors = VAR_26;


 VAR_18->md.persistent = 0;
 VAR_18->md.external = 1;

 return 0;
}
