
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {scalar_t__ transid; } ;
struct btrfs_root {int fs_info; } ;
struct btrfs_key_ptr {int dummy; } ;


 int FUNC_0 (struct btrfs_root*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_buffer*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct extent_buffer*,int) ;
 int FUNC_7 (struct extent_buffer*,struct extent_buffer*,int ,int ,int) ;
 int FUNC_8 (struct extent_buffer*,int ,int ,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int ,struct extent_buffer*,struct extent_buffer*,int,int ,int) ;
 int FUNC_11 (int ,struct extent_buffer*,int ,int,int) ;

__attribute__((used)) static int FUNC_12(struct btrfs_trans_handle *VAR_0,
     struct btrfs_root *VAR_1, struct extent_buffer *VAR_2,
     struct extent_buffer *VAR_3, int VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 int VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_3(VAR_3);
 VAR_7 = FUNC_3(VAR_2);
 VAR_5 = FUNC_0(VAR_1) - VAR_7;
 FUNC_1(FUNC_2(VAR_3) != VAR_0->transid);
 FUNC_1(FUNC_2(VAR_2) != VAR_0->transid);

 if (!VAR_4 && VAR_6 <= 8)
  return 1;

 if (VAR_5 <= 0)
  return 1;

 if (VAR_4) {
  VAR_5 = FUNC_9(VAR_6, VAR_5);
  if (VAR_5 < VAR_6) {



   if (VAR_6 - VAR_5 < 8) {
    if (VAR_5 <= 8)
     return 1;
    VAR_5 -= 8;
   }
  }
 } else
  VAR_5 = FUNC_9(VAR_6 - 8, VAR_5);

 FUNC_10(VAR_1->fs_info, VAR_2, VAR_3, VAR_7, 0,
        VAR_5);
 FUNC_7(VAR_2, VAR_3,
      FUNC_5(VAR_7),
      FUNC_5(0),
      VAR_5 * sizeof(struct btrfs_key_ptr));

 if (VAR_5 < VAR_6) {
  FUNC_11(VAR_1->fs_info, VAR_3, 0, VAR_5,
         VAR_6 - VAR_5);
  FUNC_8(VAR_3, FUNC_5(0),
          FUNC_5(VAR_5),
          (VAR_6 - VAR_5) *
          sizeof(struct btrfs_key_ptr));
 }
 FUNC_6(VAR_3, VAR_6 - VAR_5);
 FUNC_6(VAR_2, VAR_7 + VAR_5);
 FUNC_4(VAR_3);
 FUNC_4(VAR_2);

 return VAR_8;
}
