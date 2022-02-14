
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extent_buffer {int dummy; } ;
struct btrfs_stripe {int dummy; } ;
struct btrfs_chunk {int dummy; } ;
struct btrfs_balance_args {scalar_t__ devid; } ;


 int FUNC_0 (struct extent_buffer*,struct btrfs_chunk*) ;
 scalar_t__ FUNC_1 (struct extent_buffer*,struct btrfs_stripe*) ;
 struct btrfs_stripe* FUNC_2 (struct btrfs_chunk*,int) ;

__attribute__((used)) static int FUNC_3(struct extent_buffer *VAR_0,
         struct btrfs_chunk *VAR_1,
         struct btrfs_balance_args *VAR_2)
{
 struct btrfs_stripe *VAR_3;
 int VAR_4 = FUNC_0(VAR_0, VAR_1);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_3 = FUNC_2(VAR_1, VAR_5);
  if (FUNC_1(VAR_0, VAR_3) == VAR_2->devid)
   return 0;
 }

 return 1;
}
