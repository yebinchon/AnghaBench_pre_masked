
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_rdev {int sb_loaded; int mddev; int raid_disk; int sb_page; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,struct md_rdev*) ;
 int FUNC_3 (struct md_rdev*,int ,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct md_rdev *VAR_2, int VAR_3)
{
 FUNC_0(!VAR_2->sb_page);

 if (VAR_2->sb_loaded)
  return 0;

 if (!FUNC_3(VAR_2, 0, VAR_3, VAR_2->sb_page, VAR_1, 1)) {
  FUNC_1("Failed to read superblock of device at position %d",
        VAR_2->raid_disk);
  FUNC_2(VAR_2->mddev, VAR_2);
  return -VAR_0;
 }

 VAR_2->sb_loaded = 1;

 return 0;
}
