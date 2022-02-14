
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int reada; struct extent_buffer** nodes; } ;
struct btrfs_disk_key {int dummy; } ;


 scalar_t__ FUNC_0 (struct btrfs_disk_key*) ;
 struct extent_buffer* FUNC_1 (struct btrfs_root*,scalar_t__,int) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct btrfs_root*,int) ;
 scalar_t__ FUNC_4 (struct extent_buffer*,int) ;
 int FUNC_5 (struct extent_buffer*,struct btrfs_disk_key*,int) ;
 scalar_t__ FUNC_6 (struct extent_buffer*,int) ;
 int FUNC_7 (struct extent_buffer*) ;
 int FUNC_8 (struct btrfs_root*,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct btrfs_root *VAR_0,
        struct btrfs_path *VAR_1,
        int VAR_2, int VAR_3, u64 VAR_4)
{
 struct extent_buffer *VAR_5;
 struct btrfs_disk_key VAR_6;
 u32 VAR_7;
 u64 VAR_8;
 u64 VAR_9;
 u64 VAR_10 = 0;
 u64 VAR_11;
 int VAR_12 = VAR_1->reada;
 struct extent_buffer *VAR_13;
 u32 VAR_14;
 u32 VAR_15;
 u32 VAR_16 = 0;

 if (VAR_2 != 1)
  return;

 if (!VAR_1->nodes[VAR_2])
  return;

 VAR_5 = VAR_1->nodes[VAR_2];

 VAR_8 = FUNC_4(VAR_5, VAR_3);
 VAR_15 = FUNC_3(VAR_0, VAR_2 - 1);
 VAR_13 = FUNC_1(VAR_0, VAR_8, VAR_15);
 if (VAR_13) {
  FUNC_7(VAR_13);
  return;
 }

 VAR_9 = VAR_8;

 VAR_7 = FUNC_2(VAR_5);
 VAR_14 = VAR_3;

 while (1) {
  if (VAR_12 < 0) {
   if (VAR_14 == 0)
    break;
   VAR_14--;
  } else if (VAR_12 > 0) {
   VAR_14++;
   if (VAR_14 >= VAR_7)
    break;
  }
  if (VAR_1->reada < 0 && VAR_4) {
   FUNC_5(VAR_5, &VAR_6, VAR_14);
   if (FUNC_0(&VAR_6) != VAR_4)
    break;
  }
  VAR_8 = FUNC_4(VAR_5, VAR_14);
  if ((VAR_8 <= VAR_9 && VAR_9 - VAR_8 <= 65536) ||
      (VAR_8 > VAR_9 && VAR_8 - VAR_9 <= 65536)) {
   VAR_11 = FUNC_6(VAR_5, VAR_14);
   FUNC_8(VAR_0, VAR_8, VAR_15, VAR_11);
   VAR_10 += VAR_15;
  }
  VAR_16++;
  if ((VAR_10 > 65536 || VAR_16 > 32))
   break;
 }
}
