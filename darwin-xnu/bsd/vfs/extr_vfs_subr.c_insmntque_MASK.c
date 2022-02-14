
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef TYPE_4__* vnode_t ;
typedef TYPE_5__* mount_t ;
struct TYPE_20__ {int mnt_lflag; int mnt_vnodelist; int mnt_newvnodes; int mnt_workerqueue; } ;
struct TYPE_17__ {TYPE_3__** tqe_prev; TYPE_3__* tqe_next; } ;
struct TYPE_19__ {int v_lflag; TYPE_2__ v_mntvnodes; TYPE_5__* v_mount; } ;
struct TYPE_16__ {TYPE_3__** tqe_prev; } ;
struct TYPE_18__ {TYPE_1__ v_mntvnodes; } ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_4__*,int ) ;
 TYPE_4__* FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_4__*,int ) ;
 int VAR_1 ;
 TYPE_5__* VAR_2 ;
 int FUNC_3 (TYPE_5__*,int) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*,int) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_8(vnode_t VAR_5, mount_t VAR_6)
{
 mount_t VAR_7;



 if ( (VAR_7 = VAR_5->v_mount) != ((void*)0) && VAR_7 != VAR_2) {
  if ((VAR_5->v_lflag & VAR_1) == 0)
   FUNC_7("insmntque: vp not in mount vnode list");
  VAR_5->v_lflag &= ~VAR_1;

  FUNC_4(VAR_7);

  FUNC_3(VAR_7, 1);

  if (VAR_5->v_mntvnodes.tqe_next == ((void*)0)) {
   if (FUNC_1(&VAR_7->mnt_vnodelist, VAR_4) == VAR_5)
    FUNC_2(&VAR_7->mnt_vnodelist, VAR_5, VAR_3);
   else if (FUNC_1(&VAR_7->mnt_newvnodes, VAR_4) == VAR_5)
    FUNC_2(&VAR_7->mnt_newvnodes, VAR_5, VAR_3);
   else if (FUNC_1(&VAR_7->mnt_workerqueue, VAR_4) == VAR_5)
    FUNC_2(&VAR_7->mnt_workerqueue, VAR_5, VAR_3);
   } else {
   VAR_5->v_mntvnodes.tqe_next->v_mntvnodes.tqe_prev = VAR_5->v_mntvnodes.tqe_prev;
   *VAR_5->v_mntvnodes.tqe_prev = VAR_5->v_mntvnodes.tqe_next;
  }
  VAR_5->v_mntvnodes.tqe_next = ((void*)0);
  VAR_5->v_mntvnodes.tqe_prev = ((void*)0);
  FUNC_6(VAR_7);
  return;
 }




 if ((VAR_5->v_mount = VAR_6) != ((void*)0)) {
  FUNC_4(VAR_6);
  if ((VAR_5->v_mntvnodes.tqe_next != 0) && (VAR_5->v_mntvnodes.tqe_prev != 0))
   FUNC_7("vp already in mount list");
  if (VAR_6->mnt_lflag & VAR_0)
   FUNC_0(&VAR_6->mnt_newvnodes, VAR_5, VAR_3);
  else
   FUNC_0(&VAR_6->mnt_vnodelist, VAR_5, VAR_3);
  if (VAR_5->v_lflag & VAR_1)
   FUNC_7("insmntque: vp already in mount vnode list");
  VAR_5->v_lflag |= VAR_1;
  FUNC_5(VAR_6, 1);
  FUNC_6(VAR_6);
 }
}
