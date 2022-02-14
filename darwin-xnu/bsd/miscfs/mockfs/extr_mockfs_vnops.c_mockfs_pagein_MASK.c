
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vnop_pagein_args {int a_flags; int a_size; int a_f_offset; int a_pl_offset; int a_pl; TYPE_4__* a_vp; } ;
typedef TYPE_2__* mockfs_mount_t ;
typedef TYPE_3__* mockfs_fsnode_t ;
struct TYPE_8__ {scalar_t__ v_data; } ;
struct TYPE_7__ {int size; TYPE_1__* mnt; } ;
struct TYPE_6__ {scalar_t__ mockfs_memory_backed; } ;
struct TYPE_5__ {scalar_t__ mnt_data; } ;


 int FUNC_0 (TYPE_4__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct vnop_pagein_args * VAR_0)
{
 mockfs_fsnode_t VAR_1;
 mockfs_mount_t VAR_2;




 VAR_1 = (mockfs_fsnode_t) VAR_0->a_vp->v_data;
 VAR_2 = ((mockfs_mount_t) VAR_1->mnt->mnt_data);





 if (VAR_2->mockfs_memory_backed)
  FUNC_1("mockfs_pagein called for a memory-backed device");

 return FUNC_0(VAR_0->a_vp, VAR_0->a_pl, VAR_0->a_pl_offset, VAR_0->a_f_offset, VAR_0->a_size, VAR_1->size, VAR_0->a_flags);
}
