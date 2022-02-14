
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct nfsd4_compound_state {int current_fh; } ;
typedef int __be32 ;


 int FUNC_0 (struct svc_rqst*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static __be32
FUNC_2(struct svc_rqst *VAR_0, struct nfsd4_compound_state *VAR_1,
  void *VAR_2)
{
 __be32 VAR_3;

 FUNC_1(&VAR_1->current_fh);
 VAR_3 = FUNC_0(VAR_0, &VAR_1->current_fh);
 return VAR_3;
}
