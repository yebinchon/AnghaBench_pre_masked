
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time_t ;
struct svc_rqst {int dummy; } ;
struct TYPE_2__ {int ia_valid; } ;
struct nfsd4_setattr {TYPE_1__ sa_iattr; int * sa_acl; int sa_bmval; int sa_stateid; } ;
struct nfsd4_compound_state {int current_fh; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct svc_rqst*,struct nfsd4_compound_state*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct nfsd4_compound_state*,int *,int ,int *) ;
 int FUNC_6 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (struct svc_rqst*,int *,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (struct svc_rqst*,int *,TYPE_1__*,int ,int ) ;

__attribute__((used)) static __be32
FUNC_9(struct svc_rqst *VAR_4, struct nfsd4_compound_state *VAR_5,
       struct nfsd4_setattr *VAR_6)
{
 __be32 VAR_7 = VAR_2;

 if (VAR_6->sa_iattr.ia_valid & VAR_0) {
  FUNC_4();
  VAR_7 = FUNC_5(VAR_5,
   &VAR_6->sa_stateid, VAR_1, ((void*)0));
  FUNC_6();
  if (VAR_7) {
   FUNC_1("NFSD: nfsd4_setattr: couldn't process stateid!\n");
   return VAR_7;
  }
 }
 VAR_7 = FUNC_3(&VAR_5->current_fh);
 if (VAR_7)
  return VAR_7;
 VAR_7 = VAR_2;

 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6->sa_bmval,
        VAR_3);
 if (VAR_7)
  goto out;

 if (VAR_6->sa_acl != ((void*)0))
  VAR_7 = FUNC_7(VAR_4, &VAR_5->current_fh,
         VAR_6->sa_acl);
 if (VAR_7)
  goto out;
 VAR_7 = FUNC_8(VAR_4, &VAR_5->current_fh, &VAR_6->sa_iattr,
    0, (time_t)0);
out:
 FUNC_2(&VAR_5->current_fh);
 return VAR_7;
}
