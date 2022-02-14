
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_chunk {int dummy; } ;
struct btrfs_balance_args {scalar_t__ vend; scalar_t__ vstart; } ;


 scalar_t__ FUNC_0 (struct extent_buffer*,struct btrfs_chunk*) ;

__attribute__((used)) static int FUNC_1(struct extent_buffer *VAR_0,
          struct btrfs_chunk *VAR_1,
          u64 VAR_2,
          struct btrfs_balance_args *VAR_3)
{
 if (VAR_2 < VAR_3->vend &&
     VAR_2 + FUNC_0(VAR_0, VAR_1) > VAR_3->vstart)

  return 0;

 return 1;
}
