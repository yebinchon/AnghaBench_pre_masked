
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int user_addr_t ;
typedef TYPE_2__* mount_t ;
struct TYPE_9__ {TYPE_1__* mnt_op; } ;
struct TYPE_8__ {int (* vfs_mount ) (TYPE_2__*,int ,int ,int ) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ) ;

int
FUNC_4(mount_t VAR_2, vnode_t VAR_3, user_addr_t VAR_4, vfs_context_t VAR_5)
{
 int VAR_6;

 if ((VAR_2 == VAR_1) || (VAR_2->mnt_op->vfs_mount == 0))
  return(VAR_0);

 if (FUNC_3(VAR_5)) {
  if (FUNC_2(VAR_2)) {
   VAR_6 = (*VAR_2->mnt_op->vfs_mount)(VAR_2, VAR_3, VAR_4, VAR_5);
  }
  else {
   VAR_6 = VAR_0;
  }
 }
 else {
  VAR_6 = (*VAR_2->mnt_op->vfs_mount)(VAR_2, VAR_3, VAR_4, VAR_5);
 }

 return (VAR_6);
}
