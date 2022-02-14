
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int* slots; int lowest_level; struct extent_buffer** nodes; scalar_t__* locks; int keep_locks; } ;
struct btrfs_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct extent_buffer*,scalar_t__,int) ;
 struct extent_buffer* FUNC_2 (struct btrfs_root*,scalar_t__,int ) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_5 (struct btrfs_root*,int) ;
 scalar_t__ FUNC_6 (struct extent_buffer*,int) ;
 int FUNC_7 (struct extent_buffer*,struct btrfs_key*,int) ;
 scalar_t__ FUNC_8 (struct extent_buffer*,int) ;
 int FUNC_9 (struct btrfs_path*) ;
 int FUNC_10 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_11 (struct extent_buffer*) ;

int FUNC_12(struct btrfs_root *VAR_1, struct btrfs_path *VAR_2,
   struct btrfs_key *VAR_3, int VAR_4,
   int VAR_5, u64 VAR_6)
{
 int VAR_7;
 struct extent_buffer *VAR_8;

 FUNC_0(!VAR_2->keep_locks);
 while (VAR_4 < VAR_0) {
  if (!VAR_2->nodes[VAR_4])
   return 1;

  VAR_7 = VAR_2->slots[VAR_4] + 1;
  VAR_8 = VAR_2->nodes[VAR_4];
next:
  if (VAR_7 >= FUNC_3(VAR_8)) {
   int VAR_9;
   int VAR_10;
   struct btrfs_key VAR_11;
   if (VAR_4 + 1 >= VAR_0 ||
       !VAR_2->nodes[VAR_4 + 1])
    return 1;

   if (VAR_2->locks[VAR_4 + 1]) {
    VAR_4++;
    continue;
   }

   VAR_7 = FUNC_3(VAR_8) - 1;
   if (VAR_4 == 0)
    FUNC_4(VAR_8, &VAR_11, VAR_7);
   else
    FUNC_7(VAR_8, &VAR_11, VAR_7);

   VAR_10 = VAR_2->lowest_level;
   FUNC_9(VAR_2);
   VAR_2->lowest_level = VAR_4;
   VAR_9 = FUNC_10(((void*)0), VAR_1, &VAR_11, VAR_2,
      0, 0);
   VAR_2->lowest_level = VAR_10;
   if (VAR_9 < 0)
    return VAR_9;

   VAR_8 = VAR_2->nodes[VAR_4];
   VAR_7 = VAR_2->slots[VAR_4];
   if (VAR_9 == 0)
    VAR_7++;
   goto next;
  }

  if (VAR_4 == 0)
   FUNC_4(VAR_8, VAR_3, VAR_7);
  else {
   u64 VAR_12 = FUNC_6(VAR_8, VAR_7);
   u64 VAR_13 = FUNC_8(VAR_8, VAR_7);

   if (VAR_5) {
    struct extent_buffer *VAR_14;
    VAR_14 = FUNC_2(VAR_1, VAR_12,
         FUNC_5(VAR_1, VAR_4 - 1));
    if (!VAR_14 ||
        FUNC_1(VAR_14, VAR_13, 1) <= 0) {
     VAR_7++;
     if (VAR_14)
      FUNC_11(VAR_14);
     goto next;
    }
    FUNC_11(VAR_14);
   }
   if (VAR_13 < VAR_6) {
    VAR_7++;
    goto next;
   }
   FUNC_7(VAR_8, VAR_3, VAR_7);
  }
  return 0;
 }
 return 1;
}
