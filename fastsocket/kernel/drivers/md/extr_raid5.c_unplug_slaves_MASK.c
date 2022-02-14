
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct r5conf {TYPE_1__* disks; int previous_raid_disks; int raid_disks; } ;
struct mddev {struct r5conf* private; } ;
struct md_rdev {int nr_pending; int bdev; int flags; } ;
struct TYPE_2__ {int rdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct request_queue* FUNC_2 (int ) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (int ,int ) ;
 struct md_rdev* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct md_rdev*,struct mddev*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct mddev *VAR_1)
{
 struct r5conf *VAR_2 = VAR_1->private;
 int VAR_3;
 int VAR_4 = FUNC_4(VAR_2->raid_disks, VAR_2->previous_raid_disks);

 FUNC_6();
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  struct md_rdev *VAR_5 = FUNC_5(VAR_2->disks[VAR_3].rdev);
  if (VAR_5 && !FUNC_9(VAR_0, &VAR_5->flags) && FUNC_1(&VAR_5->nr_pending)) {
   struct request_queue *VAR_6 = FUNC_2(VAR_5->bdev);

   FUNC_0(&VAR_5->nr_pending);
   FUNC_7();

   FUNC_3(VAR_6);

   FUNC_8(VAR_5, VAR_1);
   FUNC_6();
  }
 }
 FUNC_7();
}
