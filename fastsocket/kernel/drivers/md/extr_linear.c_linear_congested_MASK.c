
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int backing_dev_info; } ;
struct mddev {int raid_disks; int private; } ;
struct linear_conf {TYPE_2__* disks; } ;
struct TYPE_4__ {TYPE_1__* rdev; } ;
struct TYPE_3__ {int bdev; } ;


 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (struct mddev*,int) ;
 struct linear_conf* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(void *VAR_0, int VAR_1)
{
 struct mddev *VAR_2 = VAR_0;
 struct linear_conf *VAR_3;
 int VAR_4, VAR_5 = 0;

 if (FUNC_2(VAR_2, VAR_1))
  return 1;

 FUNC_4();
 VAR_3 = FUNC_3(VAR_2->private);

 for (VAR_4 = 0; VAR_4 < VAR_2->raid_disks && !VAR_5 ; VAR_4++) {
  struct request_queue *VAR_6 = FUNC_0(VAR_3->disks[VAR_4].rdev->bdev);
  VAR_5 |= FUNC_1(&VAR_6->backing_dev_info, VAR_1);
 }

 FUNC_5();
 return VAR_5;
}
