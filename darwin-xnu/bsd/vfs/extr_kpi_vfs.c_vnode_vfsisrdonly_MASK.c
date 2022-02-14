
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
struct TYPE_5__ {TYPE_1__* v_mount; } ;
struct TYPE_4__ {int mnt_flag; } ;


 int VAR_0 ;

int
FUNC_0(vnode_t VAR_1)
{
 return ((VAR_1->v_mount->mnt_flag & VAR_0)? 1 : 0);
}
