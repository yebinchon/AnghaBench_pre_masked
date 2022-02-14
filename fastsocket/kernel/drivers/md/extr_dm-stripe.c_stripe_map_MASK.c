
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union map_info {unsigned int target_request_nr; } ;
typedef size_t uint32_t ;
struct stripe_c {unsigned int stripes; TYPE_2__* stripe; } ;
struct dm_target {struct stripe_c* private; } ;
struct bio {int bi_rw; int bi_bdev; int bi_sector; } ;
struct TYPE_4__ {TYPE_1__* dev; scalar_t__ physical_start; } ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct stripe_c*,struct bio*,unsigned int) ;
 int FUNC_2 (struct stripe_c*,int ,size_t*,int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct dm_target *VAR_3, struct bio *VAR_4,
        union map_info *VAR_5)
{
 struct stripe_c *VAR_6 = VAR_3->private;
 uint32_t VAR_7;
 unsigned VAR_8;

 if (VAR_4->bi_rw & VAR_1) {
  VAR_8 = VAR_5->target_request_nr;
  FUNC_0(VAR_8 >= VAR_6->stripes);
  VAR_4->bi_bdev = VAR_6->stripe[VAR_8].dev->bdev;
  return VAR_2;
 }
 if (FUNC_3(VAR_4->bi_rw & VAR_0)) {
  VAR_8 = VAR_5->target_request_nr;
  FUNC_0(VAR_8 >= VAR_6->stripes);
  return FUNC_1(VAR_6, VAR_4, VAR_8);
 }

 FUNC_2(VAR_6, VAR_4->bi_sector, &VAR_7, &VAR_4->bi_sector);

 VAR_4->bi_sector += VAR_6->stripe[VAR_7].physical_start;
 VAR_4->bi_bdev = VAR_6->stripe[VAR_7].dev->bdev;

 return VAR_2;
}
