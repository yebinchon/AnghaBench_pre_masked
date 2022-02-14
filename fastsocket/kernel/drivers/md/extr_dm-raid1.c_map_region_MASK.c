
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror {TYPE_1__* dev; } ;
struct dm_io_region {int count; int sector; int bdev; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int bdev; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct mirror*,struct bio*) ;

__attribute__((used)) static void FUNC_2(struct dm_io_region *VAR_0, struct mirror *VAR_1,
         struct bio *VAR_2)
{
 VAR_0->bdev = VAR_1->dev->bdev;
 VAR_0->sector = FUNC_1(VAR_1, VAR_2);
 VAR_0->count = FUNC_0(VAR_2);
}
