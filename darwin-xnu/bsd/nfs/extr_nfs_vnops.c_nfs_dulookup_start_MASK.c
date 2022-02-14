
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vfs_context_t ;
struct nfsreq {int dummy; } ;
struct nfsmount {TYPE_1__* nm_funcs; } ;
struct TYPE_4__ {int cn_namelen; int cn_nameptr; } ;
struct nfs_dulookup {int du_flags; TYPE_2__ du_cn; struct nfsreq du_req; } ;
typedef int nfsnode_t ;
struct TYPE_3__ {int (* nf_lookup_rpc_async ) (int ,int ,int ,int ,struct nfsreq**) ;} ;


 struct nfsmount* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ,struct nfsreq**) ;

void
FUNC_2(struct nfs_dulookup *VAR_2, nfsnode_t VAR_3, vfs_context_t VAR_4)
{
 struct nfsmount *VAR_5 = FUNC_0(VAR_3);
 struct nfsreq *VAR_6 = &VAR_2->du_req;

 if (!VAR_5 || !(VAR_2->du_flags & VAR_0) || (VAR_2->du_flags & VAR_1))
  return;
 if (!VAR_5->nm_funcs->nf_lookup_rpc_async(VAR_3, VAR_2->du_cn.cn_nameptr,
   VAR_2->du_cn.cn_namelen, VAR_4, &VAR_6))
  VAR_2->du_flags |= VAR_1;
}
