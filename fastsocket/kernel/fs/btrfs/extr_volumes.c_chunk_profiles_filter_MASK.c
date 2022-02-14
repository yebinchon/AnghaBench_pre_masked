
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct btrfs_balance_args {int profiles; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(u64 VAR_1,
     struct btrfs_balance_args *VAR_2)
{
 VAR_1 = FUNC_0(VAR_1) &
    VAR_0;

 if (VAR_2->profiles & VAR_1)
  return 0;

 return 1;
}
