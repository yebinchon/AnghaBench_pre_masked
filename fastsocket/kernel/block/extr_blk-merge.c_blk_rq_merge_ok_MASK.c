
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {scalar_t__ rq_disk; scalar_t__ special; TYPE_1__* bio; } ;
struct bio {int bi_rw; TYPE_2__* bi_bdev; } ;
struct TYPE_4__ {scalar_t__ bd_disk; } ;
struct TYPE_3__ {int bi_rw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request*) ;
 int FUNC_5 (struct request*) ;

bool FUNC_6(struct request *VAR_1, struct bio *VAR_2)
{
 if (!FUNC_5(VAR_1) || !FUNC_2(VAR_2))
  return 0;


 if ((VAR_2->bi_rw & VAR_0) != (VAR_1->bio->bi_rw & VAR_0))
  return 0;


 if (FUNC_0(VAR_2) != FUNC_4(VAR_1))
  return 0;


 if (VAR_1->rq_disk != VAR_2->bi_bdev->bd_disk || VAR_1->special)
  return 0;


 if (FUNC_1(VAR_2) != FUNC_3(VAR_1))
  return 0;

 return 1;
}
