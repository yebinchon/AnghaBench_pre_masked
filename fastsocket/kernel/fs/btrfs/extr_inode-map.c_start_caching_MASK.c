
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct task_struct {int dummy; } ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_root {scalar_t__ cached; TYPE_1__ root_key; int cache_lock; int fs_info; struct btrfs_free_space_ctl* free_ino_ctl; } ;
struct btrfs_free_space_ctl {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct btrfs_free_space_ctl*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct btrfs_root*,scalar_t__*) ;
 int FUNC_4 (struct btrfs_root*,int ) ;
 int VAR_5 ;
 struct task_struct* FUNC_5 (int ,struct btrfs_root*,char*,int ) ;
 int FUNC_6 (int ,struct btrfs_root*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct btrfs_root *VAR_6)
{
 struct btrfs_free_space_ctl *VAR_7 = VAR_6->free_ino_ctl;
 struct task_struct *VAR_8;
 int VAR_9;
 u64 VAR_10;

 if (!FUNC_4(VAR_6, VAR_4))
  return;

 FUNC_7(&VAR_6->cache_lock);
 if (VAR_6->cached != VAR_1) {
  FUNC_8(&VAR_6->cache_lock);
  return;
 }

 VAR_6->cached = VAR_2;
 FUNC_8(&VAR_6->cache_lock);

 VAR_9 = FUNC_6(VAR_6->fs_info, VAR_6);
 if (VAR_9 == 1) {
  FUNC_7(&VAR_6->cache_lock);
  VAR_6->cached = VAR_0;
  FUNC_8(&VAR_6->cache_lock);
  return;
 }
 VAR_9 = FUNC_3(VAR_6, &VAR_10);
 if (!VAR_9 && VAR_10 <= VAR_3) {
  FUNC_2(VAR_7, VAR_10,
           VAR_3 - VAR_10 + 1);
 }

 VAR_8 = FUNC_5(VAR_5, VAR_6, "btrfs-ino-cache-%llu\n",
     VAR_6->root_key.objectid);
 FUNC_0(FUNC_1(VAR_8));
}
