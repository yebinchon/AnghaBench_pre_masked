
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vfs_context_t ;
typedef int uid_t ;
typedef TYPE_2__* mount_t ;
typedef int caddr_t ;
struct TYPE_7__ {TYPE_1__* mnt_op; } ;
struct TYPE_6__ {int (* vfs_quotactl ) (TYPE_2__*,int,int ,int ,int ) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (TYPE_2__*,int,int ,int ,int ) ;

int
FUNC_1(mount_t VAR_2, int VAR_3, uid_t VAR_4, caddr_t VAR_5, vfs_context_t VAR_6)
{
 int VAR_7;

 if ((VAR_2 == VAR_1) || (VAR_2->mnt_op->vfs_quotactl == 0))
  return(VAR_0);

 VAR_7 = (*VAR_2->mnt_op->vfs_quotactl)(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 return (VAR_7);
}
