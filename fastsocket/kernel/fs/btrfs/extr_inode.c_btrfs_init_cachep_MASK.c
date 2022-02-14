
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_transaction {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_inode {int dummy; } ;
struct btrfs_free_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int * VAR_8 ;
 void* FUNC_1 (char*,int,int ,int,int *) ;

int FUNC_2(void)
{
 VAR_4 = FUNC_1("btrfs_inode_cache",
   sizeof(struct btrfs_inode), 0,
   VAR_2 | VAR_1, VAR_8);
 if (!VAR_4)
  goto fail;

 VAR_6 = FUNC_1("btrfs_trans_handle_cache",
   sizeof(struct btrfs_trans_handle), 0,
   VAR_2 | VAR_1, ((void*)0));
 if (!VAR_6)
  goto fail;

 VAR_7 = FUNC_1("btrfs_transaction_cache",
   sizeof(struct btrfs_transaction), 0,
   VAR_2 | VAR_1, ((void*)0));
 if (!VAR_7)
  goto fail;

 VAR_5 = FUNC_1("btrfs_path_cache",
   sizeof(struct btrfs_path), 0,
   VAR_2 | VAR_1, ((void*)0));
 if (!VAR_5)
  goto fail;

 VAR_3 = FUNC_1("btrfs_free_space_cache",
   sizeof(struct btrfs_free_space), 0,
   VAR_2 | VAR_1, ((void*)0));
 if (!VAR_3)
  goto fail;

 return 0;
fail:
 FUNC_0();
 return -VAR_0;
}
