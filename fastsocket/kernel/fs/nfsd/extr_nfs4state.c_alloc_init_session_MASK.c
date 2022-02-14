
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int rq_xprt; } ;
struct sockaddr {int dummy; } ;
struct nfsd4_session {int se_cb_seq_nr; int se_flags; int se_ref; int se_perclnt; int se_hash; int se_sessionid; int se_cb_prog; int se_conns; struct nfs4_client* se_client; int se_fchannel; } ;
struct nfsd4_channel_attrs {int maxreqs; int maxresp_cached; } ;
struct nfsd4_create_session {int flags; int callback_prog; struct nfsd4_channel_attrs fore_channel; } ;
struct TYPE_2__ {int cb_addrlen; int cb_addr; int cb_xprt; } ;
struct nfs4_client {TYPE_1__ cl_cb_conn; struct nfsd4_session* cl_cb_session; int cl_sessions; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct nfsd4_session* FUNC_1 (int,int) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfsd4_session*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct nfsd4_channel_attrs*,int,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (struct svc_rqst*,struct nfsd4_session*) ;
 int FUNC_10 (struct nfs4_client*) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct sockaddr*,struct sockaddr*) ;
 int * VAR_2 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 struct sockaddr* FUNC_16 (struct svc_rqst*) ;
 int FUNC_17 (struct sockaddr*) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static struct nfsd4_session *FUNC_19(struct svc_rqst *VAR_3, struct nfs4_client *VAR_4, struct nfsd4_create_session *VAR_5)
{
 struct nfsd4_session *VAR_6;
 struct nfsd4_channel_attrs *VAR_7 = &VAR_5->fore_channel;
 int VAR_8, VAR_9;
 int VAR_10;
 int VAR_11;
 VAR_9 = FUNC_12(VAR_7->maxresp_cached);
 VAR_8 = FUNC_8(VAR_9, VAR_7->maxreqs);

 VAR_6 = FUNC_1(VAR_9, VAR_8);
 if (!VAR_6) {
  FUNC_11(VAR_9, VAR_7->maxreqs);
  return ((void*)0);
 }
 FUNC_5(&VAR_6->se_fchannel, VAR_7, VAR_8, VAR_9);

 VAR_6->se_client = VAR_4;
 FUNC_3(VAR_6);

 FUNC_0(&VAR_6->se_conns);

 VAR_6->se_cb_seq_nr = 1;
 VAR_6->se_flags = VAR_5->flags;
 VAR_6->se_cb_prog = VAR_5->callback_prog;
 FUNC_6(&VAR_6->se_ref);
 VAR_11 = FUNC_4(&VAR_6->se_sessionid);
 FUNC_14(&VAR_1);
 FUNC_7(&VAR_6->se_hash, &VAR_2[VAR_11]);
 FUNC_7(&VAR_6->se_perclnt, &VAR_4->cl_sessions);
 FUNC_15(&VAR_1);

 VAR_10 = FUNC_9(VAR_3, VAR_6);

 if (VAR_10) {
  FUNC_2(&VAR_6->se_ref);
  return ((void*)0);
 }
 if (!VAR_4->cl_cb_session && (VAR_5->flags & VAR_0)) {
  struct sockaddr *VAR_12 = FUNC_16(VAR_3);

  VAR_4->cl_cb_session = VAR_6;
  VAR_4->cl_cb_conn.cb_xprt = VAR_3->rq_xprt;
  FUNC_18(VAR_3->rq_xprt);
  FUNC_13((struct sockaddr *)&VAR_4->cl_cb_conn.cb_addr, VAR_12);
  VAR_4->cl_cb_conn.cb_addrlen = FUNC_17(VAR_12);
  FUNC_10(VAR_4);
 }
 return VAR_6;
}
