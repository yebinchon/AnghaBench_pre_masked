
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
typedef TYPE_1__* mount_t ;
struct TYPE_3__ {scalar_t__ mnt_devvp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

vnode_t
FUNC_1(mount_t VAR_1)
{
 vnode_t VAR_2 = VAR_1->mnt_devvp;

 if ((VAR_2 != VAR_0) && (FUNC_0(VAR_2) == 0)) {
  return VAR_2;
 }

 return VAR_0;
}
