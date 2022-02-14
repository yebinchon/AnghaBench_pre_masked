
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct mddev* queuedata; } ;
struct r0conf {TYPE_1__* strip_zone; struct md_rdev** devlist; } ;
struct mddev {struct r0conf* private; } ;
struct md_rdev {int bdev; } ;
struct TYPE_2__ {int nb_dev; } ;


 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (struct request_queue*) ;

__attribute__((used)) static void FUNC_2(struct request_queue *VAR_0)
{
 struct mddev *VAR_1 = VAR_0->queuedata;
 struct r0conf *VAR_2 = VAR_1->private;
 struct md_rdev **VAR_3 = VAR_2->devlist;
 int VAR_4 = VAR_2->strip_zone[0].nb_dev;
 int VAR_5;

 for (VAR_5=0; VAR_5 < VAR_4; VAR_5++) {
  struct request_queue *VAR_6 = FUNC_0(VAR_3[VAR_5]->bdev);

  FUNC_1(VAR_6);
 }
}
