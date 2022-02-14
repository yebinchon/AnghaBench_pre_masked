
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {struct extent_buffer* node; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;
struct btrfs_map_token {int dummy; } ;
struct btrfs_item {int dummy; } ;
struct btrfs_disk_key {int dummy; } ;


 int FUNC_0 (struct btrfs_root*) ;
 int VAR_0 ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct extent_buffer*) ;
 scalar_t__ FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct btrfs_map_token*) ;
 int FUNC_4 (struct extent_buffer*,struct btrfs_disk_key*,int ) ;
 struct btrfs_item* FUNC_5 (struct extent_buffer*,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct extent_buffer*,int) ;
 scalar_t__ FUNC_8 (struct extent_buffer*,int) ;
 scalar_t__ FUNC_9 (struct extent_buffer*) ;
 int FUNC_10 (struct extent_buffer*) ;
 int FUNC_11 (struct extent_buffer*,int ) ;
 int FUNC_12 (struct extent_buffer*,int) ;
 int FUNC_13 (struct btrfs_path*) ;
 int FUNC_14 (struct extent_buffer*,struct btrfs_item*,int,struct btrfs_map_token*) ;
 int FUNC_15 (struct extent_buffer*,struct btrfs_item*,struct btrfs_map_token*) ;
 int FUNC_16 (struct btrfs_trans_handle*,struct btrfs_root*,struct extent_buffer*) ;
 int FUNC_17 (struct extent_buffer*) ;
 int FUNC_18 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_disk_key*,int) ;
 int FUNC_19 (struct extent_buffer*) ;
 int FUNC_20 (struct btrfs_root*,struct extent_buffer*) ;
 int FUNC_21 (struct extent_buffer*,int ,int) ;
 int FUNC_22 (struct extent_buffer*,scalar_t__,scalar_t__,int) ;
 int FUNC_23 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int,int,int,int) ;
 int FUNC_24 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int,int,int,int ) ;

int FUNC_25(struct btrfs_trans_handle *VAR_1, struct btrfs_root *VAR_2,
      struct btrfs_path *VAR_3, int VAR_4, int VAR_5)
{
 struct extent_buffer *VAR_6;
 struct btrfs_item *VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;
 u32 VAR_13;
 struct btrfs_map_token VAR_14;

 FUNC_3(&VAR_14);

 VAR_6 = VAR_3->nodes[0];
 VAR_8 = FUNC_7(VAR_6, VAR_4 + VAR_5 - 1);

 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
  VAR_9 += FUNC_8(VAR_6, VAR_4 + VAR_12);

 VAR_13 = FUNC_2(VAR_6);

 if (VAR_4 + VAR_5 != VAR_13) {
  int VAR_15 = FUNC_20(VAR_2, VAR_6);

  FUNC_22(VAR_6, FUNC_9(VAR_6) +
         VAR_15 + VAR_9,
         FUNC_9(VAR_6) + VAR_15,
         VAR_8 - VAR_15);

  for (VAR_12 = VAR_4 + VAR_5; VAR_12 < VAR_13; VAR_12++) {
   u32 VAR_16;

   VAR_7 = FUNC_5(VAR_6, VAR_12);
   VAR_16 = FUNC_15(VAR_6, VAR_7, &VAR_14);
   FUNC_14(VAR_6, VAR_7,
          VAR_16 + VAR_9, &VAR_14);
  }

  FUNC_22(VAR_6, FUNC_6(VAR_4),
         FUNC_6(VAR_4 + VAR_5),
         sizeof(struct btrfs_item) *
         (VAR_13 - VAR_4 - VAR_5));
 }
 FUNC_12(VAR_6, VAR_13 - VAR_5);
 VAR_13 -= VAR_5;


 if (VAR_13 == 0) {
  if (VAR_6 == VAR_2->node) {
   FUNC_11(VAR_6, 0);
  } else {
   FUNC_13(VAR_3);
   FUNC_16(VAR_1, VAR_2, VAR_6);
   FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6);
  }
 } else {
  int VAR_17 = FUNC_21(VAR_6, 0, VAR_13);
  if (VAR_4 == 0) {
   struct btrfs_disk_key VAR_18;

   FUNC_4(VAR_6, &VAR_18, 0);
   FUNC_18(VAR_1, VAR_2, VAR_3, &VAR_18, 1);
  }


  if (VAR_17 < FUNC_0(VAR_2) / 3) {




   VAR_4 = VAR_3->slots[1];
   FUNC_17(VAR_6);

   FUNC_13(VAR_3);
   VAR_11 = FUNC_23(VAR_1, VAR_2, VAR_3, 1, 1,
           1, (u32)-1);
   if (VAR_11 < 0 && VAR_11 != -VAR_0)
    VAR_10 = VAR_11;

   if (VAR_3->nodes[0] == VAR_6 &&
       FUNC_2(VAR_6)) {
    VAR_11 = FUNC_24(VAR_1, VAR_2, VAR_3, 1,
             1, 1, 0);
    if (VAR_11 < 0 && VAR_11 != -VAR_0)
     VAR_10 = VAR_11;
   }

   if (FUNC_2(VAR_6) == 0) {
    VAR_3->slots[1] = VAR_4;
    FUNC_1(VAR_1, VAR_2, VAR_3, VAR_6);
    FUNC_19(VAR_6);
    VAR_10 = 0;
   } else {





    if (VAR_3->nodes[0] == VAR_6)
     FUNC_10(VAR_6);
    FUNC_19(VAR_6);
   }
  } else {
   FUNC_10(VAR_6);
  }
 }
 return VAR_10;
}
