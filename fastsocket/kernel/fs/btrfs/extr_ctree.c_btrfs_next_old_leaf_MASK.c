
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int leave_spinning; int keep_locks; int* slots; int* locks; int skip_locking; struct extent_buffer** nodes; } ;
struct btrfs_key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btrfs_path*,struct extent_buffer*,int) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_3 (struct btrfs_path*) ;
 int FUNC_4 (struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,scalar_t__) ;
 int FUNC_5 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_6 (struct btrfs_path*) ;
 int FUNC_7 (struct extent_buffer*) ;
 int FUNC_8 (struct extent_buffer*,int) ;
 int FUNC_9 (struct extent_buffer*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct extent_buffer*) ;
 int FUNC_12 (int *,struct btrfs_root*,struct btrfs_path*,struct extent_buffer**,int,int,struct btrfs_key*,int ) ;
 int FUNC_13 (struct btrfs_path*,int ,int,int ,int *) ;

int FUNC_14(struct btrfs_root *VAR_3, struct btrfs_path *VAR_4,
   u64 VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct extent_buffer *VAR_8;
 struct extent_buffer *VAR_9;
 struct btrfs_key VAR_10;
 u32 VAR_11;
 int VAR_12;
 int VAR_13 = VAR_4->leave_spinning;
 int VAR_14 = 0;

 VAR_11 = FUNC_1(VAR_4->nodes[0]);
 if (VAR_11 == 0)
  return 1;

 FUNC_2(VAR_4->nodes[0], &VAR_10, VAR_11 - 1);
again:
 VAR_7 = 1;
 VAR_9 = ((void*)0);
 VAR_14 = 0;
 FUNC_3(VAR_4);

 VAR_4->keep_locks = 1;
 VAR_4->leave_spinning = 1;

 if (VAR_5)
  VAR_12 = FUNC_4(VAR_3, &VAR_10, VAR_4, VAR_5);
 else
  VAR_12 = FUNC_5(((void*)0), VAR_3, &VAR_10, VAR_4, 0, 0);
 VAR_4->keep_locks = 0;

 if (VAR_12 < 0)
  return VAR_12;

 VAR_11 = FUNC_1(VAR_4->nodes[0]);






 if (VAR_11 > 0 && VAR_4->slots[0] < VAR_11 - 1) {
  if (VAR_12 == 0)
   VAR_4->slots[0]++;
  VAR_12 = 0;
  goto done;
 }

 while (VAR_7 < VAR_0) {
  if (!VAR_4->nodes[VAR_7]) {
   VAR_12 = 1;
   goto done;
  }

  VAR_6 = VAR_4->slots[VAR_7] + 1;
  VAR_8 = VAR_4->nodes[VAR_7];
  if (VAR_6 >= FUNC_1(VAR_8)) {
   VAR_7++;
   if (VAR_7 == VAR_0) {
    VAR_12 = 1;
    goto done;
   }
   continue;
  }

  if (VAR_9) {
   FUNC_8(VAR_9, VAR_14);
   FUNC_11(VAR_9);
  }

  VAR_9 = VAR_8;
  VAR_14 = VAR_4->locks[VAR_7];
  VAR_12 = FUNC_12(((void*)0), VAR_3, VAR_4, &VAR_9, VAR_7,
         VAR_6, &VAR_10, 0);
  if (VAR_12 == -VAR_2)
   goto again;

  if (VAR_12 < 0) {
   FUNC_3(VAR_4);
   goto done;
  }

  if (!VAR_4->skip_locking) {
   VAR_12 = FUNC_9(VAR_9);
   if (!VAR_12 && VAR_5) {







    FUNC_3(VAR_4);
    FUNC_10();
    goto again;
   }
   if (!VAR_12) {
    FUNC_6(VAR_4);
    FUNC_7(VAR_9);
    FUNC_0(VAR_4, VAR_9,
         VAR_1);
   }
   VAR_14 = VAR_1;
  }
  break;
 }
 VAR_4->slots[VAR_7] = VAR_6;
 while (1) {
  VAR_7--;
  VAR_8 = VAR_4->nodes[VAR_7];
  if (VAR_4->locks[VAR_7])
   FUNC_8(VAR_8, VAR_4->locks[VAR_7]);

  FUNC_11(VAR_8);
  VAR_4->nodes[VAR_7] = VAR_9;
  VAR_4->slots[VAR_7] = 0;
  if (!VAR_4->skip_locking)
   VAR_4->locks[VAR_7] = VAR_14;
  if (!VAR_7)
   break;

  VAR_12 = FUNC_12(((void*)0), VAR_3, VAR_4, &VAR_9, VAR_7,
         0, &VAR_10, 0);
  if (VAR_12 == -VAR_2)
   goto again;

  if (VAR_12 < 0) {
   FUNC_3(VAR_4);
   goto done;
  }

  if (!VAR_4->skip_locking) {
   VAR_12 = FUNC_9(VAR_9);
   if (!VAR_12) {
    FUNC_6(VAR_4);
    FUNC_7(VAR_9);
    FUNC_0(VAR_4, VAR_9,
         VAR_1);
   }
   VAR_14 = VAR_1;
  }
 }
 VAR_12 = 0;
done:
 FUNC_13(VAR_4, 0, 1, 0, ((void*)0));
 VAR_4->leave_spinning = VAR_13;
 if (!VAR_13)
  FUNC_6(VAR_4);

 return VAR_12;
}
