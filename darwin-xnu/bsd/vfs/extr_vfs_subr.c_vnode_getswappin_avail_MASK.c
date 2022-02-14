
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int int64_t ;
struct TYPE_6__ {int mnt_ioflags; int mnt_max_swappin_available; } ;
struct TYPE_5__ {TYPE_3__* v_mount; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

int64_t
FUNC_2(vnode_t VAR_1)
{
 int64_t VAR_2 = 0;

 FUNC_0(VAR_1->v_mount);
 if (VAR_1->v_mount->mnt_ioflags & VAR_0)
  VAR_2 = VAR_1->v_mount->mnt_max_swappin_available;
 FUNC_1(VAR_1->v_mount);

 return (VAR_2);
}
