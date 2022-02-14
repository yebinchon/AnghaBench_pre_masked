
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ flushing; } ;
struct btrfs_transaction {TYPE_1__ delayed_refs; scalar_t__ blocked; } ;
struct btrfs_trans_handle {int delayed_ref_updates; struct btrfs_block_rsv* block_rsv; struct btrfs_transaction* transaction; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_block_rsv {int dummy; } ;


 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_root*,int) ;
 int FUNC_1 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_2 () ;

int FUNC_3(struct btrfs_trans_handle *VAR_0,
     struct btrfs_root *VAR_1)
{
 struct btrfs_transaction *VAR_2 = VAR_0->transaction;
 struct btrfs_block_rsv *VAR_3 = VAR_0->block_rsv;
 int VAR_4;
 int VAR_5;

 FUNC_2();
 if (VAR_2->blocked || VAR_2->delayed_refs.flushing)
  return 1;





 VAR_0->block_rsv = ((void*)0);

 VAR_4 = VAR_0->delayed_ref_updates;
 VAR_0->delayed_ref_updates = 0;
 if (VAR_4) {
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 VAR_0->block_rsv = VAR_3;

 return FUNC_1(VAR_0, VAR_1);
}
