
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct btrfs_root {int dummy; } ;
struct btrfs_key {void* offset; int type; void* objectid; } ;
struct btrfs_fs_info {int dummy; } ;


 int VAR_0 ;
 struct btrfs_root* FUNC_0 (struct btrfs_fs_info*,struct btrfs_key*) ;
 scalar_t__ FUNC_1 (void*) ;

__attribute__((used)) static struct btrfs_root *FUNC_2(struct btrfs_fs_info *VAR_1,
     u64 VAR_2)
{
 struct btrfs_key VAR_3;

 VAR_3.objectid = VAR_2;
 VAR_3.type = VAR_0;
 if (FUNC_1(VAR_2))
  VAR_3.offset = 0;
 else
  VAR_3.offset = (u64)-1;

 return FUNC_0(VAR_1, &VAR_3);
}
