
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;


 int FUNC_0 (struct btrfs_root*,struct extent_buffer*,int ,int ) ;
 struct extent_buffer* FUNC_1 (struct btrfs_root*,int ,int ) ;

struct extent_buffer *FUNC_2(struct btrfs_root *VAR_0, u64 VAR_1,
          u32 VAR_2, u64 VAR_3)
{
 struct extent_buffer *VAR_4 = ((void*)0);
 int VAR_5;

 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_0, VAR_4, 0, VAR_3);
 return VAR_4;

}
