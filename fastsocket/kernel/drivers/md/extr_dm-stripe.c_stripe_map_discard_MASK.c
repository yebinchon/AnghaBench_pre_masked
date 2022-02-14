
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct stripe_c {TYPE_2__* stripe; } ;
struct bio {int bi_size; scalar_t__ bi_sector; int bi_bdev; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {scalar_t__ physical_start; TYPE_1__* dev; } ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*,int ) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct stripe_c*,scalar_t__,size_t,scalar_t__*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct stripe_c *VAR_2, struct bio *VAR_3,
         uint32_t VAR_4)
{
 sector_t VAR_5, VAR_6;

 FUNC_2(VAR_2, VAR_3->bi_sector, VAR_4, &VAR_5);
 FUNC_2(VAR_2, VAR_3->bi_sector + FUNC_1(VAR_3),
    VAR_4, &VAR_6);
 if (VAR_5 < VAR_6) {
  VAR_3->bi_bdev = VAR_2->stripe[VAR_4].dev->bdev;
  VAR_3->bi_sector = VAR_5 + VAR_2->stripe[VAR_4].physical_start;
  VAR_3->bi_size = FUNC_3(VAR_6 - VAR_5);
  return VAR_0;
 } else {

  FUNC_0(VAR_3, 0);
  return VAR_1;
 }
}
