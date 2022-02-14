
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {struct extent_buffer** nodes; } ;
struct btrfs_dir_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct btrfs_dir_item*) ;
 int FUNC_2 (struct btrfs_dir_item*) ;
 struct btrfs_path* FUNC_3 () ;
 size_t FUNC_4 (struct extent_buffer*,struct btrfs_dir_item*) ;
 int FUNC_5 (struct extent_buffer*,struct btrfs_dir_item*) ;
 int FUNC_6 (struct btrfs_path*) ;
 int FUNC_7 (struct inode*) ;
 struct btrfs_dir_item* FUNC_8 (int *,struct btrfs_root*,struct btrfs_path*,int ,char const*,int ,int ) ;
 int FUNC_9 (struct extent_buffer*,void*,unsigned long,size_t) ;
 int FUNC_10 (char const*) ;

ssize_t FUNC_11(struct inode *VAR_3, const char *VAR_4,
    void *VAR_5, size_t VAR_6)
{
 struct btrfs_dir_item *VAR_7;
 struct btrfs_root *VAR_8 = FUNC_0(VAR_3)->root;
 struct btrfs_path *VAR_9;
 struct extent_buffer *VAR_10;
 int VAR_11 = 0;
 unsigned long VAR_12;

 VAR_9 = FUNC_3();
 if (!VAR_9)
  return -VAR_1;


 VAR_7 = FUNC_8(((void*)0), VAR_8, VAR_9, FUNC_7(VAR_3), VAR_4,
    FUNC_10(VAR_4), 0);
 if (!VAR_7) {
  VAR_11 = -VAR_0;
  goto out;
 } else if (FUNC_1(VAR_7)) {
  VAR_11 = FUNC_2(VAR_7);
  goto out;
 }

 VAR_10 = VAR_9->nodes[0];

 if (!VAR_6) {
  VAR_11 = FUNC_4(VAR_10, VAR_7);
  goto out;
 }


 if (FUNC_4(VAR_10, VAR_7) > VAR_6) {
  VAR_11 = -VAR_2;
  goto out;
 }
 VAR_12 = (unsigned long)((char *)(VAR_7 + 1) +
       FUNC_5(VAR_10, VAR_7));
 FUNC_9(VAR_10, VAR_5, VAR_12,
      FUNC_4(VAR_10, VAR_7));
 VAR_11 = FUNC_4(VAR_10, VAR_7);

out:
 FUNC_6(VAR_9);
 return VAR_11;
}
