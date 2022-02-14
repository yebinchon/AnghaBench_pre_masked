
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_c {TYPE_1__* origin_dev; } ;
struct bio {int bi_bdev; } ;
struct TYPE_2__ {int bdev; } ;



__attribute__((used)) static void FUNC_0(struct thin_c *VAR_0, struct bio *VAR_1)
{
 VAR_1->bi_bdev = VAR_0->origin_dev->bdev;
}
