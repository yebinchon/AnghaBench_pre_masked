
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {int offset; int type; int objectid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct btrfs_path* FUNC_0 () ;
 int FUNC_1 (struct btrfs_path*) ;
 int FUNC_2 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;

int FUNC_3(struct btrfs_root *VAR_3, u64 VAR_4)
{
 struct btrfs_path *VAR_5;
 struct btrfs_key VAR_6;
 int VAR_7;

 VAR_6.objectid = VAR_1;
 VAR_6.type = VAR_0;
 VAR_6.offset = VAR_4;

 VAR_5 = FUNC_0();
 if (!VAR_5)
  return -VAR_2;

 VAR_7 = FUNC_2(((void*)0), VAR_3, &VAR_6, VAR_5, 0, 0);

 FUNC_1(VAR_5);
 return VAR_7;
}
