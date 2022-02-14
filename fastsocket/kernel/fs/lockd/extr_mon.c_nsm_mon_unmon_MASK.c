
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rpc_message {int * rpc_proc; struct nsm_res* rpc_resp; struct nsm_args* rpc_argp; } ;
struct rpc_clnt {int * cl_procinfo; } ;
struct nsm_res {int dummy; } ;
struct nsm_handle {int sm_mon_name; int sm_priv; } ;
struct nsm_args {int vers; int mon_name; int proc; int prog; int * priv; } ;


 scalar_t__ FUNC_0 (struct rpc_clnt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rpc_clnt*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct nsm_res*,int ,int) ;
 struct rpc_clnt* FUNC_4 () ;
 int FUNC_5 (struct rpc_clnt*,struct rpc_message*,int ) ;
 int FUNC_6 (struct rpc_clnt*) ;

__attribute__((used)) static int FUNC_7(struct nsm_handle *VAR_2, u32 VAR_3, struct nsm_res *VAR_4)
{
 struct rpc_clnt *VAR_5;
 int VAR_6;
 struct nsm_args VAR_7 = {
  .priv = &VAR_2->sm_priv,
  .prog = VAR_1,
  .vers = 3,
  .proc = VAR_0,
  .mon_name = VAR_2->sm_mon_name,
 };
 struct rpc_message VAR_8 = {
  .rpc_argp = &VAR_7,
  .rpc_resp = VAR_4,
 };

 VAR_5 = FUNC_4();
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);
  FUNC_2("lockd: failed to create NSM upcall transport, "
    "status=%d\n", VAR_6);
  goto out;
 }

 FUNC_3(VAR_4, 0, sizeof(*VAR_4));

 VAR_8.rpc_proc = &VAR_5->cl_procinfo[VAR_3];
 VAR_6 = FUNC_5(VAR_5, &VAR_8, 0);
 if (VAR_6 < 0)
  FUNC_2("lockd: NSM upcall RPC failed, status=%d\n",
    VAR_6);
 else
  VAR_6 = 0;
 FUNC_6(VAR_5);
 out:
 return VAR_6;
}
