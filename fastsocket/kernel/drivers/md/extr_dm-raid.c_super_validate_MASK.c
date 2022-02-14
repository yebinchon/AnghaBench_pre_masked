
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offset; } ;
struct mddev {TYPE_1__ bitmap_info; int events; } ;
struct md_rdev {int flags; int recovery_offset; int raid_disk; int saved_raid_disk; TYPE_3__* mddev; int sb_page; } ;
struct dm_raid_superblock {int disk_recovery_offset; } ;
struct TYPE_5__ {int default_offset; } ;
struct TYPE_6__ {TYPE_2__ bitmap_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 struct dm_raid_superblock* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct mddev*,struct md_rdev*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct mddev *VAR_5, struct md_rdev *VAR_6)
{
 struct dm_raid_superblock *VAR_7 = FUNC_2(VAR_6->sb_page);





 if (!VAR_5->events && FUNC_3(VAR_5, VAR_6))
  return -VAR_0;

 VAR_5->bitmap_info.offset = 4096 >> 9;
 VAR_6->mddev->bitmap_info.default_offset = 4096 >> 9;
 if (!FUNC_4(VAR_2, &VAR_6->flags)) {
  VAR_6->recovery_offset = FUNC_1(VAR_7->disk_recovery_offset);
  if (VAR_6->recovery_offset != VAR_4)
   FUNC_0(VAR_3, &VAR_6->flags);
 }




 if (FUNC_4(VAR_1, &VAR_6->flags)) {
  FUNC_0(VAR_1, &VAR_6->flags);
  FUNC_0(VAR_3, &VAR_6->flags);
  VAR_6->saved_raid_disk = VAR_6->raid_disk;
  VAR_6->recovery_offset = 0;
 }

 FUNC_0(VAR_2, &VAR_6->flags);

 return 0;
}
