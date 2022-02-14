
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_fs_info {int trans_lock; TYPE_1__* running_transaction; } ;
struct TYPE_2__ {int blocked; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct btrfs_fs_info *VAR_0)
{
 int VAR_1 = 0;
 FUNC_0(&VAR_0->trans_lock);
 if (VAR_0->running_transaction)
  VAR_1 = VAR_0->running_transaction->blocked;
 FUNC_1(&VAR_0->trans_lock);
 return VAR_1;
}
