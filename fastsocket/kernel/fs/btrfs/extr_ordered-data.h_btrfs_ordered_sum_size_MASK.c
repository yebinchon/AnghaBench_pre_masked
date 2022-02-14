
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_sector_sum {int dummy; } ;
struct btrfs_root {unsigned long sectorsize; } ;
struct btrfs_ordered_sum {int dummy; } ;



__attribute__((used)) static inline int FUNC_0(struct btrfs_root *VAR_0,
      unsigned long VAR_1)
{
 unsigned long VAR_2 = (VAR_1 + VAR_0->sectorsize - 1) /
  VAR_0->sectorsize;
 VAR_2++;
 return sizeof(struct btrfs_ordered_sum) +
  VAR_2 * sizeof(struct btrfs_sector_sum);
}
