
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {int dummy; } ;


 unsigned int FUNC_0 (struct btrfs_root*) ;
 scalar_t__ FUNC_1 (struct extent_buffer*) ;
 unsigned int FUNC_2 (struct extent_buffer*,scalar_t__) ;

__attribute__((used)) static inline unsigned int FUNC_3(struct btrfs_root *VAR_0,
      struct extent_buffer *VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == 0)
  return FUNC_0(VAR_0);
 return FUNC_2(VAR_1, VAR_2 - 1);
}
