
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {scalar_t__* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ type; scalar_t__ offset; } ;
struct btrfs_dir_item {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct btrfs_dir_item* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_key*,scalar_t__) ;
 struct btrfs_dir_item* FUNC_3 (struct btrfs_root*,struct btrfs_path*,char const*,int) ;
 int FUNC_4 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_5 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;

struct btrfs_dir_item *
FUNC_6(struct btrfs_root *VAR_1,
       struct btrfs_path *VAR_2, u64 VAR_3,
       const char *VAR_4, int VAR_5)
{
 struct extent_buffer *VAR_6;
 struct btrfs_dir_item *VAR_7;
 struct btrfs_key VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_8.objectid = VAR_3;
 VAR_8.type = VAR_0;
 VAR_8.offset = 0;

 VAR_10 = FUNC_5(((void*)0), VAR_1, &VAR_8, VAR_2, 0, 0);
 if (VAR_10 < 0)
  return FUNC_0(VAR_10);

 VAR_6 = VAR_2->nodes[0];
 VAR_9 = FUNC_1(VAR_6);

 while (1) {
  if (VAR_2->slots[0] >= VAR_9) {
   VAR_10 = FUNC_4(VAR_1, VAR_2);
   if (VAR_10 < 0)
    return FUNC_0(VAR_10);
   if (VAR_10 > 0)
    break;
   VAR_6 = VAR_2->nodes[0];
   VAR_9 = FUNC_1(VAR_6);
   continue;
  }

  FUNC_2(VAR_6, &VAR_8, VAR_2->slots[0]);
  if (VAR_8.objectid != VAR_3 || VAR_8.type != VAR_0)
   break;

  VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_4, VAR_5);
  if (VAR_7)
   return VAR_7;

  VAR_2->slots[0]++;
 }
 return ((void*)0);
}
