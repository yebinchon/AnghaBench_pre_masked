
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mdp_superblock_1 {int devflags; int feature_map; int recovery_offset; int * dev_roles; int max_dev; int new_chunk; int new_layout; int new_level; int delta_disks; int reshape_position; int bitmap_offset; int set_uuid; int resync_offset; int size; int raid_disks; int layout; int level; int utime; int ctime; int chunksize; int events; } ;
struct TYPE_4__ {scalar_t__ offset; scalar_t__ space; int default_offset; int default_space; int * file; } ;
struct mddev {int raid_disks; int major_version; int chunk_sectors; unsigned long long ctime; unsigned long long utime; int level; int layout; unsigned long long dev_sectors; scalar_t__ events; int reshape_backwards; unsigned long long recovery_cp; int max_disks; scalar_t__ minor_version; unsigned long long reshape_position; int delta_disks; int new_level; int new_layout; int new_chunk_sectors; TYPE_1__* bitmap; int * pers; TYPE_2__ bitmap_info; int uuid; scalar_t__* clevel; scalar_t__ external; scalar_t__ patch_version; } ;
struct md_rdev {int raid_disk; int desc_nr; unsigned long long recovery_offset; int flags; int sb_page; } ;
typedef scalar_t__ __u64 ;
typedef scalar_t__ __s32 ;
struct TYPE_3__ {scalar_t__ events_cleared; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned long long FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct mdp_superblock_1* FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct mddev *VAR_13, struct md_rdev *VAR_14)
{
 struct mdp_superblock_1 *VAR_15 = FUNC_5(VAR_14->sb_page);
 __u64 VAR_16 = FUNC_3(VAR_15->events);

 VAR_14->raid_disk = -1;
 FUNC_0(VAR_1, &VAR_14->flags);
 FUNC_0(VAR_2, &VAR_14->flags);
 FUNC_0(VAR_11, &VAR_14->flags);

 if (VAR_13->raid_disks == 0) {
  VAR_13->major_version = 1;
  VAR_13->patch_version = 0;
  VAR_13->external = 0;
  VAR_13->chunk_sectors = FUNC_2(VAR_15->chunksize);
  VAR_13->ctime = FUNC_3(VAR_15->ctime) & ((1ULL << 32)-1);
  VAR_13->utime = FUNC_3(VAR_15->utime) & ((1ULL << 32)-1);
  VAR_13->level = FUNC_2(VAR_15->level);
  VAR_13->clevel[0] = 0;
  VAR_13->layout = FUNC_2(VAR_15->layout);
  VAR_13->raid_disks = FUNC_2(VAR_15->raid_disks);
  VAR_13->dev_sectors = FUNC_3(VAR_15->size);
  VAR_13->events = VAR_16;
  VAR_13->bitmap_info.offset = 0;
  VAR_13->bitmap_info.space = 0;



  VAR_13->bitmap_info.default_offset = 1024 >> 9;
  VAR_13->bitmap_info.default_space = (4096-1024) >> 9;
  VAR_13->reshape_backwards = 0;

  VAR_13->recovery_cp = FUNC_3(VAR_15->resync_offset);
  FUNC_4(VAR_13->uuid, VAR_15->set_uuid, 16);

  VAR_13->max_disks = (4096-256)/2;

  if ((FUNC_2(VAR_15->feature_map) & VAR_4) &&
      VAR_13->bitmap_info.file == ((void*)0)) {
   VAR_13->bitmap_info.offset =
    (__s32)FUNC_2(VAR_15->bitmap_offset);





   if (VAR_13->minor_version > 0)
    VAR_13->bitmap_info.space = 0;
   else if (VAR_13->bitmap_info.offset > 0)
    VAR_13->bitmap_info.space =
     8 - VAR_13->bitmap_info.offset;
   else
    VAR_13->bitmap_info.space =
     -VAR_13->bitmap_info.offset;
  }

  if ((FUNC_2(VAR_15->feature_map) & VAR_7)) {
   VAR_13->reshape_position = FUNC_3(VAR_15->reshape_position);
   VAR_13->delta_disks = FUNC_2(VAR_15->delta_disks);
   VAR_13->new_level = FUNC_2(VAR_15->new_level);
   VAR_13->new_layout = FUNC_2(VAR_15->new_layout);
   VAR_13->new_chunk_sectors = FUNC_2(VAR_15->new_chunk);
   if (VAR_13->delta_disks < 0 ||
       (VAR_13->delta_disks == 0 &&
        (FUNC_2(VAR_15->feature_map)
         & VAR_8)))
    VAR_13->reshape_backwards = 1;
  } else {
   VAR_13->reshape_position = VAR_9;
   VAR_13->delta_disks = 0;
   VAR_13->new_level = VAR_13->level;
   VAR_13->new_layout = VAR_13->layout;
   VAR_13->new_chunk_sectors = VAR_13->chunk_sectors;
  }

 } else if (VAR_13->pers == ((void*)0)) {


  ++VAR_16;
  if (VAR_14->desc_nr >= 0 &&
      VAR_14->desc_nr < FUNC_2(VAR_15->max_dev) &&
      FUNC_1(VAR_15->dev_roles[VAR_14->desc_nr]) < 0xfffe)
   if (VAR_16 < VAR_13->events)
    return -VAR_0;
 } else if (VAR_13->bitmap) {



  if (VAR_16 < VAR_13->bitmap->events_cleared)
   return 0;
 } else {
  if (VAR_16 < VAR_13->events)

   return 0;
 }
 if (VAR_13->level != VAR_3) {
  int VAR_17;
  if (VAR_14->desc_nr < 0 ||
      VAR_14->desc_nr >= FUNC_2(VAR_15->max_dev)) {
   VAR_17 = 0xffff;
   VAR_14->desc_nr = -1;
  } else
   VAR_17 = FUNC_1(VAR_15->dev_roles[VAR_14->desc_nr]);
  switch(VAR_17) {
  case 0xffff:
   break;
  case 0xfffe:
   FUNC_6(VAR_1, &VAR_14->flags);
   break;
  default:
   if ((FUNC_2(VAR_15->feature_map) &
        VAR_5))
    VAR_14->recovery_offset = FUNC_3(VAR_15->recovery_offset);
   else
    FUNC_6(VAR_2, &VAR_14->flags);
   VAR_14->raid_disk = VAR_17;
   break;
  }
  if (VAR_15->devflags & VAR_12)
   FUNC_6(VAR_11, &VAR_14->flags);
  if (FUNC_2(VAR_15->feature_map) & VAR_6)
   FUNC_6(VAR_10, &VAR_14->flags);
 } else
  FUNC_6(VAR_2, &VAR_14->flags);

 return 0;
}
