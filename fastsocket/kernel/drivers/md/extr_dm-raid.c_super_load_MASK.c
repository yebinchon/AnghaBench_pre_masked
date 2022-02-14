
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct md_rdev {int sb_size; int sb_page; TYPE_1__* mddev; int flags; int recovery_offset; scalar_t__ sb_start; } ;
struct dm_raid_superblock {scalar_t__ magic; int events; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 struct dm_raid_superblock* FUNC_2 (int ) ;
 int FUNC_3 (struct md_rdev*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_1__*,struct md_rdev*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct md_rdev *VAR_4, struct md_rdev *VAR_5)
{
 int VAR_6;
 struct dm_raid_superblock *VAR_7;
 struct dm_raid_superblock *VAR_8;
 uint64_t VAR_9, VAR_10;

 VAR_4->sb_start = 0;
 VAR_4->sb_size = sizeof(*VAR_7);

 VAR_6 = FUNC_3(VAR_4, VAR_4->sb_size);
 if (VAR_6)
  return VAR_6;

 VAR_7 = FUNC_2(VAR_4->sb_page);






 if ((VAR_7->magic != FUNC_0(VAR_0)) ||
     (!FUNC_6(VAR_2, &VAR_4->flags) && !VAR_4->recovery_offset)) {
  FUNC_5(VAR_4->mddev, VAR_4);

  FUNC_4(VAR_1, &VAR_4->flags);


  FUNC_4(VAR_3, &VAR_4->mddev->flags);


  return VAR_5 ? 0 : 1;
 }

 if (!VAR_5)
  return 1;

 VAR_9 = FUNC_1(VAR_7->events);

 VAR_8 = FUNC_2(VAR_5->sb_page);
 VAR_10 = FUNC_1(VAR_8->events);

 return (VAR_9 > VAR_10) ? 1 : 0;
}
