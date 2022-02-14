
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
struct TYPE_6__ {int mnt_kern_flag; } ;
struct TYPE_5__ {TYPE_3__* v_mount; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

void
FUNC_2(vnode_t VAR_1)
{
 FUNC_0(VAR_1->v_mount);
 VAR_1->v_mount->mnt_kern_flag |= VAR_0;
 FUNC_1(VAR_1->v_mount);
}
