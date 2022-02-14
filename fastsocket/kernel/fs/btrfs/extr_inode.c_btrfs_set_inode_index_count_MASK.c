
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {scalar_t__* slots; struct extent_buffer** nodes; } ;
struct btrfs_key {scalar_t__ objectid; int offset; } ;
struct TYPE_2__ {int index_cnt; struct btrfs_root* root; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 struct btrfs_path* FUNC_1 () ;
 int FUNC_2 (struct btrfs_path*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (struct extent_buffer*,struct btrfs_key*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct btrfs_key*) ;
 int FUNC_6 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;
 int FUNC_7 (struct btrfs_key*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_2)
{
 struct btrfs_root *VAR_3 = FUNC_0(VAR_2)->root;
 struct btrfs_key VAR_4, VAR_5;
 struct btrfs_path *VAR_6;
 struct extent_buffer *VAR_7;
 int VAR_8;

 VAR_4.objectid = FUNC_3(VAR_2);
 FUNC_7(&VAR_4, VAR_0);
 VAR_4.offset = (u64)-1;

 VAR_6 = FUNC_1();
 if (!VAR_6)
  return -VAR_1;

 VAR_8 = FUNC_6(((void*)0), VAR_3, &VAR_4, VAR_6, 0, 0);
 if (VAR_8 < 0)
  goto out;

 if (VAR_8 == 0)
  goto out;
 VAR_8 = 0;







 if (VAR_6->slots[0] == 0) {
  FUNC_0(VAR_2)->index_cnt = 2;
  goto out;
 }

 VAR_6->slots[0]--;

 VAR_7 = VAR_6->nodes[0];
 FUNC_4(VAR_7, &VAR_5, VAR_6->slots[0]);

 if (VAR_5.objectid != FUNC_3(VAR_2) ||
     FUNC_5(&VAR_5) != VAR_0) {
  FUNC_0(VAR_2)->index_cnt = 2;
  goto out;
 }

 FUNC_0(VAR_2)->index_cnt = VAR_5.offset + 1;
out:
 FUNC_2(VAR_6);
 return VAR_8;
}
