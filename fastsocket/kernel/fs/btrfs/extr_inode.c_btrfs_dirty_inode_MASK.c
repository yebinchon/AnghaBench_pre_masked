
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct TYPE_2__ {scalar_t__ delayed_node; int runtime_flags; struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_root*) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 struct btrfs_trans_handle* FUNC_5 (struct btrfs_root*) ;
 struct btrfs_trans_handle* FUNC_6 (struct btrfs_root*,int) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 scalar_t__ FUNC_8 (int ,int *) ;

int FUNC_9(struct inode *VAR_2)
{
 struct btrfs_root *VAR_3 = FUNC_0(VAR_2)->root;
 struct btrfs_trans_handle *VAR_4;
 int VAR_5;

 if (FUNC_8(VAR_0, &FUNC_0(VAR_2)->runtime_flags))
  return 0;

 VAR_4 = FUNC_5(VAR_3);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 VAR_5 = FUNC_7(VAR_4, VAR_3, VAR_2);
 if (VAR_5 && VAR_5 == -VAR_1) {

  FUNC_4(VAR_4, VAR_3);
  VAR_4 = FUNC_6(VAR_3, 1);
  if (FUNC_1(VAR_4))
   return FUNC_2(VAR_4);

  VAR_5 = FUNC_7(VAR_4, VAR_3, VAR_2);
 }
 FUNC_4(VAR_4, VAR_3);
 if (FUNC_0(VAR_2)->delayed_node)
  FUNC_3(VAR_3);

 return VAR_5;
}
