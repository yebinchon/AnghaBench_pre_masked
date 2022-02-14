
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int transid; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {struct extent_buffer** nodes; } ;
struct btrfs_key {int offset; int objectid; } ;
struct btrfs_disk_key {int dummy; } ;
struct btrfs_dir_item {int dummy; } ;
typedef int location ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_root*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct btrfs_dir_item*) ;
 int FUNC_3 (struct btrfs_dir_item*) ;
 int FUNC_4 (struct btrfs_disk_key*,struct btrfs_key*) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (char const*,scalar_t__) ;
 int FUNC_7 (struct extent_buffer*,struct btrfs_dir_item*,scalar_t__) ;
 int FUNC_8 (struct extent_buffer*,struct btrfs_dir_item*,struct btrfs_disk_key*) ;
 int FUNC_9 (struct extent_buffer*,struct btrfs_dir_item*,scalar_t__) ;
 int FUNC_10 (struct extent_buffer*,struct btrfs_dir_item*,int ) ;
 int FUNC_11 (struct extent_buffer*,struct btrfs_dir_item*,int ) ;
 int FUNC_12 (struct btrfs_key*,int ) ;
 struct btrfs_dir_item* FUNC_13 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*,struct btrfs_key*,scalar_t__,char const*,scalar_t__) ;
 int FUNC_14 (struct btrfs_key*,int ,int) ;
 int FUNC_15 (struct extent_buffer*,void const*,unsigned long,scalar_t__) ;

int FUNC_16(struct btrfs_trans_handle *VAR_2,
       struct btrfs_root *VAR_3,
       struct btrfs_path *VAR_4, u64 VAR_5,
       const char *VAR_6, u16 VAR_7,
       const void *VAR_8, u16 VAR_9)
{
 int VAR_10 = 0;
 struct btrfs_dir_item *VAR_11;
 unsigned long VAR_12, VAR_13;
 struct btrfs_key VAR_14, VAR_15;
 struct btrfs_disk_key VAR_16;
 struct extent_buffer *VAR_17;
 u32 VAR_18;

 FUNC_1(VAR_7 + VAR_9 > FUNC_0(VAR_3));

 VAR_14.objectid = VAR_5;
 FUNC_12(&VAR_14, VAR_1);
 VAR_14.offset = FUNC_6(VAR_6, VAR_7);

 VAR_18 = sizeof(*VAR_11) + VAR_7 + VAR_9;
 VAR_11 = FUNC_13(VAR_2, VAR_3, VAR_4, &VAR_14, VAR_18,
     VAR_6, VAR_7);
 if (FUNC_2(VAR_11))
  return FUNC_3(VAR_11);
 FUNC_14(&VAR_15, 0, sizeof(VAR_15));

 VAR_17 = VAR_4->nodes[0];
 FUNC_4(&VAR_16, &VAR_15);
 FUNC_8(VAR_17, VAR_11, &VAR_16);
 FUNC_11(VAR_17, VAR_11, VAR_0);
 FUNC_9(VAR_17, VAR_11, VAR_7);
 FUNC_10(VAR_17, VAR_11, VAR_2->transid);
 FUNC_7(VAR_17, VAR_11, VAR_9);
 VAR_12 = (unsigned long)(VAR_11 + 1);
 VAR_13 = (unsigned long)((char *)VAR_12 + VAR_7);

 FUNC_15(VAR_17, VAR_6, VAR_12, VAR_7);
 FUNC_15(VAR_17, VAR_8, VAR_13, VAR_9);
 FUNC_5(VAR_4->nodes[0]);

 return VAR_10;
}
