
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct extent_buffer {scalar_t__ start; } ;
struct btrfs_trans_handle {scalar_t__ transaction; scalar_t__ transid; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_disk_key {int dummy; } ;
struct TYPE_2__ {scalar_t__ running_transaction; scalar_t__ generation; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,struct extent_buffer*,struct extent_buffer*,int,struct extent_buffer**,scalar_t__,int ) ;
 int FUNC_2 (struct extent_buffer*,scalar_t__,int ) ;
 struct extent_buffer* FUNC_3 (struct btrfs_root*,scalar_t__,int) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct btrfs_root*,int) ;
 scalar_t__ FUNC_7 (struct extent_buffer*,int) ;
 int FUNC_8 (struct extent_buffer*,struct btrfs_disk_key*,int) ;
 scalar_t__ FUNC_9 (struct extent_buffer*,int) ;
 int FUNC_10 (struct extent_buffer*,scalar_t__) ;
 int FUNC_11 (struct extent_buffer*) ;
 int FUNC_12 (struct extent_buffer*) ;
 int FUNC_13 (struct extent_buffer*) ;
 int FUNC_14 (scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_15 (struct btrfs_disk_key*,struct btrfs_key*) ;
 int FUNC_16 (struct extent_buffer*) ;
 int FUNC_17 (int,int) ;
 struct extent_buffer* FUNC_18 (struct btrfs_root*,scalar_t__,int,scalar_t__) ;

int FUNC_19(struct btrfs_trans_handle *VAR_1,
         struct btrfs_root *VAR_2, struct extent_buffer *VAR_3,
         int VAR_4, int VAR_5, u64 *VAR_6,
         struct btrfs_key *VAR_7)
{
 struct extent_buffer *VAR_8;
 u64 VAR_9;
 u64 VAR_10;
 u64 VAR_11 = *VAR_6;
 u64 VAR_12 = 0;
 u64 VAR_13;
 u32 VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17 = 0;
 int VAR_18;
 int VAR_19;
 u32 VAR_20;
 int VAR_21 = 0;
 struct btrfs_disk_key VAR_22;

 VAR_18 = FUNC_4(VAR_3);
 if (VAR_5 && VAR_18 != 1)
  return 0;

 if (VAR_1->transaction != VAR_2->fs_info->running_transaction)
  FUNC_0(1);
 if (VAR_1->transid != VAR_2->fs_info->generation)
  FUNC_0(1);

 VAR_14 = FUNC_5(VAR_3);
 VAR_20 = FUNC_6(VAR_2, VAR_18 - 1);
 VAR_15 = VAR_14;

 if (VAR_14 == 1)
  return 0;

 FUNC_11(VAR_3);

 for (VAR_16 = VAR_4; VAR_16 < VAR_15; VAR_16++) {
  int VAR_23 = 1;

  FUNC_8(VAR_3, &VAR_22, VAR_16);
  if (!VAR_21 && FUNC_15(&VAR_22, VAR_7) < 0)
   continue;

  VAR_21 = 1;
  VAR_9 = FUNC_7(VAR_3, VAR_16);
  VAR_10 = FUNC_9(VAR_3, VAR_16);
  if (VAR_12 == 0)
   VAR_12 = VAR_9;

  if (VAR_16 > 0) {
   VAR_13 = FUNC_7(VAR_3, VAR_16 - 1);
   VAR_23 = FUNC_14(VAR_9, VAR_13, VAR_20);
  }
  if (!VAR_23 && VAR_16 < VAR_15 - 2) {
   VAR_13 = FUNC_7(VAR_3, VAR_16 + 1);
   VAR_23 = FUNC_14(VAR_9, VAR_13, VAR_20);
  }
  if (VAR_23) {
   VAR_12 = VAR_9;
   continue;
  }

  VAR_8 = FUNC_3(VAR_2, VAR_9, VAR_20);
  if (VAR_8)
   VAR_19 = FUNC_2(VAR_8, VAR_10, 0);
  else
   VAR_19 = 0;
  if (!VAR_8 || !VAR_19) {
   if (VAR_5) {
    FUNC_16(VAR_8);
    continue;
   }
   if (!VAR_8) {
    VAR_8 = FUNC_18(VAR_2, VAR_9,
        VAR_20, VAR_10);
    if (!VAR_8)
     return -VAR_0;
   } else if (!VAR_19) {
    VAR_17 = FUNC_10(VAR_8, VAR_10);
    if (VAR_17) {
     FUNC_16(VAR_8);
     return VAR_17;
    }
   }
  }
  if (VAR_11 == 0)
   VAR_11 = VAR_12;

  FUNC_12(VAR_8);
  FUNC_11(VAR_8);
  VAR_17 = FUNC_1(VAR_1, VAR_2, VAR_8, VAR_3, VAR_16,
     &VAR_8, VAR_11,
     FUNC_17(16 * VAR_20,
         (VAR_15 - VAR_16) * VAR_20));
  if (VAR_17) {
   FUNC_13(VAR_8);
   FUNC_16(VAR_8);
   break;
  }
  VAR_11 = VAR_8->start;
  VAR_12 = VAR_8->start;
  *VAR_6 = VAR_11;
  FUNC_13(VAR_8);
  FUNC_16(VAR_8);
 }
 return VAR_17;
}
