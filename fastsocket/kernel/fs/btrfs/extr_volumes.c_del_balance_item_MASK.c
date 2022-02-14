
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {scalar_t__ offset; int type; int objectid; } ;


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

__attribute__((used)) static int FUNC_8(struct btrfs_root *VAR_4)
{
 struct btrfs_trans_handle *VAR_5;
 struct btrfs_path *VAR_6;
 struct btrfs_key VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = FUNC_2();
 if (!VAR_6)
  return -VAR_3;

 VAR_5 = FUNC_7(VAR_4, 0);
 if (FUNC_0(VAR_5)) {
  FUNC_5(VAR_6);
  return FUNC_1(VAR_5);
 }

 VAR_7.objectid = VAR_1;
 VAR_7.type = VAR_0;
 VAR_7.offset = 0;

 VAR_8 = FUNC_6(VAR_5, VAR_4, &VAR_7, VAR_6, -1, 1);
 if (VAR_8 < 0)
  goto out;
 if (VAR_8 > 0) {
  VAR_8 = -VAR_2;
  goto out;
 }

 VAR_8 = FUNC_4(VAR_5, VAR_4, VAR_6);
out:
 FUNC_5(VAR_6);
 VAR_9 = FUNC_3(VAR_5, VAR_4);
 if (VAR_9 && !VAR_8)
  VAR_8 = VAR_9;
 return VAR_8;
}
