
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct inode_defrag {int root; int transid; int ino; } ;
struct inode {int dummy; } ;
struct btrfs_trans_handle {int transid; } ;
struct TYPE_4__ {int objectid; } ;
struct btrfs_root {TYPE_2__* fs_info; TYPE_1__ root_key; int last_trans; } ;
struct TYPE_6__ {int runtime_flags; struct btrfs_root* root; } ;
struct TYPE_5__ {int defrag_inodes_lock; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct inode*,struct inode_defrag*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct btrfs_root*,int ) ;
 int FUNC_5 (struct inode_defrag*) ;
 struct inode_defrag* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

int FUNC_10(struct btrfs_trans_handle *VAR_4,
      struct inode *VAR_5)
{
 struct btrfs_root *VAR_6 = FUNC_0(VAR_5)->root;
 struct inode_defrag *VAR_7;
 u64 VAR_8;

 if (!FUNC_4(VAR_6, VAR_0))
  return 0;

 if (FUNC_2(VAR_6->fs_info))
  return 0;

 if (FUNC_9(VAR_1, &FUNC_0(VAR_5)->runtime_flags))
  return 0;

 if (VAR_4)
  VAR_8 = VAR_4->transid;
 else
  VAR_8 = FUNC_0(VAR_5)->root->last_trans;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_2;

 VAR_7->ino = FUNC_3(VAR_5);
 VAR_7->transid = VAR_8;
 VAR_7->root = VAR_6->root_key.objectid;

 FUNC_7(&VAR_6->fs_info->defrag_inodes_lock);
 if (!FUNC_9(VAR_1, &FUNC_0(VAR_5)->runtime_flags))
  FUNC_1(VAR_5, VAR_7);
 else
  FUNC_5(VAR_7);
 FUNC_8(&VAR_6->fs_info->defrag_inodes_lock);
 return 0;
}
