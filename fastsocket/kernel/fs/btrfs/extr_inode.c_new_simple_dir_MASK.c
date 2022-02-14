
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_mode; int i_ctime; int i_atime; int i_mtime; int * i_fop; int * i_op; int i_ino; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_key {int dummy; } ;
struct TYPE_2__ {int runtime_flags; int location; struct btrfs_root* root; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inode* FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *,struct btrfs_key*,int) ;
 struct inode* FUNC_3 (struct super_block*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_9 ;

__attribute__((used)) static struct inode *FUNC_5(struct super_block *VAR_10,
        struct btrfs_key *VAR_11,
        struct btrfs_root *VAR_12)
{
 struct inode *VAR_13 = FUNC_3(VAR_10);

 if (!VAR_13)
  return FUNC_1(-VAR_3);

 FUNC_0(VAR_13)->root = VAR_12;
 FUNC_2(&FUNC_0(VAR_13)->location, VAR_11, sizeof(*VAR_11));
 FUNC_4(VAR_1, &FUNC_0(VAR_13)->runtime_flags);

 VAR_13->i_ino = VAR_0;
 VAR_13->i_op = &VAR_8;
 VAR_13->i_fop = &VAR_9;
 VAR_13->i_mode = VAR_4 | VAR_5 | VAR_6 | VAR_7;
 VAR_13->i_mtime = VAR_13->i_atime = VAR_13->i_ctime = VAR_2;

 return VAR_13;
}
