
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd4_read {scalar_t__ rd_offset; int * rd_fhp; struct svc_rqst* rd_rqstp; int * rd_filp; int rd_stateid; } ;
struct nfsd4_compound_state {int current_fh; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct nfsd4_compound_state*,int *,int ,int **) ;
 int FUNC_4 () ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static __be32
FUNC_5(struct svc_rqst *VAR_4, struct nfsd4_compound_state *VAR_5,
    struct nfsd4_read *VAR_6)
{
 __be32 VAR_7;



 VAR_6->rd_filp = ((void*)0);
 if (VAR_6->rd_offset >= VAR_0)
  return VAR_3;

 FUNC_2();

 if ((VAR_7 = FUNC_3(VAR_5, &VAR_6->rd_stateid,
       VAR_1, &VAR_6->rd_filp))) {
  FUNC_0("NFSD: nfsd4_read: couldn't process stateid!\n");
  goto out;
 }
 if (VAR_6->rd_filp)
  FUNC_1(VAR_6->rd_filp);
 VAR_7 = VAR_2;
out:
 FUNC_4();
 VAR_6->rd_rqstp = VAR_4;
 VAR_6->rd_fhp = &VAR_5->current_fh;
 return VAR_7;
}
