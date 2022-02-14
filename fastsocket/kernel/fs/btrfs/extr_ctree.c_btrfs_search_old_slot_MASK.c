
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int fs_info; } ;
struct btrfs_path {int lowest_level; int* slots; int leave_spinning; struct extent_buffer** nodes; void** locks; scalar_t__ search_commit_root; } ;
struct btrfs_key {int dummy; } ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_key*,int,int*) ;
 int FUNC_3 (struct btrfs_path*,struct extent_buffer*,void*) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (struct btrfs_path*) ;
 int FUNC_6 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_7 (struct btrfs_path*) ;
 int FUNC_8 (struct extent_buffer*) ;
 int FUNC_9 (struct extent_buffer*,void*) ;
 int FUNC_10 (struct extent_buffer*) ;
 int FUNC_11 (struct btrfs_path*,int) ;
 struct extent_buffer* FUNC_12 (struct btrfs_root*,int ) ;
 int FUNC_13 (int *,struct btrfs_root*,struct btrfs_path*,struct extent_buffer**,int,int,struct btrfs_key*,int ) ;
 struct extent_buffer* FUNC_14 (int ,struct extent_buffer*,int ) ;
 int FUNC_15 (struct btrfs_path*,int,int,int ,int *) ;

int FUNC_16(struct btrfs_root *VAR_2, struct btrfs_key *VAR_3,
     struct btrfs_path *VAR_4, u64 VAR_5)
{
 struct extent_buffer *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11 = 1;
 u8 VAR_12 = 0;

 VAR_12 = VAR_4->lowest_level;
 FUNC_1(VAR_4->nodes[0] != ((void*)0));

 if (VAR_4->search_commit_root) {
  FUNC_0(VAR_5);
  return FUNC_6(((void*)0), VAR_2, VAR_3, VAR_4, 0, 0);
 }

again:
 VAR_6 = FUNC_12(VAR_2, VAR_5);
 VAR_10 = FUNC_4(VAR_6);
 VAR_4->locks[VAR_10] = VAR_0;

 while (VAR_6) {
  VAR_10 = FUNC_4(VAR_6);
  VAR_4->nodes[VAR_10] = VAR_6;
  FUNC_3(VAR_4, ((void*)0), 0);







  FUNC_11(VAR_4, VAR_10 + 1);

  VAR_8 = FUNC_2(VAR_6, VAR_3, VAR_10, &VAR_7);

  if (VAR_10 != 0) {
   int VAR_13 = 0;
   if (VAR_8 && VAR_7 > 0) {
    VAR_13 = 1;
    VAR_7 -= 1;
   }
   VAR_4->slots[VAR_10] = VAR_7;
   FUNC_15(VAR_4, VAR_10, VAR_11, 0, ((void*)0));

   if (VAR_10 == VAR_12) {
    if (VAR_13)
     VAR_4->slots[VAR_10]++;
    goto done;
   }

   VAR_9 = FUNC_13(((void*)0), VAR_2, VAR_4, &VAR_6, VAR_10,
          VAR_7, VAR_3, VAR_5);
   if (VAR_9 == -VAR_1)
    goto again;
   if (VAR_9) {
    VAR_8 = VAR_9;
    goto done;
   }

   VAR_10 = FUNC_4(VAR_6);
   VAR_9 = FUNC_10(VAR_6);
   if (!VAR_9) {
    FUNC_7(VAR_4);
    FUNC_8(VAR_6);
    FUNC_3(VAR_4, VAR_6,
         VAR_0);
   }
   VAR_4->locks[VAR_10] = VAR_0;
   VAR_4->nodes[VAR_10] = VAR_6;
   VAR_6 = FUNC_14(VAR_2->fs_info, VAR_6, VAR_5);
   if (VAR_6 != VAR_4->nodes[VAR_10]) {
    FUNC_9(VAR_4->nodes[VAR_10],
           VAR_4->locks[VAR_10]);
    VAR_4->locks[VAR_10] = 0;
    VAR_4->nodes[VAR_10] = VAR_6;
   }
  } else {
   VAR_4->slots[VAR_10] = VAR_7;
   FUNC_15(VAR_4, VAR_10, VAR_11, 0, ((void*)0));
   goto done;
  }
 }
 VAR_8 = 1;
done:
 if (!VAR_4->leave_spinning)
  FUNC_7(VAR_4);
 if (VAR_8 < 0)
  FUNC_5(VAR_4);

 return VAR_8;
}
