
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_netobj {int dummy; } ;
struct svc_rqst {int rq_cred; int rq_flavor; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int cb_work; } ;
struct nfs4_client {int * cl_cb_session; int cl_cred; int cl_flavor; int cl_addr; int cl_cb_waitq; int cl_cb_slot_busy; int cl_time; TYPE_1__ cl_cb_null; int cl_lock; int cl_lru; int cl_delegations; int cl_openowners; int cl_strhash; int cl_idhash; int cl_cb_set; int cl_refcount; int cl_recdir; int * cl_principal; int cl_sessions; } ;
typedef int nfs4_verifier ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct nfs4_client* FUNC_2 (struct xdr_netobj) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct nfs4_client*,int *) ;
 int FUNC_7 (struct nfs4_client*) ;
 int FUNC_8 (struct nfs4_client*) ;
 int FUNC_9 () ;
 int * FUNC_10 (char*,int ) ;
 int FUNC_11 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_12 (struct sockaddr*,struct sockaddr*) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *) ;
 struct sockaddr* FUNC_15 (struct svc_rqst*) ;
 char* FUNC_16 (struct svc_rqst*) ;

__attribute__((used)) static struct nfs4_client *FUNC_17(struct xdr_netobj VAR_3, char *VAR_4,
  struct svc_rqst *VAR_5, nfs4_verifier *VAR_6)
{
 struct nfs4_client *VAR_7;
 struct sockaddr *VAR_8 = FUNC_15(VAR_5);
 char *VAR_9;

 VAR_7 = FUNC_2(VAR_3);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 FUNC_0(&VAR_7->cl_sessions);

 VAR_9 = FUNC_16(VAR_5);
 if (VAR_9) {
  VAR_7->cl_principal = FUNC_10(VAR_9, VAR_0);
  if (VAR_7->cl_principal == ((void*)0)) {
   FUNC_7(VAR_7);
   return ((void*)0);
  }
 }

 FUNC_11(VAR_7->cl_recdir, VAR_4, VAR_1);
 FUNC_3(&VAR_7->cl_refcount, 0);
 FUNC_3(&VAR_7->cl_cb_set, 0);
 FUNC_0(&VAR_7->cl_idhash);
 FUNC_0(&VAR_7->cl_strhash);
 FUNC_0(&VAR_7->cl_openowners);
 FUNC_0(&VAR_7->cl_delegations);
 FUNC_0(&VAR_7->cl_lru);
 FUNC_14(&VAR_7->cl_lock);
 FUNC_1(&VAR_7->cl_cb_null.cb_work, VAR_2);
 VAR_7->cl_time = FUNC_9();
 FUNC_4(0, &VAR_7->cl_cb_slot_busy);
 FUNC_13(&VAR_7->cl_cb_waitq, "Backchannel slot table");
 FUNC_6(VAR_7, VAR_6);
 FUNC_12((struct sockaddr *) &VAR_7->cl_addr, VAR_8);
 VAR_7->cl_flavor = VAR_5->rq_flavor;
 FUNC_5(&VAR_7->cl_cred, &VAR_5->rq_cred);
 FUNC_8(VAR_7);
 VAR_7->cl_cb_session = ((void*)0);
 return VAR_7;
}
