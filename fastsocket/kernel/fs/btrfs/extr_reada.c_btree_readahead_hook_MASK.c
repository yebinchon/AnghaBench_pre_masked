
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int fs_info; } ;


 int FUNC_0 (struct btrfs_root*,struct extent_buffer*,int ,int) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct btrfs_root *VAR_0, struct extent_buffer *VAR_1,
    u64 VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 FUNC_1(VAR_0->fs_info);

 return VAR_4;
}
