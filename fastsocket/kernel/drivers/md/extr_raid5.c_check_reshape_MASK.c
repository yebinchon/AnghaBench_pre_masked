
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int previous_raid_disks; } ;
struct mddev {scalar_t__ delta_disks; scalar_t__ new_layout; scalar_t__ layout; scalar_t__ new_chunk_sectors; scalar_t__ chunk_sectors; scalar_t__ reshape_position; int level; int raid_disks; struct r5conf* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mddev*) ;
 scalar_t__ FUNC_1 (struct r5conf*) ;
 int FUNC_2 (struct r5conf*,int) ;

__attribute__((used)) static int FUNC_3(struct mddev *VAR_3)
{
 struct r5conf *VAR_4 = VAR_3->private;

 if (VAR_3->delta_disks == 0 &&
     VAR_3->new_layout == VAR_3->layout &&
     VAR_3->new_chunk_sectors == VAR_3->chunk_sectors)
  return 0;
 if (FUNC_1(VAR_4))
  return -VAR_0;
 if (VAR_3->delta_disks < 0 && VAR_3->reshape_position == VAR_2) {





  int VAR_5 = 2;
  if (VAR_3->level == 6)
   VAR_5 = 4;
  if (VAR_3->raid_disks + VAR_3->delta_disks < VAR_5)
   return -VAR_0;
 }

 if (!FUNC_0(VAR_3))
  return -VAR_1;

 return FUNC_2(VAR_4, (VAR_4->previous_raid_disks
         + VAR_3->delta_disks));
}
