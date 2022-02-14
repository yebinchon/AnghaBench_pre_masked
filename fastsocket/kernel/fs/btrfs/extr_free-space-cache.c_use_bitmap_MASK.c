
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_free_space_ctl {int free_extents; int extents_thresh; struct btrfs_block_group_cache* private; } ;
struct btrfs_free_space {int bytes; } ;
struct TYPE_2__ {int offset; } ;
struct btrfs_block_group_cache {int sectorsize; TYPE_1__ key; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct btrfs_free_space_ctl *VAR_1,
        struct btrfs_free_space *VAR_2)
{
 struct btrfs_block_group_cache *VAR_3 = VAR_1->private;





 if (VAR_1->free_extents < VAR_1->extents_thresh) {







  if (VAR_2->bytes <= VAR_3->sectorsize * 4) {
   if (VAR_1->free_extents * 2 <= VAR_1->extents_thresh)
    return 0;
  } else {
   return 0;
  }
 }





 if (VAR_0 * VAR_3->sectorsize >
     VAR_3->key.offset)
  return 0;

 return 1;
}
