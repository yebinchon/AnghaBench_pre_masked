
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_2__ {int offset; } ;
struct btrfs_block_group_cache {TYPE_1__ key; int item; } ;
struct btrfs_balance_args {int usage; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct btrfs_block_group_cache* FUNC_1 (struct btrfs_fs_info*,scalar_t__) ;
 int FUNC_2 (struct btrfs_block_group_cache*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct btrfs_fs_info *VAR_0, u64 VAR_1,
         struct btrfs_balance_args *VAR_2)
{
 struct btrfs_block_group_cache *VAR_3;
 u64 VAR_4, VAR_5;
 int VAR_6 = 1;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 VAR_4 = FUNC_0(&VAR_3->item);

 VAR_5 = FUNC_3(VAR_3->key.offset, VAR_2->usage);
 if (VAR_4 < VAR_5)
  VAR_6 = 0;

 FUNC_2(VAR_3);
 return VAR_6;
}
