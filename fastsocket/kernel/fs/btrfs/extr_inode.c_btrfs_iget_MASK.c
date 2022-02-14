
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_state; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_key {int objectid; } ;
struct TYPE_2__ {int location; struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct inode* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_2 (struct super_block*,int ,struct btrfs_root*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *,struct btrfs_key*,int) ;
 int FUNC_8 (struct inode*) ;

struct inode *FUNC_9(struct super_block *VAR_3, struct btrfs_key *VAR_4,
    struct btrfs_root *VAR_5, int *VAR_6)
{
 struct inode *VAR_7;

 VAR_7 = FUNC_2(VAR_3, VAR_4->objectid, VAR_5);
 if (!VAR_7)
  return FUNC_1(-VAR_0);

 if (VAR_7->i_state & VAR_2) {
  FUNC_0(VAR_7)->root = VAR_5;
  FUNC_7(&FUNC_0(VAR_7)->location, VAR_4, sizeof(*VAR_4));
  FUNC_3(VAR_7);
  if (!FUNC_6(VAR_7)) {
   FUNC_4(VAR_7);
   FUNC_8(VAR_7);
   if (VAR_6)
    *VAR_6 = 1;
  } else {
   FUNC_8(VAR_7);
   FUNC_5(VAR_7);
   VAR_7 = FUNC_1(-VAR_1);
  }
 }

 return VAR_7;
}
