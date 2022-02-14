
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int* slots; struct extent_buffer** nodes; } ;


 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,int,int,struct extent_buffer*,int,int,int) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct btrfs_trans_handle*,struct btrfs_root*,struct extent_buffer*,struct extent_buffer*,int,struct extent_buffer**) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct btrfs_root*,struct extent_buffer*) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct extent_buffer*) ;
 int FUNC_8 (struct extent_buffer*) ;
 struct extent_buffer* FUNC_9 (struct btrfs_root*,struct extent_buffer*,int) ;

__attribute__((used)) static int FUNC_10(struct btrfs_trans_handle *VAR_0, struct btrfs_root
      *VAR_1, struct btrfs_path *VAR_2,
      int VAR_3, int VAR_4,
      int VAR_5, u32 VAR_6)
{
 struct extent_buffer *VAR_7 = VAR_2->nodes[0];
 struct extent_buffer *VAR_8;
 struct extent_buffer *VAR_9;
 int VAR_10;
 int VAR_11;
 u32 VAR_12;
 int VAR_13;

 if (!VAR_2->nodes[1])
  return 1;

 VAR_10 = VAR_2->slots[1];
 VAR_9 = VAR_2->nodes[1];
 if (VAR_10 >= FUNC_3(VAR_9) - 1)
  return 1;

 FUNC_1(VAR_2->nodes[1]);

 VAR_8 = FUNC_9(VAR_1, VAR_9, VAR_10 + 1);
 if (VAR_8 == ((void*)0))
  return 1;

 FUNC_6(VAR_8);
 FUNC_5(VAR_8);

 VAR_11 = FUNC_4(VAR_1, VAR_8);
 if (VAR_11 < VAR_4)
  goto out_unlock;


 VAR_13 = FUNC_2(VAR_0, VAR_1, VAR_8, VAR_9,
         VAR_10 + 1, &VAR_8);
 if (VAR_13)
  goto out_unlock;

 VAR_11 = FUNC_4(VAR_1, VAR_8);
 if (VAR_11 < VAR_4)
  goto out_unlock;

 VAR_12 = FUNC_3(VAR_7);
 if (VAR_12 == 0)
  goto out_unlock;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5,
    VAR_8, VAR_11, VAR_12, VAR_6);
out_unlock:
 FUNC_7(VAR_8);
 FUNC_8(VAR_8);
 return 1;
}
