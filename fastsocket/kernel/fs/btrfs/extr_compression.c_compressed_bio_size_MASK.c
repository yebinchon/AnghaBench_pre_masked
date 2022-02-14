
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u16 ;
struct compressed_bio {int dummy; } ;
struct btrfs_root {unsigned long sectorsize; TYPE_1__* fs_info; } ;
struct TYPE_2__ {int super_copy; } ;


 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct btrfs_root *VAR_0,
          unsigned long VAR_1)
{
 u16 VAR_2 = FUNC_0(VAR_0->fs_info->super_copy);

 return sizeof(struct compressed_bio) +
  ((VAR_1 + VAR_0->sectorsize - 1) / VAR_0->sectorsize) *
  VAR_2;
}
