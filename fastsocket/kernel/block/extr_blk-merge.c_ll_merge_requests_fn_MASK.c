
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int nr_phys_segments; TYPE_1__* biotail; TYPE_2__* bio; scalar_t__ special; } ;
struct TYPE_4__ {unsigned int bi_seg_front_size; } ;
struct TYPE_3__ {unsigned int bi_seg_back_size; } ;


 scalar_t__ FUNC_0 (struct request_queue*,TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (struct request_queue*) ;

__attribute__((used)) static int FUNC_4(struct request_queue *VAR_0, struct request *VAR_1,
    struct request *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4 =
  VAR_1->biotail->bi_seg_back_size + VAR_2->bio->bi_seg_front_size;





 if (VAR_1->special || VAR_2->special)
  return 0;




 if ((FUNC_2(VAR_1) + FUNC_2(VAR_2)) >
     FUNC_1(VAR_1))
  return 0;

 VAR_3 = VAR_1->nr_phys_segments + VAR_2->nr_phys_segments;
 if (FUNC_0(VAR_0, VAR_1->biotail, VAR_2->bio)) {
  if (VAR_1->nr_phys_segments == 1)
   VAR_1->bio->bi_seg_front_size = VAR_4;
  if (VAR_2->nr_phys_segments == 1)
   VAR_2->biotail->bi_seg_back_size = VAR_4;
  VAR_3--;
 }

 if (VAR_3 > FUNC_3(VAR_0))
  return 0;


 VAR_1->nr_phys_segments = VAR_3;
 return 1;
}
