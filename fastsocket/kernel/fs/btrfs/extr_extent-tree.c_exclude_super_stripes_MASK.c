
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_4__ {scalar_t__ objectid; } ;
struct btrfs_block_group_cache {int bytes_super; TYPE_2__ key; } ;
struct TYPE_3__ {int mapping_tree; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_root*,scalar_t__,int) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__,int ,scalar_t__**,int*,int*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__*) ;

__attribute__((used)) static int FUNC_5(struct btrfs_root *VAR_2,
     struct btrfs_block_group_cache *VAR_3)
{
 u64 VAR_4;
 u64 *VAR_5;
 int VAR_6;
 int VAR_7, VAR_8, VAR_9;

 if (VAR_3->key.objectid < VAR_0) {
  VAR_6 = VAR_0 - VAR_3->key.objectid;
  VAR_3->bytes_super += VAR_6;
  VAR_9 = FUNC_1(VAR_2, VAR_3->key.objectid,
       VAR_6);
  FUNC_0(VAR_9);
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_4 = FUNC_3(VAR_7);
  VAR_9 = FUNC_2(&VAR_2->fs_info->mapping_tree,
           VAR_3->key.objectid, VAR_4,
           0, &VAR_5, &VAR_8, &VAR_6);
  FUNC_0(VAR_9);

  while (VAR_8--) {
   VAR_3->bytes_super += VAR_6;
   VAR_9 = FUNC_1(VAR_2, VAR_5[VAR_8],
        VAR_6);
   FUNC_0(VAR_9);
  }

  FUNC_4(VAR_5);
 }
 return 0;
}
