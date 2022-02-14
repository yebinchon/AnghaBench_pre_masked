
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bitmap {TYPE_1__* mddev; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {scalar_t__ resync_max_sectors; } ;


 int FUNC_0 (struct bitmap*,scalar_t__,scalar_t__*,int ) ;

void FUNC_1(struct bitmap *VAR_0)
{




 sector_t VAR_1 = 0;
 sector_t VAR_2;
 if (!VAR_0)
  return;
 while (VAR_1 < VAR_0->mddev->resync_max_sectors) {
  FUNC_0(VAR_0, VAR_1, &VAR_2, 0);
  VAR_1 += VAR_2;
 }
}
