
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct btrfs_root {int dummy; } ;
struct btrfs_path {int dummy; } ;
struct btrfs_key {void* offset; int type; void* objectid; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct btrfs_root*,struct btrfs_key*,struct btrfs_path*,int ,int ) ;

int FUNC_1(struct btrfs_root *VAR_1,
     struct btrfs_path *VAR_2,
     u64 VAR_3, u64 VAR_4)
{
 struct btrfs_key VAR_5;
 int VAR_6;

 VAR_5.objectid = VAR_3;
 VAR_5.type = VAR_0;
 VAR_5.offset = VAR_4;

 VAR_6 = FUNC_0(((void*)0), VAR_1, &VAR_5, VAR_2, 0, 0);
 return VAR_6;
}
