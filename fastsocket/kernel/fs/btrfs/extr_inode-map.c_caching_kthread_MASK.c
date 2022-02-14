
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int cache_progress; int highest_objectid; int fs_commit_mutex; int cache_wait; int cache_lock; int cached; struct btrfs_free_space_ctl* free_ino_ctl; struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {int skip_locking; int search_commit_root; int reada; int* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {int objectid; scalar_t__ type; scalar_t__ offset; } ;
struct btrfs_fs_info {int dummy; } ;
struct btrfs_free_space_ctl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_free_space_ctl*,int,int) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (struct btrfs_path*) ;
 scalar_t__ FUNC_4 (struct btrfs_fs_info*) ;
 int FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct extent_buffer*,struct btrfs_key*,int) ;
 int FUNC_7 (struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_8 (struct btrfs_path*) ;
 int FUNC_9 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_10 (struct btrfs_root*,int ) ;
 scalar_t__ FUNC_11 (struct btrfs_fs_info*) ;
 int FUNC_12 (struct btrfs_root*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(void *VAR_5)
{
 struct btrfs_root *VAR_6 = VAR_5;
 struct btrfs_fs_info *VAR_7 = VAR_6->fs_info;
 struct btrfs_free_space_ctl *VAR_8 = VAR_6->free_ino_ctl;
 struct btrfs_key VAR_9;
 struct btrfs_path *VAR_10;
 struct extent_buffer *VAR_11;
 u64 VAR_12 = (u64)-1;
 int VAR_13;
 int VAR_14;

 if (!FUNC_10(VAR_6, VAR_4))
  return 0;

 VAR_10 = FUNC_2();
 if (!VAR_10)
  return -VAR_3;


 VAR_10->skip_locking = 1;
 VAR_10->search_commit_root = 1;
 VAR_10->reada = 2;

 VAR_9.objectid = VAR_1;
 VAR_9.offset = 0;
 VAR_9.type = VAR_2;
again:

 FUNC_13(&VAR_6->fs_commit_mutex);

 VAR_14 = FUNC_9(((void*)0), VAR_6, &VAR_9, VAR_10, 0, 0);
 if (VAR_14 < 0)
  goto out;

 while (1) {
  if (FUNC_4(VAR_7))
   goto out;

  VAR_11 = VAR_10->nodes[0];
  VAR_13 = VAR_10->slots[0];
  if (VAR_13 >= FUNC_5(VAR_11)) {
   VAR_14 = FUNC_7(VAR_6, VAR_10);
   if (VAR_14 < 0)
    goto out;
   else if (VAR_14 > 0)
    break;

   if (FUNC_15() ||
       FUNC_11(VAR_7)) {
    VAR_11 = VAR_10->nodes[0];

    if (FUNC_5(VAR_11) == 0) {
     FUNC_0(1);
     break;
    }





    FUNC_6(VAR_11, &VAR_9, 0);
    FUNC_8(VAR_10);
    VAR_6->cache_progress = VAR_12;
    FUNC_14(&VAR_6->fs_commit_mutex);
    FUNC_16(1);
    goto again;
   } else
    continue;
  }

  FUNC_6(VAR_11, &VAR_9, VAR_13);

  if (VAR_9.type != VAR_2)
   goto next;

  if (VAR_9.objectid >= VAR_6->highest_objectid)
   break;

  if (VAR_12 != (u64)-1 && VAR_12 + 1 != VAR_9.objectid) {
   FUNC_1(VAR_8, VAR_12 + 1,
            VAR_9.objectid - VAR_12 - 1);
   FUNC_19(&VAR_6->cache_wait);
  }

  VAR_12 = VAR_9.objectid;
next:
  VAR_10->slots[0]++;
 }

 if (VAR_12 < VAR_6->highest_objectid - 1) {
  FUNC_1(VAR_8, VAR_12 + 1,
           VAR_6->highest_objectid - VAR_12 - 1);
 }

 FUNC_17(&VAR_6->cache_lock);
 VAR_6->cached = VAR_0;
 FUNC_18(&VAR_6->cache_lock);

 VAR_6->cache_progress = (u64)-1;
 FUNC_12(VAR_6);
out:
 FUNC_19(&VAR_6->cache_wait);
 FUNC_14(&VAR_6->fs_commit_mutex);

 FUNC_3(VAR_10);

 return VAR_14;
}
