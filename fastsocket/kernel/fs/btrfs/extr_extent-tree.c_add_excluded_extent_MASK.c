
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_2__ {int * freed_extents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct btrfs_root *VAR_2,
          u64 VAR_3, u64 VAR_4)
{
 u64 VAR_5 = VAR_3 + VAR_4 - 1;
 FUNC_0(&VAR_2->fs_info->freed_extents[0],
   VAR_3, VAR_5, VAR_0, VAR_1);
 FUNC_0(&VAR_2->fs_info->freed_extents[1],
   VAR_3, VAR_5, VAR_0, VAR_1);
 return 0;
}
