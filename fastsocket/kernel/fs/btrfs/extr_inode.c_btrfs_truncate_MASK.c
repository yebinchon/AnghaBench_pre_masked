
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct inode {int i_size; scalar_t__ i_nlink; int i_mapping; } ;
struct btrfs_trans_handle {unsigned long blocks_used; struct btrfs_block_rsv* block_rsv; } ;
struct btrfs_root {int sectorsize; TYPE_1__* fs_info; struct btrfs_block_rsv* orphan_block_rsv; } ;
struct btrfs_block_rsv {int size; } ;
struct TYPE_4__ {int runtime_flags; struct btrfs_root* root; } ;
struct TYPE_3__ {struct btrfs_block_rsv trans_block_rsv; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_trans_handle*) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 struct btrfs_block_rsv* FUNC_5 (struct btrfs_root*) ;
 int FUNC_6 (struct btrfs_block_rsv*,struct btrfs_block_rsv*,int) ;
 int FUNC_7 (struct btrfs_root*,struct btrfs_block_rsv*,int) ;
 int FUNC_8 (struct btrfs_root*,unsigned long) ;
 int FUNC_9 (struct btrfs_root*,int) ;
 int FUNC_10 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_11 (struct btrfs_root*,struct btrfs_block_rsv*) ;
 int FUNC_12 (struct inode*,int,int *) ;
 int FUNC_13 (struct btrfs_trans_handle*,struct inode*) ;
 int FUNC_14 (struct btrfs_trans_handle*,struct inode*) ;
 struct btrfs_trans_handle* FUNC_15 (struct btrfs_root*,int) ;
 int FUNC_16 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*,int,int ) ;
 int FUNC_17 (int ,int) ;
 int FUNC_18 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_19 (struct inode*,int,int) ;
 scalar_t__ FUNC_20 (int ,int *) ;

__attribute__((used)) static int FUNC_21(struct inode *VAR_4)
{
 struct btrfs_root *VAR_5 = FUNC_0(VAR_4)->root;
 struct btrfs_block_rsv *VAR_6;
 int VAR_7;
 int VAR_8 = 0;
 struct btrfs_trans_handle *VAR_9;
 unsigned long VAR_10;
 u64 VAR_11 = VAR_5->sectorsize - 1;
 u64 VAR_12 = FUNC_9(VAR_5, 1);

 VAR_7 = FUNC_17(VAR_4->i_mapping, VAR_4->i_size);
 if (VAR_7)
  return VAR_7;

 FUNC_19(VAR_4, VAR_4->i_size & (~VAR_11), (u64)-1);
 FUNC_12(VAR_4, VAR_4->i_size, ((void*)0));
 VAR_6 = FUNC_5(VAR_5);
 if (!VAR_6)
  return -VAR_3;
 VAR_6->size = VAR_12;







 VAR_9 = FUNC_15(VAR_5, 4);
 if (FUNC_2(VAR_9)) {
  VAR_8 = FUNC_3(VAR_9);
  goto out;
 }


 VAR_7 = FUNC_6(&VAR_5->fs_info->trans_block_rsv, VAR_6,
          VAR_12);
 FUNC_1(VAR_7);

 VAR_7 = FUNC_13(VAR_9, VAR_4);
 if (VAR_7) {
  FUNC_10(VAR_9, VAR_5);
  goto out;
 }
 if (VAR_4->i_size == 0 && FUNC_20(VAR_1,
        &FUNC_0(VAR_4)->runtime_flags))
  FUNC_4(VAR_9, VAR_5, VAR_4);

 while (1) {
  VAR_7 = FUNC_7(VAR_5, VAR_6, VAR_12);
  if (VAR_7) {





   if (VAR_7 == -VAR_2)
    goto end_trans;
   VAR_8 = VAR_7;
   break;
  }

  if (!VAR_9) {

   VAR_9 = FUNC_15(VAR_5, 1);
   if (FUNC_2(VAR_9)) {
    VAR_7 = VAR_8 = FUNC_3(VAR_9);
    VAR_9 = ((void*)0);
    break;
   }
  }

  VAR_9->block_rsv = VAR_6;

  VAR_7 = FUNC_16(VAR_9, VAR_5, VAR_4,
       VAR_4->i_size,
       VAR_0);
  if (VAR_7 != -VAR_2) {
   VAR_8 = VAR_7;
   break;
  }

  VAR_9->block_rsv = &VAR_5->fs_info->trans_block_rsv;
  VAR_7 = FUNC_18(VAR_9, VAR_5, VAR_4);
  if (VAR_7) {
   VAR_8 = VAR_7;
   break;
  }
end_trans:
  VAR_10 = VAR_9->blocks_used;
  FUNC_10(VAR_9, VAR_5);
  VAR_9 = ((void*)0);
  FUNC_8(VAR_5, VAR_10);
 }

 if (VAR_7 == 0 && VAR_4->i_nlink > 0) {
  VAR_9->block_rsv = VAR_5->orphan_block_rsv;
  VAR_7 = FUNC_14(VAR_9, VAR_4);
  if (VAR_7)
   VAR_8 = VAR_7;
 } else if (VAR_7 && VAR_4->i_nlink > 0) {




  VAR_7 = FUNC_14(((void*)0), VAR_4);
 }

 if (VAR_9) {
  VAR_9->block_rsv = &VAR_5->fs_info->trans_block_rsv;
  VAR_7 = FUNC_18(VAR_9, VAR_5, VAR_4);
  if (VAR_7 && !VAR_8)
   VAR_8 = VAR_7;

  VAR_10 = VAR_9->blocks_used;
  VAR_7 = FUNC_10(VAR_9, VAR_5);
  FUNC_8(VAR_5, VAR_10);
 }

out:
 FUNC_11(VAR_5, VAR_6);

 if (VAR_7 && !VAR_8)
  VAR_8 = VAR_7;

 return VAR_8;
}
