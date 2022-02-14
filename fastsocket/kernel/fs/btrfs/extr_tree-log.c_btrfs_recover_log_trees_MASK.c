
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct walk_control {scalar_t__ stage; int pin; int process_func; struct btrfs_trans_handle* replay_dest; struct btrfs_trans_handle* trans; } ;
struct btrfs_trans_handle {struct btrfs_trans_handle* log_root; int node; int commit_root; struct btrfs_fs_info* fs_info; } ;
struct btrfs_root {struct btrfs_root* log_root; int node; int commit_root; struct btrfs_fs_info* fs_info; } ;
struct btrfs_path {scalar_t__* slots; int * nodes; } ;
struct btrfs_key {scalar_t__ objectid; scalar_t__ offset; int type; } ;
struct btrfs_fs_info {int log_root_recovering; int tree_root; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 struct btrfs_path* FUNC_3 () ;
 int FUNC_4 (struct btrfs_trans_handle*,int ) ;
 int FUNC_5 (struct btrfs_fs_info*,int,char*) ;
 int FUNC_6 (struct btrfs_path*) ;
 int FUNC_7 (int ,struct btrfs_key*,scalar_t__) ;
 struct btrfs_trans_handle* FUNC_8 (struct btrfs_fs_info*,struct btrfs_key*) ;
 struct btrfs_trans_handle* FUNC_9 (struct btrfs_trans_handle*,struct btrfs_key*) ;
 int FUNC_10 (struct btrfs_trans_handle*,struct btrfs_trans_handle*) ;
 int FUNC_11 (struct btrfs_path*) ;
 int FUNC_12 (int *,struct btrfs_trans_handle*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_13 (struct btrfs_key*,int ) ;
 struct btrfs_trans_handle* FUNC_14 (int ,int ) ;
 int FUNC_15 (struct btrfs_trans_handle*,struct btrfs_trans_handle*,struct btrfs_path*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct btrfs_trans_handle*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_18 (struct btrfs_trans_handle*,struct btrfs_trans_handle*,struct walk_control*) ;

int FUNC_19(struct btrfs_root *VAR_7)
{
 int VAR_8;
 struct btrfs_path *VAR_9;
 struct btrfs_trans_handle *VAR_10;
 struct btrfs_key VAR_11;
 struct btrfs_key VAR_12;
 struct btrfs_key VAR_13;
 struct btrfs_root *VAR_14;
 struct btrfs_fs_info *VAR_15 = VAR_7->fs_info;
 struct walk_control VAR_16 = {
  .process_func = VAR_5,
  .stage = 0,
 };

 VAR_9 = FUNC_3();
 if (!VAR_9)
  return -VAR_2;

 VAR_15->log_root_recovering = 1;

 VAR_10 = FUNC_14(VAR_15->tree_root, 0);
 if (FUNC_1(VAR_10)) {
  VAR_8 = FUNC_2(VAR_10);
  goto error;
 }

 VAR_16.trans = VAR_10;
 VAR_16.pin = 1;

 VAR_8 = FUNC_18(VAR_10, VAR_7, &VAR_16);
 if (VAR_8) {
  FUNC_5(VAR_15, VAR_8, "Failed to pin buffers while "
       "recovering log root tree.");
  goto error;
 }

again:
 VAR_11.objectid = VAR_1;
 VAR_11.offset = (u64)-1;
 FUNC_13(&VAR_11, VAR_0);

 while (1) {
  VAR_8 = FUNC_12(((void*)0), VAR_7, &VAR_11, VAR_9, 0, 0);

  if (VAR_8 < 0) {
   FUNC_5(VAR_15, VAR_8,
        "Couldn't find tree log root.");
   goto error;
  }
  if (VAR_8 > 0) {
   if (VAR_9->slots[0] == 0)
    break;
   VAR_9->slots[0]--;
  }
  FUNC_7(VAR_9->nodes[0], &VAR_12,
          VAR_9->slots[0]);
  FUNC_11(VAR_9);
  if (VAR_12.objectid != VAR_1)
   break;

  VAR_14 = FUNC_9(VAR_7,
        &VAR_12);
  if (FUNC_1(VAR_14)) {
   VAR_8 = FUNC_2(VAR_14);
   FUNC_5(VAR_15, VAR_8,
        "Couldn't read tree log root.");
   goto error;
  }

  VAR_13.objectid = VAR_12.offset;
  VAR_13.type = VAR_0;
  VAR_13.offset = (u64)-1;

  VAR_16.replay_dest = FUNC_8(VAR_15, &VAR_13);
  if (FUNC_1(VAR_16.replay_dest)) {
   VAR_8 = FUNC_2(VAR_16.replay_dest);
   FUNC_5(VAR_15, VAR_8, "Couldn't read target root "
        "for tree log recovery.");
   goto error;
  }

  VAR_16.replay_dest->log_root = VAR_14;
  FUNC_10(VAR_10, VAR_16.replay_dest);
  VAR_8 = FUNC_18(VAR_10, VAR_14, &VAR_16);
  FUNC_0(VAR_8);

  if (VAR_16.stage == VAR_3) {
   VAR_8 = FUNC_15(VAR_10, VAR_16.replay_dest,
            VAR_9);
   FUNC_0(VAR_8);
  }

  VAR_11.offset = VAR_12.offset - 1;
  VAR_16.replay_dest->log_root = ((void*)0);
  FUNC_16(VAR_14->node);
  FUNC_16(VAR_14->commit_root);
  FUNC_17(VAR_14);

  if (VAR_12.offset == 0)
   break;
 }
 FUNC_11(VAR_9);


 if (VAR_16.pin) {
  VAR_16.pin = 0;
  VAR_16.process_func = VAR_6;
  VAR_16.stage = VAR_4;
  goto again;
 }

 if (VAR_16.stage < VAR_3) {
  VAR_16.stage++;
  goto again;
 }

 FUNC_6(VAR_9);

 FUNC_16(VAR_7->node);
 VAR_7->log_root = ((void*)0);
 VAR_15->log_root_recovering = 0;


 FUNC_4(VAR_10, VAR_15->tree_root);

 FUNC_17(VAR_7);
 return 0;

error:
 FUNC_6(VAR_9);
 return VAR_8;
}
