
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* tqe_next; } ;
struct vnode {TYPE_2__ v_mntvnodes; } ;
typedef TYPE_4__* mount_t ;
struct TYPE_13__ {TYPE_3__* tqh_first; TYPE_3__** tqh_last; } ;
struct TYPE_12__ {TYPE_6__ mnt_newvnodes; TYPE_6__ mnt_vnodelist; TYPE_6__ mnt_workerqueue; } ;
struct TYPE_9__ {TYPE_3__** tqe_prev; } ;
struct TYPE_11__ {TYPE_1__ v_mntvnodes; } ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 struct vnode* FUNC_2 (TYPE_6__*,int ) ;
 int VAR_0 ;

int
FUNC_3(mount_t VAR_1)
{
 int VAR_2 = 0;


 if (!FUNC_0(&VAR_1->mnt_workerqueue)) {
  struct vnode * VAR_3;
  VAR_3 = FUNC_2(&VAR_1->mnt_vnodelist, VAR_0);


  if (VAR_3)
   VAR_3->v_mntvnodes.tqe_next = VAR_1->mnt_workerqueue.tqh_first;
  else
   VAR_1->mnt_vnodelist.tqh_first = VAR_1->mnt_workerqueue.tqh_first;
  VAR_1->mnt_workerqueue.tqh_first->v_mntvnodes.tqe_prev = VAR_1->mnt_vnodelist.tqh_last;
  VAR_1->mnt_vnodelist.tqh_last = VAR_1->mnt_workerqueue.tqh_last;
  FUNC_1(&VAR_1->mnt_workerqueue);
 }


 if (!FUNC_0(&VAR_1->mnt_newvnodes)) {
  struct vnode * VAR_4;
  VAR_4 = FUNC_2(&VAR_1->mnt_newvnodes, VAR_0);

  VAR_1->mnt_newvnodes.tqh_first->v_mntvnodes.tqe_prev = &VAR_1->mnt_vnodelist.tqh_first;
  VAR_4->v_mntvnodes.tqe_next = VAR_1->mnt_vnodelist.tqh_first;
  if(VAR_1->mnt_vnodelist.tqh_first)
   VAR_1->mnt_vnodelist.tqh_first->v_mntvnodes.tqe_prev = &VAR_4->v_mntvnodes.tqe_next;
  else
   VAR_1->mnt_vnodelist.tqh_last = VAR_1->mnt_newvnodes.tqh_last;
  VAR_1->mnt_vnodelist.tqh_first = VAR_1->mnt_newvnodes.tqh_first;
  FUNC_1(&VAR_1->mnt_newvnodes);
  VAR_2 = 1;
 }

 return(VAR_2);
}
