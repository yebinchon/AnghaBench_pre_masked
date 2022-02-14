
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct svc_rqst {struct nfsd4_compoundres* rq_resp; } ;
struct TYPE_8__ {int data; scalar_t__ len; } ;
struct nfsd4_open {int op_claim_type; TYPE_3__* op_stateowner; int op_clientid; scalar_t__ op_create; TYPE_1__ op_fname; } ;
struct nfsd4_compoundres {int cstate; } ;
struct TYPE_9__ {int fh_handle; } ;
struct nfsd4_compound_state {TYPE_3__* replay_owner; TYPE_2__ current_fh; int session; } ;
struct nfs4_replay {int rp_openfh; } ;
typedef scalar_t__ __be32 ;
struct TYPE_10__ {int so_confirmed; struct nfs4_replay so_replay; } ;






 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct svc_rqst*,TYPE_2__*,struct nfsd4_open*) ;
 scalar_t__ FUNC_2 (struct svc_rqst*,TYPE_2__*,struct nfsd4_open*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (struct svc_rqst*,TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 scalar_t__ FUNC_11 (struct svc_rqst*,struct nfsd4_compound_state*,struct nfsd4_open*) ;
 scalar_t__ FUNC_12 (struct nfsd4_compound_state*) ;
 scalar_t__ FUNC_13 (int *,struct nfsd4_open*) ;
 scalar_t__ FUNC_14 (struct svc_rqst*,TYPE_2__*,struct nfsd4_open*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static __be32
FUNC_15(struct svc_rqst *VAR_6, struct nfsd4_compound_state *VAR_7,
    struct nfsd4_open *VAR_8)
{
 __be32 VAR_9;
 struct nfsd4_compoundres *VAR_10;

 FUNC_3("NFSD: nfsd4_open filename %.*s op_stateowner %p\n",
  (int)VAR_8->op_fname.len, VAR_8->op_fname.data,
  VAR_8->op_stateowner);


 if (VAR_8->op_create && VAR_8->op_claim_type != 129)
  return VAR_2;

 if (FUNC_12(VAR_7))
  FUNC_0(&VAR_8->op_clientid, VAR_7->session);

 FUNC_9();


 VAR_10 = VAR_6->rq_resp;
 VAR_9 = FUNC_13(&VAR_10->cstate, VAR_8);
 if (VAR_9 == VAR_5) {
  struct nfs4_replay *VAR_11 = &VAR_8->op_stateowner->so_replay;
  FUNC_5(&VAR_7->current_fh);
  FUNC_4(&VAR_7->current_fh.fh_handle,
    &VAR_11->rp_openfh);
  VAR_9 = FUNC_6(VAR_6, &VAR_7->current_fh, 0, VAR_0);
  if (VAR_9)
   FUNC_3("nfsd4_open: replay failed"
    " restoring previous filehandle\n");
  else
   VAR_9 = VAR_5;
 }
 if (VAR_9)
  goto out;

 VAR_9 = FUNC_11(VAR_6, VAR_7, VAR_8);
 if (VAR_9)
  goto out;



 VAR_9 = VAR_1;
 if (FUNC_7() && VAR_8->op_claim_type != 128)
  goto out;
 VAR_9 = VAR_3;
 if (!FUNC_7() && VAR_8->op_claim_type == 128)
  goto out;

 switch (VAR_8->op_claim_type) {
  case 131:
  case 129:






   VAR_9 = FUNC_2(VAR_6, &VAR_7->current_fh,
      VAR_8);
   if (VAR_9)
    goto out;
   break;
  case 128:
   VAR_8->op_stateowner->so_confirmed = 1;






   VAR_9 = FUNC_1(VAR_6, &VAR_7->current_fh,
       VAR_8);
   if (VAR_9)
    goto out;
   break;
              case 130:
   VAR_8->op_stateowner->so_confirmed = 1;
   FUNC_3("NFSD: unsupported OPEN claim type %d\n",
    VAR_8->op_claim_type);
   VAR_9 = VAR_4;
   goto out;
  default:
   FUNC_3("NFSD: Invalid OPEN claim type %d\n",
    VAR_8->op_claim_type);
   VAR_9 = VAR_2;
   goto out;
 }





 VAR_9 = FUNC_14(VAR_6, &VAR_7->current_fh, VAR_8);
out:
 if (VAR_8->op_stateowner) {
  FUNC_8(VAR_8->op_stateowner);
  VAR_7->replay_owner = VAR_8->op_stateowner;
 }
 FUNC_10();
 return VAR_9;
}
