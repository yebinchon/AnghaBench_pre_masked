
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct svc_serv {int dummy; } ;
struct svc_rqst {int dummy; } ;
struct rpc_xprt {int dummy; } ;
struct nfs_callback_data {int users; struct svc_rqst* task; struct svc_rqst* rqst; struct svc_serv* serv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct svc_rqst*) ;
 int VAR_1 ;
 int FUNC_1 (struct svc_rqst*) ;
 int FUNC_2 (char*,int) ;
 struct svc_rqst* FUNC_3 (int (*) (void*),struct svc_rqst*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (void*) ;
 struct svc_rqst* FUNC_7 (struct svc_serv*) ;
 int FUNC_8 (size_t,struct rpc_xprt*,struct nfs_callback_data*) ;
 struct nfs_callback_data* VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (size_t,struct svc_serv*,struct rpc_xprt*,struct svc_rqst**,int (*) (void*)) ;
 int FUNC_10 (char*,char*,size_t) ;
 struct svc_serv* FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (struct svc_serv*) ;
 int FUNC_13 (struct svc_rqst*) ;
 int FUNC_14 (struct svc_serv*) ;

int FUNC_15(u32 VAR_5, struct rpc_xprt *VAR_6)
{
 struct svc_serv *VAR_7 = ((void*)0);
 struct svc_rqst *VAR_8;
 int (*VAR_9)(void *VAR_10);
 struct nfs_callback_data *VAR_11 = &VAR_3[VAR_5];
 char VAR_12[12];
 int VAR_13 = 0;
 int VAR_14;

 FUNC_4(&VAR_4);
 if (VAR_11->users++ || VAR_11->task != ((void*)0)) {
  FUNC_8(VAR_5, VAR_6, VAR_11);
  goto out;
 }
 VAR_7 = FUNC_11(&VAR_2, VAR_1, ((void*)0));
 if (!VAR_7) {
  VAR_13 = -VAR_0;
  goto out_err;
 }

 VAR_14 = FUNC_9(VAR_5,
     VAR_7, VAR_6, &VAR_8, VAR_9);
 if (!VAR_14) {

  VAR_8 = FUNC_7(VAR_7);
  VAR_9 = FUNC_6;
 }

 if (FUNC_0(VAR_8)) {
  VAR_13 = FUNC_1(VAR_8);
  goto out_err;
 }

 FUNC_14(VAR_7);

 FUNC_10(VAR_12, "nfsv4.%u-svc", VAR_5);
 VAR_11->serv = VAR_7;
 VAR_11->rqst = VAR_8;
 VAR_11->task = FUNC_3(VAR_9, VAR_11->rqst, VAR_12);
 if (FUNC_0(VAR_11->task)) {
  VAR_13 = FUNC_1(VAR_11->task);
  FUNC_13(VAR_11->rqst);
  VAR_11->rqst = ((void*)0);
  VAR_11->task = ((void*)0);
  goto out_err;
 }
out:






 if (VAR_7)
  FUNC_12(VAR_7);
 FUNC_5(&VAR_4);
 return VAR_13;
out_err:
 FUNC_2("NFS: Couldn't create callback socket or server thread; "
  "err = %d\n", VAR_13);
 VAR_11->users--;
 goto out;
}
