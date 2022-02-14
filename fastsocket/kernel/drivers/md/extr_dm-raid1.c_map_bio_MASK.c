
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror {TYPE_1__* dev; } ;
struct bio {int bi_sector; int bi_bdev; } ;
struct TYPE_2__ {int bdev; } ;


 int FUNC_0 (struct mirror*,struct bio*) ;

__attribute__((used)) static void FUNC_1(struct mirror *VAR_0, struct bio *VAR_1)
{
 VAR_1->bi_bdev = VAR_0->dev->bdev;
 VAR_1->bi_sector = FUNC_0(VAR_0, VAR_1);
}
