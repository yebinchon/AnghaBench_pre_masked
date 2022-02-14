
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* mount_t ;
struct TYPE_3__ {int mnt_rwlock; int mnt_renamelock; int mnt_iter_lock; int mnt_mlock; } ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_2(mount_t VAR_2)
{
 FUNC_0(&VAR_2->mnt_mlock, VAR_1, VAR_0);
 FUNC_0(&VAR_2->mnt_iter_lock, VAR_1, VAR_0);
 FUNC_0(&VAR_2->mnt_renamelock, VAR_1, VAR_0);
 FUNC_1(&VAR_2->mnt_rwlock, VAR_1, VAR_0);
}
