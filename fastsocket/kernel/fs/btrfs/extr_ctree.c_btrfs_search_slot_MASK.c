
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {struct extent_buffer* commit_root; } ;
struct btrfs_path {int lowest_level; int* locks; int* slots; int leave_spinning; int search_for_split; struct extent_buffer** nodes; scalar_t__ skip_locking; scalar_t__ search_commit_root; scalar_t__ keep_locks; } ;
struct btrfs_key {int dummy; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_key*,int,int*) ;
 int FUNC_3 (struct btrfs_path*,struct extent_buffer*,void*) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*,struct extent_buffer*,struct extent_buffer*,int,struct extent_buffer**) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct btrfs_root*,struct extent_buffer*) ;
 struct extent_buffer* FUNC_7 (struct btrfs_root*) ;
 struct extent_buffer* FUNC_8 (struct btrfs_root*) ;
 int FUNC_9 (struct btrfs_path*) ;
 struct extent_buffer* FUNC_10 (struct btrfs_root*) ;
 int FUNC_11 (struct btrfs_path*) ;
 int FUNC_12 (struct extent_buffer*) ;
 int FUNC_13 (struct extent_buffer*) ;
 int FUNC_14 (struct extent_buffer*) ;
 int FUNC_15 (struct extent_buffer*) ;
 int FUNC_16 (struct extent_buffer*) ;
 int FUNC_17 (struct btrfs_path*,int) ;
 int FUNC_18 (struct extent_buffer*) ;
 int FUNC_19 (struct extent_buffer*) ;
 int FUNC_20 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct extent_buffer**,int,int,struct btrfs_key*,int ) ;
 int FUNC_21 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct extent_buffer*,int,int,int*) ;
 int FUNC_22 (struct btrfs_trans_handle*,struct btrfs_root*,struct extent_buffer*) ;
 int FUNC_23 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;
 int FUNC_24 (struct btrfs_path*,int,int,int,int*) ;

int FUNC_25(struct btrfs_trans_handle *VAR_4, struct btrfs_root
        *VAR_5, struct btrfs_key *VAR_6, struct btrfs_path *VAR_7, int
        VAR_8, int VAR_9)
{
 struct extent_buffer *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15 = 1;
 int VAR_16;

 int VAR_17 = 0;
 u8 VAR_18 = 0;
 int VAR_19;

 VAR_18 = VAR_7->lowest_level;
 FUNC_1(VAR_18 && VAR_8 > 0);
 FUNC_1(VAR_7->nodes[0] != ((void*)0));

 if (VAR_8 < 0) {
  VAR_15 = 2;





  VAR_17 = 2;
 } else if (VAR_8 > 0) {




  VAR_17 = 1;
 }

 if (!VAR_9)
  VAR_17 = -1;

 if (VAR_9 && (VAR_7->keep_locks || VAR_7->lowest_level))
  VAR_17 = VAR_0;

 VAR_19 = VAR_17;

again:



 VAR_16 = VAR_1;
 VAR_14 = 0;
 if (VAR_7->search_commit_root) {




  VAR_10 = VAR_5->commit_root;
  FUNC_18(VAR_10);
  VAR_14 = FUNC_5(VAR_10);
  if (!VAR_7->skip_locking)
   FUNC_13(VAR_10);
 } else {
  if (VAR_7->skip_locking) {
   VAR_10 = FUNC_10(VAR_5);
   VAR_14 = FUNC_5(VAR_10);
  } else {



   VAR_10 = FUNC_8(VAR_5);
   VAR_14 = FUNC_5(VAR_10);
   if (VAR_14 <= VAR_17) {

    FUNC_14(VAR_10);
    FUNC_19(VAR_10);
    VAR_10 = FUNC_7(VAR_5);
    VAR_16 = VAR_2;


    VAR_14 = FUNC_5(VAR_10);
   }
  }
 }
 VAR_7->nodes[VAR_14] = VAR_10;
 if (!VAR_7->skip_locking)
  VAR_7->locks[VAR_14] = VAR_16;

 while (VAR_10) {
  VAR_14 = FUNC_5(VAR_10);





  if (VAR_9) {





   if (!FUNC_22(VAR_4, VAR_5, VAR_10))
    goto cow_done;

   FUNC_11(VAR_7);





   if (VAR_14 + 1 > VAR_17) {
    VAR_17 = VAR_14 + 1;
    FUNC_9(VAR_7);
    goto again;
   }

   VAR_13 = FUNC_4(VAR_4, VAR_5, VAR_10,
           VAR_7->nodes[VAR_14 + 1],
           VAR_7->slots[VAR_14 + 1], &VAR_10);
   if (VAR_13) {
    VAR_12 = VAR_13;
    goto done;
   }
  }
cow_done:
  FUNC_0(!VAR_9 && VAR_8);

  VAR_7->nodes[VAR_14] = VAR_10;
  FUNC_3(VAR_7, ((void*)0), 0);
  if (!VAR_9)
   FUNC_17(VAR_7, VAR_14 + 1);

  VAR_12 = FUNC_2(VAR_10, VAR_6, VAR_14, &VAR_11);

  if (VAR_14 != 0) {
   int VAR_20 = 0;
   if (VAR_12 && VAR_11 > 0) {
    VAR_20 = 1;
    VAR_11 -= 1;
   }
   VAR_7->slots[VAR_14] = VAR_11;
   VAR_13 = FUNC_21(VAR_4, VAR_5, VAR_7, VAR_10, VAR_14,
          VAR_8, &VAR_17);
   if (VAR_13 == -VAR_3)
    goto again;
   if (VAR_13) {
    VAR_12 = VAR_13;
    goto done;
   }
   VAR_10 = VAR_7->nodes[VAR_14];
   VAR_11 = VAR_7->slots[VAR_14];







   if (VAR_11 == 0 && VAR_9 &&
       VAR_17 < VAR_14 + 1) {
    VAR_17 = VAR_14 + 1;
    FUNC_9(VAR_7);
    goto again;
   }

   FUNC_24(VAR_7, VAR_14, VAR_15,
      VAR_19, &VAR_17);

   if (VAR_14 == VAR_18) {
    if (VAR_20)
     VAR_7->slots[VAR_14]++;
    goto done;
   }

   VAR_13 = FUNC_20(VAR_4, VAR_5, VAR_7,
          &VAR_10, VAR_14, VAR_11, VAR_6, 0);
   if (VAR_13 == -VAR_3)
    goto again;
   if (VAR_13) {
    VAR_12 = VAR_13;
    goto done;
   }

   if (!VAR_7->skip_locking) {
    VAR_14 = FUNC_5(VAR_10);
    if (VAR_14 <= VAR_17) {
     VAR_13 = FUNC_16(VAR_10);
     if (!VAR_13) {
      FUNC_11(VAR_7);
      FUNC_12(VAR_10);
      FUNC_3(VAR_7, VAR_10,
          VAR_2);
     }
     VAR_7->locks[VAR_14] = VAR_2;
    } else {
     VAR_13 = FUNC_15(VAR_10);
     if (!VAR_13) {
      FUNC_11(VAR_7);
      FUNC_13(VAR_10);
      FUNC_3(VAR_7, VAR_10,
          VAR_1);
     }
     VAR_7->locks[VAR_14] = VAR_1;
    }
    VAR_7->nodes[VAR_14] = VAR_10;
   }
  } else {
   VAR_7->slots[VAR_14] = VAR_11;
   if (VAR_8 > 0 &&
       FUNC_6(VAR_5, VAR_10) < VAR_8) {
    if (VAR_17 < 1) {
     VAR_17 = 1;
     FUNC_9(VAR_7);
     goto again;
    }

    FUNC_11(VAR_7);
    VAR_13 = FUNC_23(VAR_4, VAR_5, VAR_6,
       VAR_7, VAR_8, VAR_12 == 0);
    FUNC_3(VAR_7, ((void*)0), 0);

    FUNC_0(VAR_13 > 0);
    if (VAR_13) {
     VAR_12 = VAR_13;
     goto done;
    }
   }
   if (!VAR_7->search_for_split)
    FUNC_24(VAR_7, VAR_14, VAR_15,
       VAR_19, &VAR_17);
   goto done;
  }
 }
 VAR_12 = 1;
done:




 if (!VAR_7->leave_spinning)
  FUNC_11(VAR_7);
 if (VAR_12 < 0)
  FUNC_9(VAR_7);
 return VAR_12;
}
