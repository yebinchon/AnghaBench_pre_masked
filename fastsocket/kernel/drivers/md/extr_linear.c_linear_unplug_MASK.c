
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {struct mddev* queuedata; } ;
struct mddev {int raid_disks; int private; } ;
struct linear_conf {TYPE_2__* disks; } ;
struct TYPE_4__ {TYPE_1__* rdev; } ;
struct TYPE_3__ {int bdev; } ;


 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (struct request_queue*) ;
 struct linear_conf* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct request_queue *VAR_0)
{
 struct mddev *VAR_1 = VAR_0->queuedata;
 struct linear_conf *VAR_2;
 int VAR_3;

 FUNC_3();
 VAR_2 = FUNC_2(VAR_1->private);

 for (VAR_3=0; VAR_3 < VAR_1->raid_disks; VAR_3++) {
  struct request_queue *VAR_4 = FUNC_0(VAR_2->disks[VAR_3].rdev->bdev);
  FUNC_1(VAR_4);
 }
 FUNC_4();
}
