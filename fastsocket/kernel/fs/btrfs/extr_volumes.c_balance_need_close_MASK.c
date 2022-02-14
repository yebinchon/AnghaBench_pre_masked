
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int balance_cancel_req; int balance_pause_req; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct btrfs_fs_info *VAR_0)
{

 return FUNC_0(&VAR_0->balance_cancel_req) ||
  (FUNC_0(&VAR_0->balance_pause_req) == 0 &&
   FUNC_0(&VAR_0->balance_cancel_req) == 0);
}
