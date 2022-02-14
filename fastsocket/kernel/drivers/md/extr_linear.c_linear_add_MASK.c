
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int raid_disks; int gendisk; int array_sectors; int private; int reconfig_mutex; } ;
struct md_rdev {int saved_raid_disk; int raid_disk; } ;
struct linear_conf {int rcu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 struct linear_conf* FUNC_1 (struct mddev*,int) ;
 int FUNC_2 (struct mddev*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mddev*,int ) ;
 int FUNC_5 (int ,struct linear_conf*) ;
 struct linear_conf* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct mddev *VAR_3, struct md_rdev *VAR_4)
{
 struct linear_conf *VAR_5, *VAR_6;

 if (VAR_4->saved_raid_disk != VAR_3->raid_disks)
  return -VAR_0;

 VAR_4->raid_disk = VAR_4->saved_raid_disk;
 VAR_4->saved_raid_disk = -1;

 VAR_5 = FUNC_1(VAR_3,VAR_3->raid_disks+1);

 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_6(VAR_3->private,
         FUNC_3(
          &VAR_3->reconfig_mutex));
 VAR_3->raid_disks++;
 FUNC_5(VAR_3->private, VAR_5);
 FUNC_4(VAR_3, FUNC_2(VAR_3, 0, 0));
 FUNC_8(VAR_3->gendisk, VAR_3->array_sectors);
 FUNC_7(VAR_3->gendisk);
 FUNC_0(&VAR_6->rcu, VAR_2);
 return 0;
}
