
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int f_bsize; scalar_t__ f_bavail; } ;
struct TYPE_7__ {TYPE_1__ mnt_vfsstat; } ;
struct TYPE_6__ {TYPE_3__* v_mount; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;

uint32_t
FUNC_2(vnode_t VAR_1)
{
 FUNC_1(VAR_1->v_mount, FUNC_0(), VAR_0);
  return (((uint64_t)VAR_1->v_mount->mnt_vfsstat.f_bavail *
          VAR_1->v_mount->mnt_vfsstat.f_bsize) >> 20);
}
