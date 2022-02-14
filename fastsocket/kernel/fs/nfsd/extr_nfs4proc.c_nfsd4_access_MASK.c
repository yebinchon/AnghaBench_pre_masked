
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int current_fh; } ;
struct nfsd4_access {int ac_req_access; int ac_resp_access; int ac_supported; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct svc_rqst*,int *,int*,int *) ;
 int VAR_1 ;

__attribute__((used)) static __be32
FUNC_1(struct svc_rqst *VAR_2, struct nfsd4_compound_state *VAR_3,
      struct nfsd4_access *VAR_4)
{
 if (VAR_4->ac_req_access & ~VAR_0)
  return VAR_1;

 VAR_4->ac_resp_access = VAR_4->ac_req_access;
 return FUNC_0(VAR_2, &VAR_3->current_fh, &VAR_4->ac_resp_access,
      &VAR_4->ac_supported);
}
