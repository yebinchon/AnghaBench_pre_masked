
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int backing_dev_info; } ;
struct mpconf {TYPE_1__* multipaths; } ;
struct mddev {int raid_disks; struct mpconf* private; } ;
struct md_rdev {int bdev; int flags; } ;
struct TYPE_2__ {int rdev; } ;


 int VAR_0 ;
 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (struct mddev*,int) ;
 struct md_rdev* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(void *VAR_1, int VAR_2)
{
 struct mddev *VAR_3 = VAR_1;
 struct mpconf *VAR_4 = VAR_3->private;
 int VAR_5, VAR_6 = 0;

 if (FUNC_2(VAR_3, VAR_2))
  return 1;

 FUNC_4();
 for (VAR_5 = 0; VAR_5 < VAR_3->raid_disks ; VAR_5++) {
  struct md_rdev *VAR_7 = FUNC_3(VAR_4->multipaths[VAR_5].rdev);
  if (VAR_7 && !FUNC_6(VAR_0, &VAR_7->flags)) {
   struct request_queue *VAR_8 = FUNC_0(VAR_7->bdev);

   VAR_6 |= FUNC_1(&VAR_8->backing_dev_info, VAR_2);



   break;
  }
 }
 FUNC_5();
 return VAR_6;
}
