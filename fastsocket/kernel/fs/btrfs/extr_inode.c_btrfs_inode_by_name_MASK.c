
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int * nodes; } ;
struct btrfs_key {scalar_t__ objectid; } ;
struct btrfs_dir_item {int dummy; } ;
struct TYPE_4__ {struct btrfs_root* root; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct btrfs_dir_item*) ;
 scalar_t__ FUNC_2 (struct btrfs_dir_item*) ;
 int FUNC_3 (struct btrfs_dir_item*) ;
 struct btrfs_path* FUNC_4 () ;
 int FUNC_5 (int ,struct btrfs_dir_item*,struct btrfs_key*) ;
 int FUNC_6 (struct btrfs_path*) ;
 int FUNC_7 (struct inode*) ;
 struct btrfs_dir_item* FUNC_8 (int *,struct btrfs_root*,struct btrfs_path*,int ,char const*,int,int ) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_1, struct dentry *VAR_2,
          struct btrfs_key *VAR_3)
{
 const char *VAR_4 = VAR_2->d_name.name;
 int VAR_5 = VAR_2->d_name.len;
 struct btrfs_dir_item *VAR_6;
 struct btrfs_path *VAR_7;
 struct btrfs_root *VAR_8 = FUNC_0(VAR_1)->root;
 int VAR_9 = 0;

 VAR_7 = FUNC_4();
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = FUNC_8(((void*)0), VAR_8, VAR_7, FUNC_7(VAR_1), VAR_4,
        VAR_5, 0);
 if (FUNC_1(VAR_6))
  VAR_9 = FUNC_3(VAR_6);

 if (FUNC_2(VAR_6))
  goto out_err;

 FUNC_5(VAR_7->nodes[0], VAR_6, VAR_3);
out:
 FUNC_6(VAR_7);
 return VAR_9;
out_err:
 VAR_3->objectid = 0;
 goto out;
}
