
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {int dummy; } ;
struct TYPE_2__ {int fh_dentry; } ;
struct nfsd4_compound_state {TYPE_1__ current_fh; int save_fh; } ;
typedef int __be32 ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __be32
FUNC_1(struct svc_rqst *VAR_2, struct nfsd4_compound_state *VAR_3,
      void *VAR_4)
{
 if (!VAR_3->current_fh.fh_dentry)
  return VAR_1;

 FUNC_0(&VAR_3->save_fh, &VAR_3->current_fh);
 return VAR_0;
}
