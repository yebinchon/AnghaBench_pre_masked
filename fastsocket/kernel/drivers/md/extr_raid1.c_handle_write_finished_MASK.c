
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r1conf {int raid_disks; int mddev; TYPE_1__* mirrors; } ;
struct r1bio {int state; int ** bios; int sectors; int sector; } ;
struct md_rdev {int dummy; } ;
struct TYPE_2__ {struct md_rdev* rdev; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct r1bio*) ;
 int FUNC_1 (int ,struct md_rdev*) ;
 int FUNC_2 (struct r1bio*,int) ;
 int FUNC_3 (struct r1bio*) ;
 int FUNC_4 (struct md_rdev*,int ,int ,int ) ;
 int FUNC_5 (struct md_rdev*,int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct r1conf *VAR_3, struct r1bio *VAR_4)
{
 int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_3->raid_disks * 2 ; VAR_5++)
  if (VAR_4->bios[VAR_5] == VAR_0) {
   struct md_rdev *VAR_6 = VAR_3->mirrors[VAR_5].rdev;
   FUNC_4(VAR_6,
          VAR_4->sector,
          VAR_4->sectors, 0);
   FUNC_5(VAR_6, VAR_3->mddev);
  } else if (VAR_4->bios[VAR_5] != ((void*)0)) {




   if (!FUNC_2(VAR_4, VAR_5)) {
    FUNC_1(VAR_3->mddev,
      VAR_3->mirrors[VAR_5].rdev);

    FUNC_6(VAR_1, &VAR_4->state);
   }
   FUNC_5(VAR_3->mirrors[VAR_5].rdev,
      VAR_3->mddev);
  }
 if (FUNC_7(VAR_2, &VAR_4->state))
  FUNC_0(VAR_4);
 FUNC_3(VAR_4);
}
