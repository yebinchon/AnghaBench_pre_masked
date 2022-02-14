
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flakey_c {TYPE_1__* dev; } ;
struct dm_target {struct flakey_c* private; } ;
struct bio {int bi_sector; int bi_bdev; } ;
struct TYPE_2__ {int bdev; } ;


 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct dm_target*,int ) ;

__attribute__((used)) static void FUNC_2(struct dm_target *VAR_0, struct bio *VAR_1)
{
 struct flakey_c *VAR_2 = VAR_0->private;

 VAR_1->bi_bdev = VAR_2->dev->bdev;
 if (FUNC_0(VAR_1))
  VAR_1->bi_sector = FUNC_1(VAR_0, VAR_1->bi_sector);
}
