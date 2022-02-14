
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct mddev {int raid_disks; TYPE_2__* private; } ;
struct md_rdev {int nr_pending; int bdev; int flags; } ;
struct TYPE_4__ {TYPE_1__* multipaths; } ;
typedef TYPE_2__ multipath_conf_t ;
struct TYPE_3__ {int rdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 struct request_queue* FUNC_2 (int ) ;
 int FUNC_3 (struct request_queue*) ;
 struct md_rdev* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct md_rdev*,struct mddev*) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct mddev *VAR_1)
{
 multipath_conf_t *VAR_2 = VAR_1->private;
 int VAR_3;

 FUNC_5();
 for (VAR_3=0; VAR_3<VAR_1->raid_disks; VAR_3++) {
  struct md_rdev *VAR_4 = FUNC_4(VAR_2->multipaths[VAR_3].rdev);
  if (VAR_4 && !FUNC_8(VAR_0, &VAR_4->flags)
      && FUNC_1(&VAR_4->nr_pending)) {
   struct request_queue *VAR_5 = FUNC_2(VAR_4->bdev);

   FUNC_0(&VAR_4->nr_pending);
   FUNC_6();

   FUNC_3(VAR_5);

   FUNC_7(VAR_4, VAR_1);
   FUNC_5();
  }
 }
 FUNC_6();
}
