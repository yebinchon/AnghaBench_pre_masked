
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_3__* vnode_t ;
typedef TYPE_4__* mount_t ;
struct TYPE_14__ {int * tqh_first; int tqh_last; } ;
struct TYPE_11__ {int tqh_last; int * tqh_first; } ;
struct TYPE_13__ {TYPE_6__ mnt_newvnodes; TYPE_6__ mnt_vnodelist; TYPE_2__ mnt_workerqueue; } ;
struct TYPE_10__ {int ** tqe_prev; } ;
struct TYPE_12__ {TYPE_1__ v_mntvnodes; } ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 TYPE_3__* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (char*) ;

int
FUNC_4(mount_t VAR_0)
{
 vnode_t VAR_1;

 if (FUNC_0(&VAR_0->mnt_vnodelist)) {

  return (0);
 }

 VAR_1 = FUNC_1(&VAR_0->mnt_vnodelist);
 VAR_1->v_mntvnodes.tqe_prev = &(VAR_0->mnt_workerqueue.tqh_first);
 VAR_0->mnt_workerqueue.tqh_first = VAR_0->mnt_vnodelist.tqh_first;
 VAR_0->mnt_workerqueue.tqh_last = VAR_0->mnt_vnodelist.tqh_last;

 FUNC_2(&VAR_0->mnt_vnodelist);
 if (VAR_0->mnt_newvnodes.tqh_first != ((void*)0))
  FUNC_3("vnode_iterate_prepare: newvnode when entering vnode");
 FUNC_2(&VAR_0->mnt_newvnodes);

 return (1);
}
