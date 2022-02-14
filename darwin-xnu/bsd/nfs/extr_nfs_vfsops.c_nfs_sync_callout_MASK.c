
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vnode_t ;
struct nfs_sync_cargs {int error; int ctx; int waitfor; } ;
typedef TYPE_1__* nfsnode_t ;
struct TYPE_4__ {int n_flag; scalar_t__ n_wrbusy; int n_bflag; int n_dirtyblkhd; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;

int
FUNC_5(vnode_t VAR_5, void *VAR_6)
{
 struct nfs_sync_cargs *VAR_7 = (struct nfs_sync_cargs*)VAR_6;
 nfsnode_t VAR_8 = FUNC_1(VAR_5);
 int VAR_9;

 if (VAR_8->n_flag & VAR_2) {
  FUNC_4(VAR_5, VAR_3, VAR_7->ctx);
  return (VAR_4);
 }

 if (FUNC_0(&VAR_8->n_dirtyblkhd))
  return (VAR_4);
 if (VAR_8->n_wrbusy > 0)
  return (VAR_4);
 if (VAR_8->n_bflag & (VAR_0|VAR_1))
  return (VAR_4);

 VAR_9 = FUNC_2(VAR_8, VAR_7->waitfor, FUNC_3(VAR_7->ctx), 0);
 if (VAR_9)
  VAR_7->error = VAR_9;

 return (VAR_4);
}
