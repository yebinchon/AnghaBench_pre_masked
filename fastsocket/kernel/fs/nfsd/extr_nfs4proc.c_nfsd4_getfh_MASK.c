
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int dummy; } ;
struct svc_fh {int fh_dentry; } ;
struct nfsd4_compound_state {struct svc_fh current_fh; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __be32
FUNC_0(struct svc_rqst *VAR_2, struct nfsd4_compound_state *VAR_3,
     struct svc_fh **VAR_4)
{
 if (!VAR_3->current_fh.fh_dentry)
  return VAR_1;

 *VAR_4 = &VAR_3->current_fh;
 return VAR_0;
}
