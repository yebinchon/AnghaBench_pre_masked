
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {scalar_t__ reada; } ;
struct btrfs_key {int objectid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct extent_buffer*,int ,int) ;
 struct extent_buffer* FUNC_1 (struct btrfs_root*,int ,int ) ;
 int FUNC_2 (struct btrfs_root*,int) ;
 int FUNC_3 (struct extent_buffer*,int) ;
 int FUNC_4 (struct extent_buffer*,int) ;
 int FUNC_5 (struct btrfs_path*) ;
 int FUNC_6 (struct btrfs_path*) ;
 int FUNC_7 (struct btrfs_path*,int) ;
 int FUNC_8 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_9 (struct btrfs_root*,int ,int ,int ) ;
 int FUNC_10 (struct btrfs_root*,struct btrfs_path*,int,int,int ) ;

__attribute__((used)) static int
FUNC_11(struct btrfs_trans_handle *VAR_2,
         struct btrfs_root *VAR_3, struct btrfs_path *VAR_4,
         struct extent_buffer **VAR_5, int VAR_6, int VAR_7,
         struct btrfs_key *VAR_8, u64 VAR_9)
{
 u64 VAR_10;
 u64 VAR_11;
 u32 VAR_12;
 struct extent_buffer *VAR_13 = *VAR_5;
 struct extent_buffer *VAR_14;
 int VAR_15;

 VAR_10 = FUNC_3(VAR_13, VAR_7);
 VAR_11 = FUNC_4(VAR_13, VAR_7);
 VAR_12 = FUNC_2(VAR_3, VAR_6 - 1);

 VAR_14 = FUNC_1(VAR_3, VAR_10, VAR_12);
 if (VAR_14) {

  if (FUNC_0(VAR_14, 0, 1) > 0) {
   if (FUNC_0(VAR_14, VAR_11, 1) > 0) {





    *VAR_5 = VAR_14;
    return 0;
   }






   FUNC_8(VAR_14);
   FUNC_6(VAR_4);


   VAR_14 = FUNC_9(VAR_3, VAR_10, VAR_12, VAR_11);
   if (VAR_14 && FUNC_0(VAR_14, VAR_11, 0) > 0) {
    *VAR_5 = VAR_14;
    return 0;
   }
   FUNC_8(VAR_14);
   FUNC_5(VAR_4);
   return -VAR_1;
  }
 }
 FUNC_7(VAR_4, VAR_6 + 1);
 FUNC_6(VAR_4);

 FUNC_8(VAR_14);
 if (VAR_4->reada)
  FUNC_10(VAR_3, VAR_4, VAR_6, VAR_7, VAR_8->objectid);

 FUNC_5(VAR_4);

 VAR_15 = -VAR_0;
 VAR_14 = FUNC_9(VAR_3, VAR_10, VAR_12, 0);
 if (VAR_14) {






  if (!FUNC_0(VAR_14, 0, 0))
   VAR_15 = -VAR_1;
  FUNC_8(VAR_14);
 }
 return VAR_15;
}
