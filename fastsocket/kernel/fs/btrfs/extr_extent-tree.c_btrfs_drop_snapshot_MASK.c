
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int objectid; } ;
struct btrfs_root_item {int drop_level; int drop_progress; } ;
struct walk_control {int* refs; int level; int shared_level; scalar_t__ stage; int update_ref; int for_reloc; TYPE_4__* fs_info; int commit_root; int node; scalar_t__ in_radix; TYPE_1__ root_key; int reada_count; scalar_t__ keep_locks; int * flags; int update_progress; struct btrfs_root_item root_item; } ;
struct btrfs_trans_handle {struct btrfs_block_rsv* block_rsv; } ;
struct btrfs_root {int* refs; int level; int shared_level; scalar_t__ stage; int update_ref; int for_reloc; TYPE_4__* fs_info; int commit_root; int node; scalar_t__ in_radix; TYPE_1__ root_key; int reada_count; scalar_t__ keep_locks; int * flags; int update_progress; struct btrfs_root_item root_item; } ;
struct btrfs_path {int lowest_level; scalar_t__* slots; TYPE_2__** nodes; int * locks; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_block_rsv {int dummy; } ;
struct TYPE_12__ {struct walk_control* tree_root; } ;
struct TYPE_11__ {int len; int start; } ;


 int VAR_0 ;
 int FUNC_0 (struct walk_control*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct walk_control*,int) ;
 struct btrfs_path* FUNC_6 () ;
 int FUNC_7 (struct btrfs_trans_handle*,struct walk_control*,int ) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct walk_control*,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (struct btrfs_key*,int *) ;
 int FUNC_11 (struct btrfs_trans_handle*,struct walk_control*) ;
 int FUNC_12 (struct walk_control*,int ,int *,int *) ;
 int FUNC_13 (TYPE_4__*,struct walk_control*) ;
 int FUNC_14 (struct btrfs_path*) ;
 int FUNC_15 (int ) ;
 TYPE_2__* FUNC_16 (struct walk_control*) ;
 int FUNC_17 (struct btrfs_trans_handle*,struct walk_control*,int ,int ,int*,int *) ;
 int FUNC_18 (TYPE_2__*,int *,scalar_t__) ;
 int FUNC_19 (struct btrfs_path*) ;
 int FUNC_20 (int *,struct walk_control*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_21 (TYPE_2__*) ;
 scalar_t__ FUNC_22 (struct btrfs_trans_handle*,struct walk_control*) ;
 struct btrfs_trans_handle* FUNC_23 (struct walk_control*,int ) ;
 int FUNC_24 (TYPE_4__*,int) ;
 int FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (struct btrfs_path*,int ) ;
 int FUNC_28 (struct btrfs_trans_handle*,struct walk_control*,TYPE_1__*,struct btrfs_root_item*) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (struct walk_control*) ;
 struct walk_control* FUNC_31 (int,int ) ;
 int FUNC_32 (int *,struct btrfs_key*,int) ;
 int FUNC_33 (int *,int ,int) ;
 int FUNC_34 (struct btrfs_trans_handle*,struct walk_control*,struct btrfs_path*,struct walk_control*) ;
 int FUNC_35 (struct btrfs_trans_handle*,struct walk_control*,struct btrfs_path*,struct walk_control*,int ) ;

int FUNC_36(struct btrfs_root *VAR_6,
    struct btrfs_block_rsv *VAR_7, int VAR_8,
    int VAR_9)
{
 struct btrfs_path *VAR_10;
 struct btrfs_trans_handle *VAR_11;
 struct btrfs_root *VAR_12 = VAR_6->fs_info->tree_root;
 struct btrfs_root_item *VAR_13 = &VAR_6->root_item;
 struct walk_control *VAR_14;
 struct btrfs_key VAR_15;
 int VAR_16 = 0;
 int VAR_17;
 int VAR_18;

 VAR_10 = FUNC_6();
 if (!VAR_10) {
  VAR_16 = -VAR_4;
  goto out;
 }

 VAR_14 = FUNC_31(sizeof(*VAR_14), VAR_5);
 if (!VAR_14) {
  FUNC_14(VAR_10);
  VAR_16 = -VAR_4;
  goto out;
 }

 VAR_11 = FUNC_23(VAR_12, 0);
 if (FUNC_2(VAR_11)) {
  VAR_16 = FUNC_3(VAR_11);
  goto out_free;
 }

 if (VAR_7)
  VAR_11->block_rsv = VAR_7;

 if (FUNC_9(&VAR_13->drop_progress) == 0) {
  VAR_18 = FUNC_15(VAR_6->node);
  VAR_10->nodes[VAR_18] = FUNC_16(VAR_6);
  FUNC_21(VAR_10->nodes[VAR_18]);
  VAR_10->slots[VAR_18] = 0;
  VAR_10->locks[VAR_18] = VAR_2;
  FUNC_33(&VAR_14->update_progress, 0,
         sizeof(VAR_14->update_progress));
 } else {
  FUNC_10(&VAR_15, &VAR_13->drop_progress);
  FUNC_32(&VAR_14->update_progress, &VAR_15,
         sizeof(VAR_14->update_progress));

  VAR_18 = VAR_13->drop_level;
  FUNC_1(VAR_18 == 0);
  VAR_10->lowest_level = VAR_18;
  VAR_17 = FUNC_20(((void*)0), VAR_6, &VAR_15, VAR_10, 0, 0);
  VAR_10->lowest_level = 0;
  if (VAR_17 < 0) {
   VAR_16 = VAR_17;
   goto out_end_trans;
  }
  FUNC_4(VAR_17 > 0);





  FUNC_27(VAR_10, 0);

  VAR_18 = FUNC_15(VAR_6->node);
  while (1) {
   FUNC_25(VAR_10->nodes[VAR_18]);
   FUNC_21(VAR_10->nodes[VAR_18]);

   VAR_17 = FUNC_17(VAR_11, VAR_6,
      VAR_10->nodes[VAR_18]->start,
      VAR_10->nodes[VAR_18]->len,
      &VAR_14->refs[VAR_18],
      &VAR_14->flags[VAR_18]);
   if (VAR_17 < 0) {
    VAR_16 = VAR_17;
    goto out_end_trans;
   }
   FUNC_1(VAR_14->refs[VAR_18] == 0);

   if (VAR_18 == VAR_13->drop_level)
    break;

   FUNC_26(VAR_10->nodes[VAR_18]);
   FUNC_4(VAR_14->refs[VAR_18] != 1);
   VAR_18--;
  }
 }

 VAR_14->level = VAR_18;
 VAR_14->shared_level = -1;
 VAR_14->stage = VAR_3;
 VAR_14->update_ref = VAR_8;
 VAR_14->keep_locks = 0;
 VAR_14->for_reloc = VAR_9;
 VAR_14->reada_count = FUNC_0(VAR_6);

 while (1) {
  VAR_17 = FUNC_34(VAR_11, VAR_6, VAR_10, VAR_14);
  if (VAR_17 < 0) {
   VAR_16 = VAR_17;
   break;
  }

  VAR_17 = FUNC_35(VAR_11, VAR_6, VAR_10, VAR_14, VAR_0);
  if (VAR_17 < 0) {
   VAR_16 = VAR_17;
   break;
  }

  if (VAR_17 > 0) {
   FUNC_1(VAR_14->stage != VAR_3);
   break;
  }

  if (VAR_14->stage == VAR_3) {
   VAR_18 = VAR_14->level;
   FUNC_18(VAR_10->nodes[VAR_18],
           &VAR_13->drop_progress,
           VAR_10->slots[VAR_18]);
   VAR_13->drop_level = VAR_18;
  }

  FUNC_1(VAR_14->level == 0);
  if (FUNC_22(VAR_11, VAR_12)) {
   VAR_17 = FUNC_28(VAR_11, VAR_12,
      &VAR_6->root_key,
      VAR_13);
   if (VAR_17) {
    FUNC_5(VAR_11, VAR_12, VAR_17);
    VAR_16 = VAR_17;
    goto out_end_trans;
   }

   FUNC_11(VAR_11, VAR_12);
   VAR_11 = FUNC_23(VAR_12, 0);
   if (FUNC_2(VAR_11)) {
    VAR_16 = FUNC_3(VAR_11);
    goto out_free;
   }
   if (VAR_7)
    VAR_11->block_rsv = VAR_7;
  }
 }
 FUNC_19(VAR_10);
 if (VAR_16)
  goto out_end_trans;

 VAR_17 = FUNC_8(VAR_11, VAR_12, &VAR_6->root_key);
 if (VAR_17) {
  FUNC_5(VAR_11, VAR_12, VAR_17);
  goto out_end_trans;
 }

 if (VAR_6->root_key.objectid != VAR_1) {
  VAR_17 = FUNC_12(VAR_12, VAR_6->root_key.objectid,
        ((void*)0), ((void*)0));
  if (VAR_17 < 0) {
   FUNC_5(VAR_11, VAR_12, VAR_17);
   VAR_16 = VAR_17;
   goto out_end_trans;
  } else if (VAR_17 > 0) {





   FUNC_7(VAR_11, VAR_12,
           VAR_6->root_key.objectid);
  }
 }

 if (VAR_6->in_radix) {
  FUNC_13(VAR_12->fs_info, VAR_6);
 } else {
  FUNC_29(VAR_6->node);
  FUNC_29(VAR_6->commit_root);
  FUNC_30(VAR_6);
 }
out_end_trans:
 FUNC_11(VAR_11, VAR_12);
out_free:
 FUNC_30(VAR_14);
 FUNC_14(VAR_10);
out:
 if (VAR_16)
  FUNC_24(VAR_6->fs_info, VAR_16);
 return VAR_16;
}
