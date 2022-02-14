
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ulist {int dummy; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int node; } ;
struct btrfs_path {int search_commit_root; int lowest_level; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ offset; int type; scalar_t__ objectid; } ;
struct btrfs_fs_info {int dummy; } ;
struct TYPE_3__ {scalar_t__ offset; int type; scalar_t__ objectid; } ;
struct __prelim_ref {int level; int wanted_disk_byte; TYPE_1__ key_for_search; int count; scalar_t__ root_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct btrfs_root*) ;
 int FUNC_1 (struct btrfs_root*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct btrfs_root*,struct btrfs_path*,struct ulist*,int,TYPE_1__*,scalar_t__,int ,scalar_t__ const*) ;
 struct btrfs_path* FUNC_4 () ;
 int FUNC_5 (struct btrfs_path*) ;
 int FUNC_6 (int ) ;
 struct btrfs_root* FUNC_7 (struct btrfs_fs_info*,struct btrfs_key*) ;
 int FUNC_8 (struct btrfs_root*,TYPE_1__*,struct btrfs_path*,scalar_t__) ;
 int FUNC_9 (char*,unsigned long long,int,int ,int,unsigned long long,int ,unsigned long long) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static int FUNC_12(struct btrfs_fs_info *VAR_2,
     int VAR_3,
     u64 VAR_4,
     struct __prelim_ref *VAR_5,
     struct ulist *VAR_6,
     const u64 *VAR_7)
{
 struct btrfs_path *VAR_8;
 struct btrfs_root *VAR_9;
 struct btrfs_key VAR_10;
 struct extent_buffer *VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14 = VAR_5->level;

 VAR_8 = FUNC_4();
 if (!VAR_8)
  return -VAR_1;
 VAR_8->search_commit_root = !!VAR_3;

 VAR_10.objectid = VAR_5->root_id;
 VAR_10.type = VAR_0;
 VAR_10.offset = (u64)-1;
 VAR_9 = FUNC_7(VAR_2, &VAR_10);
 if (FUNC_0(VAR_9)) {
  VAR_12 = FUNC_1(VAR_9);
  goto out;
 }

 FUNC_10();
 VAR_13 = FUNC_6(VAR_9->node);
 FUNC_11();

 if (VAR_13 + 1 == VAR_14)
  goto out;

 VAR_8->lowest_level = VAR_14;
 VAR_12 = FUNC_8(VAR_9, &VAR_5->key_for_search, VAR_8, VAR_4);
 FUNC_9("search slot in root %llu (level %d, ref count %d) returned "
   "%d for key (%llu %u %llu)\n",
   (unsigned long long)VAR_5->root_id, VAR_14, VAR_5->count, VAR_12,
   (unsigned long long)VAR_5->key_for_search.objectid,
   VAR_5->key_for_search.type,
   (unsigned long long)VAR_5->key_for_search.offset);
 if (VAR_12 < 0)
  goto out;

 VAR_11 = VAR_8->nodes[VAR_14];
 while (!VAR_11) {
  if (!VAR_14) {
   FUNC_2(1);
   VAR_12 = 1;
   goto out;
  }
  VAR_14--;
  VAR_11 = VAR_8->nodes[VAR_14];
 }

 VAR_12 = FUNC_3(VAR_9, VAR_8, VAR_6, VAR_14, &VAR_5->key_for_search,
    VAR_4, VAR_5->wanted_disk_byte,
    VAR_7);
out:
 FUNC_5(VAR_8);
 return VAR_12;
}
