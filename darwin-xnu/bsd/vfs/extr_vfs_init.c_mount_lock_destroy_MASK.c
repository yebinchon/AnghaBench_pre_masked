
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* mount_t ;
struct TYPE_3__ {int mnt_rwlock; int mnt_renamelock; int mnt_iter_lock; int mnt_mlock; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;

void
FUNC_2(mount_t VAR_1)
{
 FUNC_0(&VAR_1->mnt_mlock, VAR_0);
 FUNC_0(&VAR_1->mnt_iter_lock, VAR_0);
 FUNC_0(&VAR_1->mnt_renamelock, VAR_0);
 FUNC_1(&VAR_1->mnt_rwlock, VAR_0);
}
