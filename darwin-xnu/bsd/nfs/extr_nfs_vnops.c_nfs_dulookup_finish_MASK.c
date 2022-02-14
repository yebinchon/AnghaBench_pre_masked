
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


typedef int vfs_context_t ;
typedef int u_int64_t ;
struct nfsmount {TYPE_1__* nm_funcs; } ;
struct nfs_vattr {int dummy; } ;
struct TYPE_18__ {int cn_nameptr; int cn_namelen; } ;
struct TYPE_22__ {int r_auth; } ;
struct nfs_dulookup {int du_flags; TYPE_11__ du_cn; int du_smallname; TYPE_5__ du_req; } ;
typedef TYPE_2__* nfsnode_t ;
struct TYPE_21__ {int fh_len; int fh_data; } ;
typedef TYPE_3__ fhandle_t ;
struct TYPE_20__ {int n_flag; } ;
struct TYPE_19__ {int (* nf_lookup_rpc_async_finish ) (TYPE_2__*,int ,int ,int ,TYPE_5__*,int *,TYPE_3__*,struct nfs_vattr*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 struct nfsmount* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct nfs_vattr*) ;
 int FUNC_5 (struct nfs_vattr*) ;
 int FUNC_6 (int ,int *,TYPE_11__*) ;
 int FUNC_7 (int ,TYPE_2__*,TYPE_11__*,int ,int ,struct nfs_vattr*,int *,int ,int ,TYPE_2__**) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_2__*,int ,int ,int ,TYPE_5__*,int *,TYPE_3__*,struct nfs_vattr*) ;
 int FUNC_12 (int ) ;

void
FUNC_13(struct nfs_dulookup *VAR_5, nfsnode_t VAR_6, vfs_context_t VAR_7)
{
 struct nfsmount *VAR_8 = FUNC_2(VAR_6);
 int VAR_9;
 nfsnode_t VAR_10;
 u_int64_t VAR_11;
 fhandle_t VAR_12;
 struct nfs_vattr VAR_13;

 if (!VAR_8 || !(VAR_5->du_flags & VAR_2))
  goto out;

 FUNC_5(&VAR_13);
 VAR_9 = VAR_8->nm_funcs->nf_lookup_rpc_async_finish(VAR_6, VAR_5->du_cn.cn_nameptr,
   VAR_5->du_cn.cn_namelen, VAR_7, &VAR_5->du_req, &VAR_11, &VAR_12, &VAR_13);
 VAR_5->du_flags &= ~VAR_2;
 if (VAR_9 == VAR_0) {

  FUNC_8(VAR_6);
  FUNC_6(FUNC_3(VAR_6), ((void*)0), &VAR_5->du_cn);
  VAR_6->n_flag |= VAR_4;
  FUNC_9(VAR_6);
 } else if (!VAR_9) {
  VAR_9 = FUNC_7(FUNC_1(VAR_6), VAR_6, &VAR_5->du_cn, VAR_12.fh_data, VAR_12.fh_len,
       &VAR_13, &VAR_11, VAR_5->du_req.r_auth, VAR_3, &VAR_10);
  if (!VAR_9) {
   FUNC_9(VAR_10);
   FUNC_12(FUNC_3(VAR_10));
  }
 }
 FUNC_4(&VAR_13);
out:
 if (VAR_5->du_flags & VAR_2)
  FUNC_10(&VAR_5->du_req);
 if (VAR_5->du_cn.cn_nameptr && (VAR_5->du_cn.cn_nameptr != VAR_5->du_smallname))
  FUNC_0(VAR_5->du_cn.cn_nameptr, VAR_1);
}
