
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ offset; scalar_t__ default_offset; int default_space; int space; } ;
struct mddev {scalar_t__ major_version; scalar_t__ minor_version; scalar_t__ ctime; scalar_t__ level; scalar_t__ chunk_sectors; int dev_sectors; scalar_t__ raid_disks; scalar_t__ layout; scalar_t__ new_layout; TYPE_4__ bitmap_info; TYPE_3__* pers; TYPE_2__* bitmap; scalar_t__ sync_thread; scalar_t__ recovery; int persistent; } ;
typedef int sector_t ;
struct TYPE_11__ {scalar_t__ major_version; scalar_t__ minor_version; scalar_t__ ctime; scalar_t__ level; int not_persistent; scalar_t__ chunk_size; int state; int size; scalar_t__ raid_disks; scalar_t__ layout; } ;
typedef TYPE_5__ mdu_array_info_t ;
struct TYPE_9__ {int (* check_reshape ) (struct mddev*) ;int (* quiesce ) (struct mddev*,int) ;} ;
struct TYPE_7__ {scalar_t__ file; } ;
struct TYPE_8__ {TYPE_1__ storage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mddev*) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (struct mddev*,int) ;
 int FUNC_4 (struct mddev*) ;
 int FUNC_5 (struct mddev*,int) ;
 int FUNC_6 (struct mddev*,int) ;
 int FUNC_7 (struct mddev*,int) ;
 int FUNC_8 (struct mddev*,int) ;
 int FUNC_9 (struct mddev*,scalar_t__) ;
 int FUNC_10 (struct mddev*,int) ;

__attribute__((used)) static int FUNC_11(struct mddev *VAR_5, mdu_array_info_t *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;


 if (VAR_5->bitmap && VAR_5->bitmap_info.offset)
  VAR_9 |= (1 << VAR_4);

 if (VAR_5->major_version != VAR_6->major_version ||
     VAR_5->minor_version != VAR_6->minor_version ||

     VAR_5->ctime != VAR_6->ctime ||
     VAR_5->level != VAR_6->level ||

     !(VAR_5->persistent != VAR_6->not_persistent)||
     VAR_5->chunk_sectors != VAR_6->chunk_size >> 9 ||

     ((VAR_9^VAR_6->state) & 0xfffffe00)
  )
  return -VAR_2;

 if (VAR_6->size >= 0 && VAR_5->dev_sectors / 2 != VAR_6->size)
  VAR_8++;
 if (VAR_5->raid_disks != VAR_6->raid_disks)
  VAR_8++;
 if (VAR_5->layout != VAR_6->layout)
  VAR_8++;
 if ((VAR_9 ^ VAR_6->state) & (1<<VAR_4))
  VAR_8++;
 if (VAR_8 == 0)
  return 0;
 if (VAR_8 > 1)
  return -VAR_2;

 if (VAR_5->layout != VAR_6->layout) {




  if (VAR_5->pers->check_reshape == ((void*)0))
   return -VAR_2;
  else {
   VAR_5->new_layout = VAR_6->layout;
   VAR_7 = VAR_5->pers->check_reshape(VAR_5);
   if (VAR_7)
    VAR_5->new_layout = VAR_5->layout;
   return VAR_7;
  }
 }
 if (VAR_6->size >= 0 && VAR_5->dev_sectors / 2 != VAR_6->size)
  VAR_7 = FUNC_10(VAR_5, (sector_t)VAR_6->size * 2);

 if (VAR_5->raid_disks != VAR_6->raid_disks)
  VAR_7 = FUNC_9(VAR_5, VAR_6->raid_disks);

 if ((VAR_9 ^ VAR_6->state) & (1<<VAR_4)) {
  if (VAR_5->pers->quiesce == ((void*)0))
   return -VAR_2;
  if (VAR_5->recovery || VAR_5->sync_thread)
   return -VAR_0;
  if (VAR_6->state & (1<<VAR_4)) {

   if (VAR_5->bitmap)
    return -VAR_1;
   if (VAR_5->bitmap_info.default_offset == 0)
    return -VAR_2;
   VAR_5->bitmap_info.offset =
    VAR_5->bitmap_info.default_offset;
   VAR_5->bitmap_info.space =
    VAR_5->bitmap_info.default_space;
   VAR_5->pers->quiesce(VAR_5, 1);
   VAR_7 = FUNC_0(VAR_5);
   if (!VAR_7)
    VAR_7 = FUNC_2(VAR_5);
   if (VAR_7)
    FUNC_1(VAR_5);
   VAR_5->pers->quiesce(VAR_5, 0);
  } else {

   if (!VAR_5->bitmap)
    return -VAR_3;
   if (VAR_5->bitmap->storage.file)
    return -VAR_2;
   VAR_5->pers->quiesce(VAR_5, 1);
   FUNC_1(VAR_5);
   VAR_5->pers->quiesce(VAR_5, 0);
   VAR_5->bitmap_info.offset = 0;
  }
 }
 FUNC_3(VAR_5, 1);
 return VAR_7;
}
