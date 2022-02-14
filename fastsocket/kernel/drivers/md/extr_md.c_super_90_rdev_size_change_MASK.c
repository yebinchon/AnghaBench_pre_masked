
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct md_rdev {unsigned long long sb_start; TYPE_2__* mddev; int sb_page; int sb_size; } ;
typedef unsigned long long sector_t ;
struct TYPE_4__ {scalar_t__ offset; } ;
struct TYPE_5__ {unsigned long long dev_sectors; int level; TYPE_1__ bitmap_info; } ;


 unsigned long long FUNC_0 (struct md_rdev*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,struct md_rdev*,unsigned long long,int ,int ) ;

__attribute__((used)) static unsigned long long
FUNC_3(struct md_rdev *VAR_0, sector_t VAR_1)
{
 if (VAR_1 && VAR_1 < VAR_0->mddev->dev_sectors)
  return 0;
 if (VAR_0->mddev->bitmap_info.offset)
  return 0;
 VAR_0->sb_start = FUNC_0(VAR_0);
 if (!VAR_1 || VAR_1 > VAR_0->sb_start)
  VAR_1 = VAR_0->sb_start;



 if (VAR_1 >= (2ULL << 32) && VAR_0->mddev->level >= 1)
  VAR_1 = (2ULL << 32) - 2;
 FUNC_2(VAR_0->mddev, VAR_0, VAR_0->sb_start, VAR_0->sb_size,
         VAR_0->sb_page);
 FUNC_1(VAR_0->mddev);
 return VAR_1;
}
