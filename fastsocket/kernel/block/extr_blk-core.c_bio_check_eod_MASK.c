
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio {int bi_sector; TYPE_1__* bi_bdev; } ;
typedef int sector_t ;
struct TYPE_2__ {int bd_inode; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct bio *VAR_0, unsigned int VAR_1)
{
 sector_t VAR_2;

 if (!VAR_1)
  return 0;


 VAR_2 = FUNC_1(VAR_0->bi_bdev->bd_inode) >> 9;
 if (VAR_2) {
  sector_t VAR_3 = VAR_0->bi_sector;

  if (VAR_2 < VAR_1 || VAR_2 - VAR_1 < VAR_3) {





   FUNC_0(VAR_0);
   return 1;
  }
 }

 return 0;
}
