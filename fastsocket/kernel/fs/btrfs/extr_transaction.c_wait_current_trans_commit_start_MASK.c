
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_transaction {int in_commit; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_2__ {int transaction_blocked_wait; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct btrfs_root *VAR_0,
         struct btrfs_transaction *VAR_1)
{
 FUNC_0(VAR_0->fs_info->transaction_blocked_wait, VAR_1->in_commit);
}
