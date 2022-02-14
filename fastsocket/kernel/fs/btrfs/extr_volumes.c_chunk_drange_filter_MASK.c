
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct extent_buffer {int dummy; } ;
struct btrfs_stripe {int dummy; } ;
struct btrfs_chunk {int dummy; } ;
struct btrfs_balance_args {int flags; scalar_t__ devid; scalar_t__ pend; scalar_t__ pstart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct extent_buffer*,struct btrfs_chunk*) ;
 int FUNC_1 (struct extent_buffer*,struct btrfs_chunk*) ;
 int FUNC_2 (struct extent_buffer*,struct btrfs_chunk*) ;
 scalar_t__ FUNC_3 (struct extent_buffer*,struct btrfs_stripe*) ;
 struct btrfs_stripe* FUNC_4 (struct btrfs_chunk*,int) ;
 scalar_t__ FUNC_5 (struct extent_buffer*,struct btrfs_stripe*) ;
 int FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_7(struct extent_buffer *VAR_4,
          struct btrfs_chunk *VAR_5,
          u64 VAR_6,
          struct btrfs_balance_args *VAR_7)
{
 struct btrfs_stripe *VAR_8;
 int VAR_9 = FUNC_1(VAR_4, VAR_5);
 u64 VAR_10;
 u64 VAR_11;
 int VAR_12;
 int VAR_13;

 if (!(VAR_7->flags & VAR_0))
  return 0;

 if (FUNC_2(VAR_4, VAR_5) & (VAR_1 |
      VAR_2 | VAR_3))
  VAR_12 = 2;
 else
  VAR_12 = 1;
 VAR_12 = VAR_9 / VAR_12;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  VAR_8 = FUNC_4(VAR_5, VAR_13);
  if (FUNC_3(VAR_4, VAR_8) != VAR_7->devid)
   continue;

  VAR_10 = FUNC_5(VAR_4, VAR_8);
  VAR_11 = FUNC_0(VAR_4, VAR_5);
  FUNC_6(VAR_11, VAR_12);

  if (VAR_10 < VAR_7->pend &&
      VAR_10 + VAR_11 > VAR_7->pstart)
   return 0;
 }

 return 1;
}
