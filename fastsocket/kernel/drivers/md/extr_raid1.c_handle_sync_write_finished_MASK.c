
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r1conf {int raid_disks; int mddev; TYPE_1__* mirrors; } ;
struct r1bio {int sectors; int sector; int state; struct bio** bios; } ;
struct md_rdev {int dummy; } ;
struct bio {int bi_flags; int * bi_end_io; } ;
struct TYPE_2__ {struct md_rdev* rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,struct md_rdev*) ;
 int FUNC_2 (struct r1bio*) ;
 int FUNC_3 (struct md_rdev*,int ,int,int ) ;
 int FUNC_4 (struct md_rdev*,int ,int,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct r1conf *VAR_3, struct r1bio *VAR_4)
{
 int VAR_5;
 int VAR_6 = VAR_4->sectors;
 for (VAR_5 = 0; VAR_5 < VAR_3->raid_disks * 2 ; VAR_5++) {
  struct md_rdev *VAR_7 = VAR_3->mirrors[VAR_5].rdev;
  struct bio *VAR_8 = VAR_4->bios[VAR_5];
  if (VAR_8->bi_end_io == ((void*)0))
   continue;
  if (FUNC_5(VAR_0, &VAR_8->bi_flags) &&
      FUNC_5(VAR_1, &VAR_4->state)) {
   FUNC_3(VAR_7, VAR_4->sector, VAR_6, 0);
  }
  if (!FUNC_5(VAR_0, &VAR_8->bi_flags) &&
      FUNC_5(VAR_2, &VAR_4->state)) {
   if (!FUNC_4(VAR_7, VAR_4->sector, VAR_6, 0))
    FUNC_1(VAR_3->mddev, VAR_7);
  }
 }
 FUNC_2(VAR_4);
 FUNC_0(VAR_3->mddev, VAR_6, 1);
}
