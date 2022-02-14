
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vfs_context_t ;
typedef int u_long ;
struct mount {TYPE_1__* mnt_op; } ;
typedef int caddr_t ;
struct TYPE_2__ {int (* vfs_ioctl ) (struct mount*,int ,int ,int,int ) ;} ;


 int VAR_0 ;
 struct mount* VAR_1 ;
 int FUNC_0 (struct mount*,int ,int ,int,int ) ;
 int FUNC_1 () ;

int FUNC_2(struct mount *VAR_2, u_long VAR_3, caddr_t VAR_4,
     int VAR_5, vfs_context_t VAR_6)
{
 if (VAR_2 == VAR_1 || !VAR_2->mnt_op->vfs_ioctl)
  return VAR_0;

 return VAR_2->mnt_op->vfs_ioctl(VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6 ?: FUNC_1());
}
