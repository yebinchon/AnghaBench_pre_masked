
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r1conf {int raid_disks; int r1buf_pool; TYPE_1__* mirrors; } ;
struct r1bio {TYPE_2__* mddev; struct bio** bios; } ;
struct bio {scalar_t__ bi_end_io; } ;
struct TYPE_4__ {struct r1conf* private; } ;
struct TYPE_3__ {int rdev; } ;


 int FUNC_0 (struct r1conf*) ;
 int FUNC_1 (struct r1bio*,int ) ;
 int FUNC_2 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct r1bio *VAR_0)
{
 struct r1conf *VAR_1 = VAR_0->mddev->private;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->raid_disks * 2; VAR_2++) {
  struct bio *VAR_3 = VAR_0->bios[VAR_2];
  if (VAR_3->bi_end_io)
   FUNC_2(VAR_1->mirrors[VAR_2].rdev, VAR_0->mddev);
 }

 FUNC_1(VAR_0, VAR_1->r1buf_pool);

 FUNC_0(VAR_1);
}
