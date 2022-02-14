
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int offset; int default_offset; int default_space; scalar_t__ space; int * file; } ;
struct mddev {int minor_version; int chunk_sectors; int dev_sectors; scalar_t__ events; int reshape_backwards; int new_chunk_sectors; int level; TYPE_1__* bitmap; int * pers; TYPE_2__ bitmap_info; int max_disks; scalar_t__ uuid; void* recovery_cp; int layout; int new_layout; int new_level; int delta_disks; void* reshape_position; int raid_disks; scalar_t__* clevel; int utime; int ctime; scalar_t__ external; int patch_version; scalar_t__ major_version; } ;
struct md_rdev {int raid_disk; size_t desc_nr; int flags; scalar_t__ recovery_offset; int sb_page; } ;
typedef int sector_t ;
struct TYPE_9__ {int minor_version; int chunk_size; int new_chunk; int state; scalar_t__ events_hi; scalar_t__ cp_events_hi; scalar_t__ events_lo; scalar_t__ cp_events_lo; TYPE_4__* disks; int set_uuid3; int set_uuid2; int set_uuid1; int set_uuid0; void* recovery_cp; int new_layout; int new_level; int delta_disks; void* reshape_position; scalar_t__ size; int raid_disks; int layout; int level; int utime; int ctime; int patch_version; } ;
typedef TYPE_3__ mdp_super_t ;
struct TYPE_10__ {int state; int raid_disk; } ;
typedef TYPE_4__ mdp_disk_t ;
typedef scalar_t__ __u64 ;
struct TYPE_7__ {scalar_t__ events_cleared; } ;


 int VAR_0 ;
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
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (scalar_t__,int *,int) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct mddev *VAR_14, struct md_rdev *VAR_15)
{
 mdp_disk_t *VAR_16;
 mdp_super_t *VAR_17 = FUNC_3(VAR_15->sb_page);
 __u64 VAR_18 = FUNC_1(VAR_17);

 VAR_15->raid_disk = -1;
 FUNC_0(VAR_1, &VAR_15->flags);
 FUNC_0(VAR_2, &VAR_15->flags);
 FUNC_0(VAR_13, &VAR_15->flags);

 if (VAR_14->raid_disks == 0) {
  VAR_14->major_version = 0;
  VAR_14->minor_version = VAR_17->minor_version;
  VAR_14->patch_version = VAR_17->patch_version;
  VAR_14->external = 0;
  VAR_14->chunk_sectors = VAR_17->chunk_size >> 9;
  VAR_14->ctime = VAR_17->ctime;
  VAR_14->utime = VAR_17->utime;
  VAR_14->level = VAR_17->level;
  VAR_14->clevel[0] = 0;
  VAR_14->layout = VAR_17->layout;
  VAR_14->raid_disks = VAR_17->raid_disks;
  VAR_14->dev_sectors = ((sector_t)VAR_17->size) * 2;
  VAR_14->events = VAR_18;
  VAR_14->bitmap_info.offset = 0;
  VAR_14->bitmap_info.space = 0;

  VAR_14->bitmap_info.default_offset = VAR_9 >> 9;
  VAR_14->bitmap_info.default_space = 64*2 - (VAR_9 >> 9);
  VAR_14->reshape_backwards = 0;

  if (VAR_14->minor_version >= 91) {
   VAR_14->reshape_position = VAR_17->reshape_position;
   VAR_14->delta_disks = VAR_17->delta_disks;
   VAR_14->new_level = VAR_17->new_level;
   VAR_14->new_layout = VAR_17->new_layout;
   VAR_14->new_chunk_sectors = VAR_17->new_chunk >> 9;
   if (VAR_14->delta_disks < 0)
    VAR_14->reshape_backwards = 1;
  } else {
   VAR_14->reshape_position = VAR_12;
   VAR_14->delta_disks = 0;
   VAR_14->new_level = VAR_14->level;
   VAR_14->new_layout = VAR_14->layout;
   VAR_14->new_chunk_sectors = VAR_14->chunk_sectors;
  }

  if (VAR_17->state & (1<<VAR_10))
   VAR_14->recovery_cp = VAR_12;
  else {
   if (VAR_17->events_hi == VAR_17->cp_events_hi &&
    VAR_17->events_lo == VAR_17->cp_events_lo) {
    VAR_14->recovery_cp = VAR_17->recovery_cp;
   } else
    VAR_14->recovery_cp = 0;
  }

  FUNC_2(VAR_14->uuid+0, &VAR_17->set_uuid0, 4);
  FUNC_2(VAR_14->uuid+4, &VAR_17->set_uuid1, 4);
  FUNC_2(VAR_14->uuid+8, &VAR_17->set_uuid2, 4);
  FUNC_2(VAR_14->uuid+12,&VAR_17->set_uuid3, 4);

  VAR_14->max_disks = VAR_11;

  if (VAR_17->state & (1<<VAR_8) &&
      VAR_14->bitmap_info.file == ((void*)0)) {
   VAR_14->bitmap_info.offset =
    VAR_14->bitmap_info.default_offset;
   VAR_14->bitmap_info.space =
    VAR_14->bitmap_info.space;
  }

 } else if (VAR_14->pers == ((void*)0)) {


  ++VAR_18;
  if (VAR_17->disks[VAR_15->desc_nr].state & (
       (1<<VAR_6) | (1 << VAR_4)))
   if (VAR_18 < VAR_14->events)
    return -VAR_0;
 } else if (VAR_14->bitmap) {



  if (VAR_18 < VAR_14->bitmap->events_cleared)
   return 0;
 } else {
  if (VAR_18 < VAR_14->events)

   return 0;
 }

 if (VAR_14->level != VAR_3) {
  VAR_16 = VAR_17->disks + VAR_15->desc_nr;

  if (VAR_16->state & (1<<VAR_5))
   FUNC_4(VAR_1, &VAR_15->flags);
  else if (VAR_16->state & (1<<VAR_6) ) {

   FUNC_4(VAR_2, &VAR_15->flags);
   VAR_15->raid_disk = VAR_16->raid_disk;
  } else if (VAR_16->state & (1<<VAR_4)) {



   if (VAR_14->minor_version >= 91) {
    VAR_15->recovery_offset = 0;
    VAR_15->raid_disk = VAR_16->raid_disk;
   }
  }
  if (VAR_16->state & (1<<VAR_7))
   FUNC_4(VAR_13, &VAR_15->flags);
 } else
  FUNC_4(VAR_2, &VAR_15->flags);
 return 0;
}
