
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct TYPE_4__ {int raid_disks; } ;
struct r10conf {TYPE_1__* mirrors; TYPE_2__ geo; } ;
struct mddev {struct r10conf* private; } ;
struct md_rdev {int nr_pending; int bdev; int flags; } ;
struct TYPE_3__ {int rdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct request_queue* FUNC_2 (int ) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (char*) ;
 struct md_rdev* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct md_rdev*,struct mddev*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct mddev *VAR_1)
{
 struct r10conf *VAR_2 = VAR_1->private;
 int VAR_3;

 FUNC_6();
 for (VAR_3=0; VAR_3 < VAR_2->geo.raid_disks; VAR_3++) {
  struct md_rdev *VAR_4 = FUNC_5(VAR_2->mirrors[VAR_3].rdev);
  if (VAR_4 && !FUNC_9(VAR_0, &VAR_4->flags) && FUNC_1(&VAR_4->nr_pending)) {
   struct request_queue *VAR_5 = FUNC_2(VAR_4->bdev);

   if (!VAR_5) {
    FUNC_4("FIXME: No queue on device\n");
    continue;
   }
   FUNC_0(&VAR_4->nr_pending);
   FUNC_7();

   FUNC_3(VAR_5);

   FUNC_8(VAR_4, VAR_1);
   FUNC_6();
  }
 }
 FUNC_7();
}
