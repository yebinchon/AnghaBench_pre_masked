
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_root {scalar_t__ cached; scalar_t__ cache_progress; scalar_t__ highest_objectid; int fs_commit_mutex; int cache_lock; struct btrfs_free_space_ctl* free_ino_pinned; struct btrfs_free_space_ctl* free_ino_ctl; } ;
struct btrfs_free_space_ctl {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_free_space_ctl*,scalar_t__,int) ;
 int FUNC_1 (struct btrfs_root*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct btrfs_root*) ;

void FUNC_7(struct btrfs_root *VAR_2, u64 VAR_3)
{
 struct btrfs_free_space_ctl *VAR_4 = VAR_2->free_ino_ctl;
 struct btrfs_free_space_ctl *VAR_5 = VAR_2->free_ino_pinned;

 if (!FUNC_1(VAR_2, VAR_1))
  return;

again:
 if (VAR_2->cached == VAR_0) {
  FUNC_0(VAR_4, VAR_3, 1);
 } else {
  FUNC_2(&VAR_2->fs_commit_mutex);
  FUNC_4(&VAR_2->cache_lock);
  if (VAR_2->cached == VAR_0) {
   FUNC_5(&VAR_2->cache_lock);
   FUNC_3(&VAR_2->fs_commit_mutex);
   goto again;
  }
  FUNC_5(&VAR_2->cache_lock);

  FUNC_6(VAR_2);

  if (VAR_3 <= VAR_2->cache_progress ||
      VAR_3 > VAR_2->highest_objectid)
   FUNC_0(VAR_4, VAR_3, 1);
  else
   FUNC_0(VAR_5, VAR_3, 1);

  FUNC_3(&VAR_2->fs_commit_mutex);
 }
}
