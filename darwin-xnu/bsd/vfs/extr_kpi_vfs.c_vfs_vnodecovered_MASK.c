
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * vnode_t ;
typedef TYPE_1__* mount_t ;
struct TYPE_3__ {int * mnt_vnodecovered; } ;


 scalar_t__ FUNC_0 (int *) ;

vnode_t
FUNC_1(mount_t VAR_0)
{
 vnode_t VAR_1 = VAR_0->mnt_vnodecovered;
 if ((VAR_1 == ((void*)0)) || (FUNC_0(VAR_1) != 0)) {
  return ((void*)0);
 } else {
  return VAR_1;
 }
}
