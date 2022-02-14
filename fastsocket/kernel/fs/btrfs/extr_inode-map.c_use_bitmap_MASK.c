
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_free_space_ctl {scalar_t__ free_extents; scalar_t__ extents_thresh; } ;
struct btrfs_free_space {int bytes; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct btrfs_free_space_ctl *VAR_1,
         struct btrfs_free_space *VAR_2)
{
 if (VAR_1->free_extents < VAR_1->extents_thresh ||
     VAR_2->bytes > VAR_0 / 10)
  return 0;

 return 1;
}
