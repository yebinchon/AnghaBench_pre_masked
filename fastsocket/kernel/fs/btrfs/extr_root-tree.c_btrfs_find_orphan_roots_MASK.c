
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int fs_info; } ;
struct btrfs_path {scalar_t__* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct btrfs_root*) ;
 int FUNC_1 (struct btrfs_root*) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (struct btrfs_root*,scalar_t__) ;
 int FUNC_4 (struct btrfs_path*) ;
 scalar_t__ FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct extent_buffer*,struct btrfs_key*,scalar_t__) ;
 int FUNC_7 (struct btrfs_root*,struct btrfs_path*) ;
 struct btrfs_root* FUNC_8 (int ,struct btrfs_key*) ;
 int FUNC_9 (struct btrfs_path*) ;
 int FUNC_10 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;

int FUNC_11(struct btrfs_root *VAR_5)
{
 struct extent_buffer *VAR_6;
 struct btrfs_path *VAR_7;
 struct btrfs_key VAR_8;
 struct btrfs_key VAR_9;
 struct btrfs_root *VAR_10;
 int VAR_11 = 0;
 int VAR_12;

 VAR_7 = FUNC_2();
 if (!VAR_7)
  return -VAR_4;

 VAR_8.objectid = VAR_1;
 VAR_8.type = VAR_0;
 VAR_8.offset = 0;

 VAR_9.type = VAR_2;
 VAR_9.offset = (u64)-1;

 while (1) {
  VAR_12 = FUNC_10(((void*)0), VAR_5, &VAR_8, VAR_7, 0, 0);
  if (VAR_12 < 0) {
   VAR_11 = VAR_12;
   break;
  }

  VAR_6 = VAR_7->nodes[0];
  if (VAR_7->slots[0] >= FUNC_5(VAR_6)) {
   VAR_12 = FUNC_7(VAR_5, VAR_7);
   if (VAR_12 < 0)
    VAR_11 = VAR_12;
   if (VAR_12 != 0)
    break;
   VAR_6 = VAR_7->nodes[0];
  }

  FUNC_6(VAR_6, &VAR_8, VAR_7->slots[0]);
  FUNC_9(VAR_7);

  if (VAR_8.objectid != VAR_1 ||
      VAR_8.type != VAR_0)
   break;

  VAR_9.objectid = VAR_8.offset;
  VAR_8.offset++;

  VAR_10 = FUNC_8(VAR_5->fs_info,
        &VAR_9);
  if (!FUNC_0(VAR_10))
   continue;

  VAR_12 = FUNC_1(VAR_10);
  if (VAR_12 != -VAR_3) {
   VAR_11 = VAR_12;
   break;
  }

  VAR_12 = FUNC_3(VAR_5, VAR_9.objectid);
  if (VAR_12) {
   VAR_11 = VAR_12;
   break;
  }
 }

 FUNC_4(VAR_7);
 return VAR_11;
}
