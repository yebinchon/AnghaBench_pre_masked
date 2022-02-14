
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {int offset; int type; int objectid; } ;
struct btrfs_device {int devid; } ;
struct TYPE_2__ {struct btrfs_root* chunk_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct btrfs_trans_handle*) ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 struct btrfs_path* FUNC_2 () ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_path*) ;
 int FUNC_5 (struct btrfs_path*) ;
 int FUNC_6 (struct btrfs_trans_handle*,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int,int) ;
 struct btrfs_trans_handle* FUNC_7 (struct btrfs_root*,int ) ;
 int FUNC_8 (struct btrfs_root*) ;
 int FUNC_9 (struct btrfs_root*) ;

__attribute__((used)) static int FUNC_10(struct btrfs_root *VAR_4,
        struct btrfs_device *VAR_5)
{
 int VAR_6;
 struct btrfs_path *VAR_7;
 struct btrfs_key VAR_8;
 struct btrfs_trans_handle *VAR_9;

 VAR_4 = VAR_4->fs_info->chunk_root;

 VAR_7 = FUNC_2();
 if (!VAR_7)
  return -VAR_3;

 VAR_9 = FUNC_7(VAR_4, 0);
 if (FUNC_0(VAR_9)) {
  FUNC_5(VAR_7);
  return FUNC_1(VAR_9);
 }
 VAR_8.objectid = VAR_0;
 VAR_8.type = VAR_1;
 VAR_8.offset = VAR_5->devid;
 FUNC_8(VAR_4);

 VAR_6 = FUNC_6(VAR_9, VAR_4, &VAR_8, VAR_7, -1, 1);
 if (VAR_6 < 0)
  goto out;

 if (VAR_6 > 0) {
  VAR_6 = -VAR_2;
  goto out;
 }

 VAR_6 = FUNC_4(VAR_9, VAR_4, VAR_7);
 if (VAR_6)
  goto out;
out:
 FUNC_5(VAR_7);
 FUNC_9(VAR_4);
 FUNC_3(VAR_9, VAR_4);
 return VAR_6;
}
