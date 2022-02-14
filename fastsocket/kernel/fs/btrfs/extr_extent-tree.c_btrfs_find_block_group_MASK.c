
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_root {int fs_info; } ;
struct TYPE_2__ {scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_block_group_cache {scalar_t__ pinned; scalar_t__ reserved; int lock; TYPE_1__ key; int ro; int item; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_block_group_cache*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 struct btrfs_block_group_cache* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct btrfs_block_group_cache*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

u64 FUNC_9(struct btrfs_root *VAR_1,
      u64 VAR_2, u64 VAR_3, int VAR_4)
{
 struct btrfs_block_group_cache *VAR_5;
 u64 VAR_6;
 u64 VAR_7 = FUNC_6(VAR_3, VAR_2);
 u64 VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 9;
 int VAR_11 = 0;
again:
 while (1) {
  VAR_5 = FUNC_2(VAR_1->fs_info, VAR_7);
  if (!VAR_5)
   break;

  FUNC_7(&VAR_5->lock);
  VAR_7 = VAR_5->key.objectid + VAR_5->key.offset;
  VAR_6 = FUNC_1(&VAR_5->item);

  if ((VAR_9 || !VAR_5->ro) &&
      FUNC_0(VAR_5, VAR_0)) {
   if (VAR_6 + VAR_5->pinned + VAR_5->reserved <
       FUNC_5(VAR_5->key.offset, VAR_10)) {
    VAR_8 = VAR_5->key.objectid;
    FUNC_8(&VAR_5->lock);
    FUNC_3(VAR_5);
    goto found;
   }
  }
  FUNC_8(&VAR_5->lock);
  FUNC_3(VAR_5);
  FUNC_4();
 }
 if (!VAR_11) {
  VAR_7 = VAR_2;
  VAR_11 = 1;
  goto again;
 }
 if (!VAR_9 && VAR_10 < 10) {
  VAR_7 = VAR_2;
  VAR_9 = 1;
  VAR_10 = 10;
  goto again;
 }
found:
 return VAR_8;
}
