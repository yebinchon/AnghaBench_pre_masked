
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mdp_superblock_1 {unsigned long long super_offset; int sb_csum; int data_size; } ;
struct md_rdev {scalar_t__ data_offset; scalar_t__ new_data_offset; scalar_t__ sb_start; unsigned long long sectors; TYPE_3__* mddev; int sb_page; int sb_size; TYPE_2__* bdev; } ;
typedef unsigned long long sector_t ;
struct TYPE_5__ {scalar_t__ offset; } ;
struct TYPE_7__ {unsigned long long dev_sectors; TYPE_1__ bitmap_info; } ;
struct TYPE_6__ {int bd_inode; } ;


 int FUNC_0 (struct mdp_superblock_1*) ;
 int FUNC_1 (unsigned long long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,struct md_rdev*,unsigned long long,int ,int ) ;
 struct mdp_superblock_1* FUNC_5 (int ) ;

__attribute__((used)) static unsigned long long
FUNC_6(struct md_rdev *VAR_0, sector_t VAR_1)
{
 struct mdp_superblock_1 *VAR_2;
 sector_t VAR_3;
 if (VAR_1 && VAR_1 < VAR_0->mddev->dev_sectors)
  return 0;
 if (VAR_0->data_offset != VAR_0->new_data_offset)
  return 0;
 if (VAR_0->sb_start < VAR_0->data_offset) {

  VAR_3 = FUNC_2(VAR_0->bdev->bd_inode) >> 9;
  VAR_3 -= VAR_0->data_offset;
  if (!VAR_1 || VAR_1 > VAR_3)
   VAR_1 = VAR_3;
 } else if (VAR_0->mddev->bitmap_info.offset) {

  return 0;
 } else {

  sector_t VAR_4;
  VAR_4 = (FUNC_2(VAR_0->bdev->bd_inode) >> 9) - 8*2;
  VAR_4 &= ~(sector_t)(4*2 - 1);
  VAR_3 = VAR_0->sectors + VAR_4 - VAR_0->sb_start;
  if (!VAR_1 || VAR_1 > VAR_3)
   VAR_1 = VAR_3;
  VAR_0->sb_start = VAR_4;
 }
 VAR_2 = FUNC_5(VAR_0->sb_page);
 VAR_2->data_size = FUNC_1(VAR_1);
 VAR_2->super_offset = VAR_0->sb_start;
 VAR_2->sb_csum = FUNC_0(VAR_2);
 FUNC_4(VAR_0->mddev, VAR_0, VAR_0->sb_start, VAR_0->sb_size,
         VAR_0->sb_page);
 FUNC_3(VAR_0->mddev);
 return VAR_1;

}
