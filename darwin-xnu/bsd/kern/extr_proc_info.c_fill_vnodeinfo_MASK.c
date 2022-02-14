
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_3__* vnode_t ;
typedef int vfs_context_t ;
struct TYPE_8__ {scalar_t__* val; } ;
struct vnode_info {int vi_type; TYPE_2__ vi_fsid; int vi_stat; } ;
struct stat64 {int dummy; } ;
struct TYPE_7__ {TYPE_2__ f_fsid; } ;
struct TYPE_10__ {TYPE_1__ mnt_vfsstat; } ;
struct TYPE_9__ {int v_type; TYPE_6__* v_mount; } ;


 int FUNC_0 (struct stat64*,int) ;
 TYPE_6__* VAR_0 ;
 int FUNC_1 (struct stat64*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,struct stat64*,int *,int,int ) ;

int
FUNC_5(vnode_t VAR_1, struct vnode_info *VAR_2)
{
  vfs_context_t VAR_3;
  struct stat64 VAR_4;
  int VAR_5 = 0;

  FUNC_0(&VAR_4, sizeof(struct stat64));
  VAR_3 = FUNC_2((vfs_context_t)0);
  VAR_5 = FUNC_4(VAR_1, &VAR_4, ((void*)0), 1, VAR_3);
  (void)FUNC_3(VAR_3);

  FUNC_1(&VAR_4, &VAR_2->vi_stat);

  if (VAR_5 != 0)
   goto out;

  if (VAR_1->v_mount != VAR_0) {
   VAR_2->vi_fsid = VAR_1->v_mount->mnt_vfsstat.f_fsid;
  } else {
   VAR_2->vi_fsid.val[0] = 0;
   VAR_2->vi_fsid.val[1] = 0;
  }
  VAR_2->vi_type = VAR_1->v_type;
out:
  return(VAR_5);
}
