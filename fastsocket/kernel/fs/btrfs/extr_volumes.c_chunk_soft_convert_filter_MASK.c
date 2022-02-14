
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_balance_args {int flags; int target; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(u64 VAR_2,
         struct btrfs_balance_args *VAR_3)
{
 if (!(VAR_3->flags & VAR_0))
  return 0;

 VAR_2 = FUNC_0(VAR_2) &
    VAR_1;

 if (VAR_3->target == VAR_2)
  return 1;

 return 0;
}
