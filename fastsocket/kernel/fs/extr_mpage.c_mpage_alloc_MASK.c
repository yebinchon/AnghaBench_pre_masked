
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct block_device {int dummy; } ;
struct bio {int bi_sector; struct block_device* bi_bdev; } ;
typedef int sector_t ;
typedef int gfp_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 struct bio* FUNC_0 (int ,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static struct bio *
FUNC_1(struct block_device *VAR_2,
  sector_t VAR_3, int VAR_4,
  gfp_t VAR_5)
{
 struct bio *VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_4);

 if (VAR_6 == ((void*)0) && (VAR_1->flags & VAR_0)) {
  while (!VAR_6 && (VAR_4 /= 2))
   VAR_6 = FUNC_0(VAR_5, VAR_4);
 }

 if (VAR_6) {
  VAR_6->bi_bdev = VAR_2;
  VAR_6->bi_sector = VAR_3;
 }
 return VAR_6;
}
