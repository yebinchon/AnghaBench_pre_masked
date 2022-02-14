
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct vnode_attr {int va_flags; } ;
struct timeval {scalar_t__ tv_sec; } ;
struct nfsmount {int nm_vers; int nm_mountp; } ;
struct nfs_vattr {int nva_nlink; int nva_gid; int nva_uid; int nva_mode; int nva_fileid; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_8__ {int * val; } ;
struct TYPE_10__ {TYPE_1__ f_fsid; } ;
struct TYPE_9__ {scalar_t__ n_evtstamp; int n_events; } ;


 struct nfsmount* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct vnode_attr*) ;
 int FUNC_3 (struct vnode_attr*,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct timeval*) ;
 int FUNC_5 (TYPE_2__*,struct nfs_vattr*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct vnode_attr*) ;
 TYPE_3__* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,struct vnode_attr*) ;

void
FUNC_9(nfsnode_t VAR_7, uint32_t VAR_8)
{
 struct nfsmount *VAR_9 = FUNC_0(VAR_7);
 struct nfs_vattr VAR_10;
 struct vnode_attr VAR_11, *VAR_12 = ((void*)0);
 struct timeval VAR_13;

 FUNC_4(&VAR_13);
 if ((VAR_7->n_evtstamp == VAR_13.tv_sec) || !VAR_9) {

  VAR_7->n_events |= VAR_8;
  return;
 }
 VAR_8 |= VAR_7->n_events;
 VAR_7->n_events = 0;
 VAR_7->n_evtstamp = VAR_13.tv_sec;

 FUNC_6(&VAR_11);
 if (!FUNC_5(VAR_7, &VAR_10, 0)) {
  VAR_12 = &VAR_11;
  FUNC_2(VAR_12);

  VAR_12->va_flags |= VAR_9->nm_vers > 2 ? VAR_0 : 0;
  FUNC_3(VAR_12, VAR_2, FUNC_7(VAR_9->nm_mountp)->f_fsid.val[0]);
  FUNC_3(VAR_12, VAR_1, VAR_10.nva_fileid);
  FUNC_3(VAR_12, VAR_4, VAR_10.nva_mode);
  FUNC_3(VAR_12, VAR_6, VAR_10.nva_uid);
  FUNC_3(VAR_12, VAR_3, VAR_10.nva_gid);
  FUNC_3(VAR_12, VAR_5, VAR_10.nva_nlink);
 }
 FUNC_8(FUNC_1(VAR_7), VAR_8, VAR_12);
}
